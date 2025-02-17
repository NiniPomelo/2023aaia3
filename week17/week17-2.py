# week17-2.py 學習計畫 Basic Implementation 第7題 +1
# LeetCode 66. Plus One
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # Python
        N = len(digits) # 有幾位
        carry = 1
        for i in range(N-1, -1, -1): # 倒過來的迴圈
            digits[i] = digits[i] + carry # 加1
            if digits[i] >= 10: # 如果加完 >=10 有進位

                carry = 1 # 進位
                digits[i] = digits[i] % 10 # 餘數，留在原地
            else: # 沒有進位
                carry = 0 # 就設成0
        if carry==0:
            return digits
        else:
            return [carry] + digits