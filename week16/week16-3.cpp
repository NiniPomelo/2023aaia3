//week16-3.cpp 學習計畫 Math 最後1題
//LeetCode 50. Pow(x, n) 試著用 for迴圈，但迴圈太多太慢
class Solution {
public:
    double helper(double x, long long int n) { //函式呼叫函式
        if(n==0) return 1;
        if(n==1) return x;
        double now = helper(x, n/2);
        if(n%2==0) return now * now;
        else return now * now * x; // 奇數，多乘一個x
    }
    double myPow(double x, long long int n) { // 要改成 很長、很長的整數
        double ans = 1;
        if(n<0){ // 遇到 負的 會失敗， 所以要把 n 變成正的
            n = -n; // n 變成正的
            x = 1/x; // -1次方，就是 1/x
        }
        return helper(x,n); //請先不要送出，只要 3個 Testcase通過，moodle 就上傳截圖
    }
};