//(�g��@�b)week07-2a.cpp �ǲ߭p�e Simulation ��3�D ���r�C��
// LeetCode 1275. find-winner-on-a-tic-tac-toe-game
// 1��2,2��1,1��2,2��1.....�]1+2=3
class Solution {
public:
    void myPrintBoard(int board[3][3]){
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {}; //�̭�����0
        int now = 1; //��1�ӤU���H�A�s 1:"A", 2:"B"
        for(auto move : moves){ //�� auto ���|���p�g�n
            int i = move[0], j = move[1];
            board[i][j] = now; //�令 now
            myPrintBoard(board);
            now = 3 - now; //1��2,2��1,1��2,2��1
        }
        return "A"; //�ӧQ���O��?
    }
};
