class Solution {
private:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int start) {
        if(start >= word.size()) return true;
        if(i < 0 || j < 0 || i >= board.size() || j >= board[i].size() || word[start] != board[i][j]) return false;
        board[i][j] = '#';
        bool retVal =  dfs(board, word, i+1, j, start+1) ||
        dfs(board, word, i-1, j, start+1) ||
        dfs(board, word, i, j+1, start+1) ||
        dfs(board, word, i, j-1, start+1);
        board[i][j] = word[start];
        return retVal;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++) {
            for(int j=0; j<board[i].size(); j++) {
                if(dfs(board, word, i, j, 0)) return true;
            }
        }
        return false;
    }
};