class Solution {
public:

 void isLand(vector<vector<char>>& grid, int i, int j){

            // if going out of boundary which is literally water, simply return

            if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){

                return;
            }
            
            // if already water, return

            if(grid[i][j]=='0')
            return;

            // else, make it water

            grid[i][j]='0';

            // check if all other surrounding it are land or water
            isLand(grid,i+1,j);
            isLand(grid,i-1,j);
            isLand(grid,i,j+1);
            isLand(grid,i,j-1);
}


    int numIslands(vector<vector<char>>& grid) {
        
        int count=0;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                if(grid[i][j]=='1'){
                    
                    // check for island
                    isLand(grid,i,j);
                    // island found
                    count++;
                }

                
            }
        }

       

        return count;
    }
};