class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n=arr.size();
        int ans=-1;
        if(arr[0]>x) return -1;
        else if(n==1) return 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=x){
                ans=i;
            }
            else{
                ans=i-1;
                break;        
            }
        
        }
        return ans;
    }
};
