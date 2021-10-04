class Solution {
public:
    
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int ans = 0;
        const int sides = 4;
        for(int row = 0; row < grid.size(); row++){
            for(int col = 0; col < grid[row].size(); col++){
                
                if(grid[row][col] == 1){
                    ans += sides;
               
                    if( row + 1 < grid.size() && grid[row + 1][col] == 1) // down
                        ans--;
                    if( row - 1 >= 0 && grid[row - 1][col] == 1) // up
                        ans --;


                    if(col + 1 < grid[row].size() && grid[row][col + 1] == 1) // right
                        ans--;
                    if(col - 1 >= 0 && grid[row][col - 1] == 1) // left
                        ans --;
                    }
                
            }
        }
        
        return ans;
    }
};
