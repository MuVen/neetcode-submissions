class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9]={0};
        int col[9][9]={0};
        int grid[9][9]={0};

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                auto ch = board[i][j];
                if(ch =='.') continue;

                int vch = ch-'1';
                row[i][vch]++;
                if(row[i][vch] > 1) return false;

                col[j][vch]++;
                if(col[j][vch] > 1) return false;

                int gr = (i/3)*3 + j/3;
                grid[gr][vch]++;
                if(grid[gr][vch] > 1) return false;
            }
        }

        return true;
    }
};
