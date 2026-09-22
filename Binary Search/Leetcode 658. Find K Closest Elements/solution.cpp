class Solution {
public:
    vector<int> findClosestElements(vector<int>&nums, int k, int x) {
        int n=nums.size();
        vector<int>ans(k);
        if(x<nums[0]){
            for(int i=0;i<k;i++){
                ans[i]=nums[i];
            }
            return ans;
        }
        if(x>nums[n-1]){
            int i=n-1;
            int j=k-1;
            while(j>=0){
                ans[j]=nums[i];
                j--;
                i--;
            }
            return ans;
        }
            int low=0;
            int high=n-1; 
            bool flag=false;
            int idx=0;
            int mid=-1;
            while(low<=high){
                mid=low+(high-low)/2;
                if(nums[mid]==x){
                    flag=true;
                    ans[idx]=nums[mid];
                    idx++;
                    break;
                }
                else if(nums[mid]>x) high=mid-1;
                else low=mid+1;
            }
            int lb=high;
            int ub=low;
            if(flag==true){
                lb=mid-1;
                ub=mid+1;
            }
            while(idx<k&&lb>=0&&ub<=n-1){
                int d1=abs(x-nums[lb]);
                int d2=abs(x-nums[ub]);
                if(d1<=d2){
                    ans[idx]=nums[lb];
                    lb--;
                }
                else{
                    ans[idx]=nums[ub];
                    ub++;
                }
                idx++;
            }
            if(lb<0){
                while(idx<k){
                    ans[idx]=nums[ub];
                    ub++;
                    idx++;
                }
            }
            if(ub>n-1){
                while(idx<k){
                    ans[idx]=nums[lb];
                    lb--;
                    idx++;
                }
            }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
