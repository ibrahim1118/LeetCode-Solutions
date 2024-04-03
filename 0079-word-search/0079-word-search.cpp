class Solution {
public:
    set<string>words; 
    int n , m;
    int s; 
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size(); 
        m =board[0].size(); 
        s = word.size(); 
        for (int i =0;i<n;i++)
        {
            for (int j=0;j<m;j++)
                if ( solve(i , j , 0 , board ,  word))
                      return true; 
        }
        return false;  
    }
    bool solve (int i, int j, int k, vector<vector<char>>& board, string& word)
    {
        if (i < 0 || i >= n || j < 0 || j >= m ||board[i][j] != word[k])
            return false;
        if (k == s-1)
            return true;
        char a=board[i][j];
        board[i][j] = '.';
        bool a1 = solve(i+1, j, k+1, board, word);
        bool a2 = solve(i, j+1, k+1, board, word);
        bool a3 = solve(i-1, j, k+1, board, word);
        bool a4 = solve(i, j-1, k+1, board, word);
        board[i][j] = a; // backtracking
        return a1 || a2 || a3 || a4;
    }
};