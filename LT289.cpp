class Solution {
public:

   bool check(int i,int j,vector<vector<int>>& board,int m,int n){
       if(i>=0 && j>=0 && i<m && j<n){
           if(board[i][j]){
               return true;
           }
           
       }
       return false;
   }
    
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> copy;
        copy = board; 

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int count =0;
                if(check(i-1,j-1,copy,m,n)){
                    count++;
                }
                if(check(i-1,j,copy,m,n)){
                    count++;
                }if(check(i-1,j+1,copy,m,n)){
                    count++;
                }if(check(i,j-1,copy,m,n)){
                    count++;
                }if(check(i,j+1,copy,m,n)){
                    count++;
                }if(check(i+1,j-1,copy,m,n)){
                    count++;
                }if(check(i+1,j,copy,m,n)){
                    count++;
                }if(check(i+1,j+1,copy,m,n)){
                    count++;
                }
                cout<< count<<" ";

                if(count < 2){
                    board[i][j]=0;
                }else if(count > 3){
                    board[i][j]=0;
                }else if (board[i][j]==1 && (count ==2 || count ==3)){
                    board[i][j]=1;
                }else if (board[i][j]==0 && count ==3){
                    board[i][j]=1;
                }
            }
        }
    }
};
