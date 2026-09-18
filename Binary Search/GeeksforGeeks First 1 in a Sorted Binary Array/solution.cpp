class Solution {
  public:
    int firstIndex(vector<int> &arr) {
       int low=0;
       int high=arr.size()-1;
       while(low<=high){
           int mid=low+(high-low)/2;
           if(arr[mid]==1){
               if(arr[mid-1]==1) high=mid-1;
               else return mid;
           }
           else if(arr[mid]<1) low=mid+1;
           else high=mid-1;
       }
       return -1;
    }
};
