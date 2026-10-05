class Solution {
  public:
    bool check(vector<int>&arr,int mid,int k){
        int n=arr.size();
        int cows=1;
        int index=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-index>=mid){
                index=arr[i];
                cows++;
            }
        }
        if(cows>=k) return true;
        else return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=0;
        int high=arr[n-1]-arr[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(arr,mid,k)){
                ans=mid;
                low=mid+1;
                
            }
            else high=mid-1;
            
        }
        return ans;
    }
};
