// week11-5b.cpp 學習計畫 Basic 第8題 (失敗的版本)
// LeetCode 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1;
        for(int num : nums) {//太多數字，乘起來，就爆炸 overflow
            if(num>0) ans *= 1; // 不要乘太多
            if(num==0) ans *= 0; // 只乘 +1, -1, 0 
            if(num<0) ans *= -1;
        }// 不要乘太多
        if(ans>0) return 1;
        else if(ans==0) return 0;
        else return -1;
    } 
};