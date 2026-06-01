class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];

                if(ch == '.') continue;

                int row = i;
                int col = j;
                int gsrow = (row/3)*3;
                int gscol = (col/3)*3;

                int rowc = 0, colc = 0, gridc = 0;

                for(int k = 0; k < 9; k++) {
                    if(board[row][k] == ch) rowc++;
                    if(board[k][col]==ch) colc++;
                }

                for(int k = gsrow; k < (gsrow+3); k++){
                    for(int l = gscol; l < (gscol+3); l++){
                        if(board[k][l] == ch) gridc++;
                    }
                }

                if(rowc > 1 || colc > 1 || gridc > 1) return false;
            }
        }

        return true;
    }
};
