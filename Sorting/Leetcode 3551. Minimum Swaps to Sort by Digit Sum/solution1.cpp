class Solution {
public:
    int sumdigit(int n){
        int sum=0;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>copy=nums;
        int x=0;
        for(int i=0;i<n;i++){
            x=sumdigit(copy[i]);
            ans.push_back(x);
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(ans[j]<ans[i]){
                    swap(copy[i],copy[j]);
                    swap(ans[i],ans[j]);
                }
                else if(ans[i]==ans[j]){
                    if(copy[i]>copy[j]){
                        swap(copy[i],copy[j]);
                        swap(ans[i],ans[j]);
                    }
                    else continue;
                }
                else continue;
            }
        }
        vector<int>idx;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[j]==copy[i]){
                    idx.push_back(j);
                    break;
                }
            }
        }
        vector<int>visited(n,false);
        for(int i=0;i<n;i++){
            if(visited[i]) continue;
            int cycleSize=0;
            int j=i;
            while(!visited[j]){
                visited[j]=true;
                cycleSize++;
                j=idx[j];
            }
            if(cycleSize>1) swaps+=cycleSize-1;
        }
        return swaps;
    }
};
