// week03-4.cpp 學習計畫第3題 大海撈針 在 haystack 裡 找 needle
// LeetCode 28. find-the-index-of-the-first-occurrence-in-a-string
class Solution {
public:
    int strStr(string haystack, string needle) {
    // https://cplusplus.com/reference/string/string/find/    
    return haystack.find(needle);
    }
};