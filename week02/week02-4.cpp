// wek02-4.cpp LeetCode 389. Find the Difference
// 左邊s,右邊t 右邊多了個字母，不知道放在哪裡，找出他們
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //陣列，裡面統計字母出現次數，初始直都是0(因為有大括號)
        for(char c : s){ //針對字串s裡的每一個字母c，逐一統計分析
            H[c]++; //多了一個字母，存在陣列的對應格子裡
        }

        for(char c : t){
            H[c]--; //用到
            if(H[c]<0) return c;

        }
        return ' ';
    }
};