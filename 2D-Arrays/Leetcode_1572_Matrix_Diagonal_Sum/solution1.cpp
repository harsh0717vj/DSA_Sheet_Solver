class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum1=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) sum1+=mat[i][j];
            }
        }
        int k=0;
        int l=n-1;
        int sum2=0;
        while(k<=n-1&&l>=0){  
                  
            sum2+=mat[k][l];
            
            k++;
            l--;
            
        }
        int sum=sum1+sum2;
        if(n%2!=0) sum-=mat[n/2][n/2];
        return sum;
    }
};
