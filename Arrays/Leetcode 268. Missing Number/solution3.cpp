class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        if(arr[0]!=0) return 0;
        int diff=0;
        int missing=n; 
        for(int i=1;i<n;i++){
            diff=arr[i]-arr[i-1];
            if(diff!=1) missing=arr[i-1]+1;
        }
        return missing;
    }
}; 
