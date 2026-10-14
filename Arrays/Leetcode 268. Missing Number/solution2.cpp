class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int missing=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]!=i){ 
                missing=i;
                break;
            }
            else missing=n;
        }
        return missing;
    }
}; 
