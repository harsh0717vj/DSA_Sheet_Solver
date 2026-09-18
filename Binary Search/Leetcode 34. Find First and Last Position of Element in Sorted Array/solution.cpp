class Solution {
public:
    int firstPosition(vector<int>&v,int target){
        int n=v.size();
        int low=0;
        int high=n-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(v[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return first;
    }
    int lastPosition(vector<int>&v,int target){
        int n=v.size();
        int low=0;
        int high=v.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(v[mid]==target){
                last=mid;
                low=mid+1;
            }
            else if(v[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& v, int target) {
        int first=firstPosition(v,target);
        int last=lastPosition(v,target);
        return {first,last};
    }
};
