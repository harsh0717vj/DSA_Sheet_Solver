class Solution {
  public:
    bool check(vector<int>&arr,int mid,int k){
        int n=arr.size();
        int painter=1;
        int time=0;
        for(int i=0;i<n;i++){
            if(time+arr[i]>mid){
                time=arr[i];
                painter++;
            }
            else time+=arr[i];
        }
        if(painter<=k) return true;
        else return false;
    }
    int minTime(vector<int>& arr, int k) {
        int n=arr.size();
        int maxTime=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            maxTime=max(arr[i],maxTime);
            sum+=arr[i];
        }
        int low=maxTime;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(arr,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
