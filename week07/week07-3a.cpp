// (LeetCode二合一)
// week07-3a.cpp 學習計畫 Simulation 第2題(再寫一次)
// LeetCode 657. robot-return-to-origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(char c : moves){
            if(c=='U') y--;
            if(c=='D') y++;
            if(c=='L') x--;
            if(c=='R') x++;
        }
        if(x==0 && y==0) return true;
        else return false;
    }
};