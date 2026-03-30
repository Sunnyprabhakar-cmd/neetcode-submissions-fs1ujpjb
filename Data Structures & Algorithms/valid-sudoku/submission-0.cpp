class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++){
            vector<int>row(10,0),col(10,0);
            for(int j=0;j<board[i].size();j++){
                if(board[i][j]!='.'){
                    int num=board[i][j]-'0';
                    if(row[num]++){
                        return false;}
                }
                if(board[j][i]!='.'){
                    int num=board[j][i]-'0';
                    if(col[num]++){
                        return false;}
                }
            }
        }
            for(int i=0;i<9;i++){
                vector<int>box(10,0);
                for(int j=0;j<9;j++){
                    int row=3*(i/3)+j/3;
                    int col=3*(i%3)+j%3;
                    if(board[row][col]!='.'){
                    int num=board[row][col]-'0';
                    if(box[num]++){return false;}
                    }
                }
            }
        return true;
    }
};