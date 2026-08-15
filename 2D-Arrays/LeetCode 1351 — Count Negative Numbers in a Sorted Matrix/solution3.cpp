class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count=0;
        int i=grid.size()-1;
        int j=0;
        while(i>=0&&j<grid[i].size()){
            if(grid[i][j]<0){
                count+=(grid[i].size()-j);
                i--;
            }
            else j++;
        }
        return count;
    }
};
