# week03-4.py 
# LeetCode 28. find-the-index-of-the-first-occurrence-in-a-string
# 學習計畫第3題 大海撈針 在 haystack 裡 找 needle
# 在 Python 只要一行 haystack.find(needle) 在 字串 haystack 裡找到 needle
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)