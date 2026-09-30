class Solution {
public:
    bool check(vector<int>&dist,int mid,double hour){
        double sum=0;
        int n=dist.size();
        for(int i=0;i<n;i++){
            double rem=0;
            if(i<n-1) rem=(dist[i]+mid-1)/mid;
            else rem=(double)dist[i]/mid;
            sum+=rem;
        }
        if(sum<=hour) return true;
        return false; 
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int low=1;
        int high = 10000000;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(check(dist,mid,hour)){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
