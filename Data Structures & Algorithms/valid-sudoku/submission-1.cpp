class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // 1. validar linhas
        bool rows[9][9] = {}; // [x][y] => x=linha; y=numero
        // 2. validar colunas
        bool cols[9][9] = {};
        // 3. validar blocos 3x3
        bool boxes[9][9] = {};

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char c = board[i][j];

                if (c == '.')
                    continue;

                int num = c - '1';

                /*
                box 0 | box 1 | box 2
                ------+-------+------
                box 3 | box 4 | box 5
                ------+-------+------
                box 6 | box 7 | box 8
                */
                int box = (i / 3) * 3 + (j / 3);

                // check line
                // check column
                // check block
                if (rows[i][num] == true ||
                    cols[j][num] == true ||
                    boxes[box][num] == true)
                    return false;
                else
                    rows[i][num] = true;
                    cols[j][num] = true;
                    boxes[box][num] = true;
            }
        }

        return true;
    }
};
