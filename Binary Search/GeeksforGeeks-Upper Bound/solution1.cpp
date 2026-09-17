class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n=arr.size();
        int upperbound=n;
        for(int i=0;i<n;i++){
            if(arr[i]>target){
            upperbound=i;
            break;
            }
            else continue;
        }
        return upperbound;
    }
};
