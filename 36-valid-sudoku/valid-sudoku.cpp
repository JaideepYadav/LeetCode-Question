class Solution {
public:
    bool mat(vector<vector<char>>& board, int row, int col, char val) {
    int count = 0;
    for (int i = row; i < row + 3; ++i) {
        for (int j = col; j < col + 3; ++j) {
            if (board[i][j] == val) count++;
        }
    }
    return count <= 1;
}

    bool hori(vector<vector<char>>&board,char a,int ind){
        int count=0;
        for(int i=0;i<9;i++){
            if(board[ind][i]==a)count++;
        }
        if(count>1)return false;
        return true;
    }
      bool vert(vector<vector<char>>&board,char a,int ind){
        int count=0;
        for(int i=0;i<9;i++){
            if(board[i][ind]==a)count++;
        }
        if(count>1)return false;
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            char val = board[i][j];
            if (val == '.') continue;

            if (!hori(board, val, i) || !vert(board, val, j) ||
                !mat(board, i - i % 3, j - j % 3, val)) {
                return false;
            }
        }
    }
    return true;


    }
};