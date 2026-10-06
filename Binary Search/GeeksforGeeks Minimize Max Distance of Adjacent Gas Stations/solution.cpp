class Solution {
  public:
    bool check(vector<int>&stations,double mid,int k){
        int n=stations.size();
        double dist=0;
        int station=0;
        for(int i=1;i<n;i++){
            dist=stations[i]-stations[i-1];
            station += (int)ceil(dist / mid) - 1;
        }
        if(station>k) return false;
        return true;
    }
    double minMaxDist(vector<int> &stations, int k) {
        int n=stations.size();
        sort(stations.begin(),stations.end());
        double low=0;
        double high=stations[n-1]-stations[0];
        double ans=-1;
        for(int i=0;i<100;i++){
            double mid=(low+high)/2;
            if(check(stations,mid,k)){
                ans=mid;
                high=mid;
            }
            else low=mid;
        }
        return ans;
    }
};
