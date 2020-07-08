/*

You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.

Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).

The island doesn't have "lakes" (water inside that isn't connected to the water around the island). One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

 

Example:

Input:
[[0,1,0,0],
 [1,1,1,0],
 [0,1,0,0],
 [1,1,0,0]]

Output: 16

Explanation: The perimeter is the 16 yellow stripes in the image below:




*/

class Solution {
    
    int computePerim(vector<vector<int>>& grid, int i , int j, int r , int c)
    {
        int temp = 0;
        //check top
        if(i!= 0 && !grid[i-1][j])
        {
            temp++;
        }
        // check bottom
        if(i!=r && !grid[i+1][j])
        {
            
            temp++;
        }
         //check left
        if(j!= 0 && !grid[i][j-1])
        {
            
            temp++;
        }
        // check right
        if(j!=c && !grid[i][j+1])
        {
            temp++;

        }

        if(i ==0 )
        {
            temp++;
        }
        if(j ==0 )
        {
            temp++;
        }
        if(i ==r )
        {

            temp++;
        }
        if(j ==c )
        {
            temp++;
        }
        cout<<temp <<" ";
        return temp;
    }
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int perimeter = 0;
        
        for(int i =0; i< r;i++)
            
        {
            for(int j =0;j<c;j++)
            {
                if(grid[i][j] == 1)
                {
                    perimeter+= computePerim(grid, i, j, r-1, c-1);
                }
            }
            cout<<endl;
        }
        return perimeter;
    }
};
