class Solution {
  public:
    bool check(vector<int>&arr,int k,long long maxPages){
        int n=arr.size();
        int student=1;
        long long pages=0;
        for(int i=0;i<n;i++){
            if(pages+arr[i]>maxPages){
                student++;
                pages=arr[i];
            }
            else pages+=arr[i];
        }
        if(student<=k) return true;
        else return false;
    }
    int findPages(vector<int> &arr, int k) {
        int n=arr.size();
        if(k>n) return -1;
        long long maxPages=INT_MIN;
        long long sum=0;
        for(int i=0;i<n;i++){
            maxPages=max((long long)arr[i],maxPages);
            sum+=arr[i];
        }
        long long low=maxPages;
        long long high=sum;
        long long ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(check(arr,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return (int)ans;
    }
};
