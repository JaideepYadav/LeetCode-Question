class Solution {
public:
vector<vector<int>>direc{{1,0},{-1,0},{0,1},{0,-1}};
    bool find(int i,int j,int n,int m,vector<vector<char>>& board,string &word,int ind){
        if(ind==word.size())return true;
        if(i<0 ||j<0||j>=n||i>=m ||board[i][j]=='$'){
            return false;
        }
        if(board[i][j]!=word[ind])return false;
        char temp=board[i][j];
        board[i][j]='$';
        for(auto &dir:direc){
            int i_=i+dir[0];
            int j_=j+dir[1];
            if(find(i_,j_,n,m,board,word,ind+1))return true;
        }
        board[i][j]=temp;
        return false;

    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && find(i,j,n,m,board,word,0))
                return true;
            }
        }
        return false;
    }
};