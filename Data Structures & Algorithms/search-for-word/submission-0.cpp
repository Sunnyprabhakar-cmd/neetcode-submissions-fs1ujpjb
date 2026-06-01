class Solution {
public:
    bool res(vector<vector<char>>& board, string & word,int r, int c , int i){
        if((r<0 || r>=board.size()) || (c<0 || c>=board[0].size())){
            return false;
        }
        if(i<word.size() && board[r][c]!=word[i]){
            return false;
        }
        if(i==word.size()-1){
            return true;
        }
        char temp=board[r][c];
        board[r][c]='#';
        bool found= res(board,word,r+1,c,i+1)||res(board,word,r-1,c,i+1)||res(board,word,r,c+1,i+1) || res(board,word,r,c-1,i+1);
        board[r][c]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(res(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};