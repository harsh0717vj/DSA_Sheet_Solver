class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n=arr.size();
        int lowerbound=n;
        for(int i=0;i<n;i++){
            if(arr[i]>=target){
                lowerbound=i;
                break;
            }
            else continue;
        }
        return lowerbound;
    }
};
