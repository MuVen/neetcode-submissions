class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rowc(10, vector<int>(10, 0));
        vector<vector<int>> colc(10, vector<int>(10, 0));
        vector<vector<int>> gridc(10, vector<int>(10, 0));

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                char ch = board[i][j];
                if(ch == '.')continue;
                int v = ch-'0';
                rowc[i][v]++;if(rowc[i][v] != 1) return false;
                colc[j][v]++;if(colc[j][v] != 1) return false;

                int grid = (i / 3) * 3 + (j / 3);
                gridc[grid][v]++;if(gridc[grid][v] != 1) return false;
            }
        }


        return true;
    }
};
