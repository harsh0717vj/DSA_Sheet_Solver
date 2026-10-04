class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int i=0;
        int j=0;
        int count=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<=b[j]){
                count++;
                if(count==k) return a[i];
                i++;
            }
            else{
                count++;
                if(count==k) return b[j];
                j++;
            }
        }
        while(i<a.size()){
            count++;
            if(count==k) return a[i];
            i++;
        }
        while(j<b.size()){
            count++;
            if(count==k) return b[j];
            j++;
        }
        return -1;
    }
};
