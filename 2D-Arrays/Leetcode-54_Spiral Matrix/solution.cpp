class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int minrow=0,mincol=0;
        int maxrow=m-1,maxcol=n-1;
        vector<int>ans;
        while(minrow<=maxrow && mincol<=maxcol){
            for(int i=mincol;i<=maxcol;i++){
                ans.push_back(matrix[minrow][i]);
            }
            minrow++;
            if(minrow>maxrow||mincol>maxcol) break;
            for(int j=minrow;j<=maxrow;j++){
                ans.push_back(matrix[j][maxcol]);
            }
            maxcol--;
            if(minrow>maxrow||mincol>maxcol) break;
            for(int k=maxcol;k>=mincol;k--){
                ans.push_back(matrix[maxrow][k]);
            }
            maxrow--;
            if(minrow>maxrow||mincol>maxcol) break;
            for(int l=maxrow;l>=minrow;l--){
                ans.push_back(matrix[l][mincol]);
            }
            mincol++;
            if(minrow>maxrow||mincol>maxcol) break;
        }
        return ans;
    }
};
