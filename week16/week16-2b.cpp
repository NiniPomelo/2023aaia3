//week16-2b.cpp 學習計畫 Math 最後1題
//LeetCode 50. Pow(x, n) 試著用 for迴圈看看
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0){ // 遇到 負的 會失敗， 所以要把 n 變成正的
            n = -n; // n 變成正的
            x = 1/x; // -1次方，就是 1/x
        }
        for(int i=0; i<n; i++){ // 不幸的是， 會失敗! 遇到「負的」n
            ans *= x; 
        }
        return ans; //請先不要送出，只要 3個 Testcase通過，moodle 就上傳截圖
    }
};