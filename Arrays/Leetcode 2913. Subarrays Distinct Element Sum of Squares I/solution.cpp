class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n=nums.size();
        
        int sum=0;
        
        for(int i=0;i<n;i++){
            vector<int>distinct;
            int count=0;
            for(int j=i;j<n;j++){
                bool found=false;
                for(int k=0;k<distinct.size();k++){
                    if(distinct[k]==nums[j]){
                        found=true;
                        break;
                    }
                }
                if(found==false){
                    distinct.push_back(nums[j]);
                    count++;
                }
                sum+=(count*count);
            }
            
        }
        return sum;
    }
};
