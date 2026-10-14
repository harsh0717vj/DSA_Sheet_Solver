class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int nsum=n*(n+1)/2;
        int sum=0;
        for(int i=0;i<n;i++){
            
            sum+=arr[i];
        }
        int missing=nsum-sum;
        return missing;
    }
}; 
