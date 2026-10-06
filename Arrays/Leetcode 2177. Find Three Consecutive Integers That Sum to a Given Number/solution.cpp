class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3!=0) return {};
        vector<long long>ans;
        long long middle=num/3;
        ans.push_back(middle-1);
        ans.push_back(middle);
        ans.push_back(middle+1);
        return ans;
    }
};
