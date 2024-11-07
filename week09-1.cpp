//week09-1. 學習計畫 Matrix 第1題 最有錢的人，有多有錢
//LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(); // 有幾個人
        int N = accounts[0].size(); // 這個人，有幾個帳戶
        int ans = 0;
        for(int i=0; i<M; i++){ // 第i個人

            int total = 0; // 迴圈前面 total 是 0
            for(int j=0; j<N; j++){ // 他的第 j 個帳號
                total += accounts[i][j]; // 迴圈中間 total 增加
            }
            if(total>ans) ans = total; // 迴圈後面 total 拿來用
        }
        return ans;
    }
};