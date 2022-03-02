#define  m  board.size()
#define n  board[0].size()
class Solution {
public:
    
    void change(int i ,int j ,vector<vector<char>>& board)
    {
        if( i<0 or i>m-1 or j<0 or j>n-1 or board[i][j]!='O'  ) return ;
        board[i][j]='L';
        change(i-1,j,board);
        change(i+1,j,board);
        change(i,j-1,board);
        change(i,j+1,board);
    }
    
    void solve(vector<vector<char>>& board) {
        if(m == 0) return ;
        for(int i=0 ;i<m ;i++)
         {
             if(board[i][0] == 'O')change(i,0,board);
             if(board[i][n-1] == 'O')change(i,n-1,board);
         }
        for(int j = 0 ;j<n ;j++)
          {
              if(board[0][j] == 'O')change(0,j,board);
              if(board[m-1][j] == 'O')change(m-1,j,board);
          }
     
        for(int i = 0 ;i<m ;i++)
            for(int j = 0 ;j<n ;j++)
            {
                if(board[i][j] == 'O') board[i][j] = 'X';
                if(board[i][j] == 'L') board[i][j] = 'O';
            }
        
    }
};