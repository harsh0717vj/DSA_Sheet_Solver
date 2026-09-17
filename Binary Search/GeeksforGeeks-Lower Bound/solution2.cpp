class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0;
        int high=n;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=target) high=mid;
            else low=mid+1;
        }
        return low;
    }
};
