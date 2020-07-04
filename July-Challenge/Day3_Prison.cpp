/*
There are 8 prison cells in a row, and each cell is either occupied or vacant.

Each day, whether the cell is occupied or vacant changes according to the following rules:

If a cell has two adjacent neighbors that are both occupied or both vacant, then the cell becomes occupied.
Otherwise, it becomes vacant.
(Note that because the prison is a row, the first and the last cells in the row can't have two adjacent neighbors.)

We describe the current state of the prison in the following way: cells[i] == 1 if the i-th cell is occupied, else cells[i] == 0.

Given the initial state of the prison, return the state of the prison after N days (and N such changes described above.)

 

*/


class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
       
        N %= 14;
        if(N==0)
            N=14;
        
        for(int i =0;i<N;i++){
            
            int prev = cells[0];
            int next;

            cout<<cells[0]<<" ";
            cells[0] = 0;
            for(int j = 1;j < 7;j++ ){
                next = cells[j+1];
                if(prev == next){
                    prev = cells[j];
                    cells[j] = 1;
                }else {
                    prev = cells[j];
                    cells[j] = 0;
                }
                cout<<cells[j]<<" ";
            }
            cells[7] = 0;
            cout<<cells[0]<<"\n";
            
        }
        return cells;
    }
};
