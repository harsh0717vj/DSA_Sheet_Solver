class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int n=arr.size(); 
        int ans=-1;
        for(int i=0;i<n;i++){
            if(arr[i]<x) continue;
            else{
                ans=i;
                break;
            }
        }
        return ans;
    }
};
