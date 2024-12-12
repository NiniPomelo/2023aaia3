//week14-1.cpp 未完成 只複製 list 1
//學習計畫 Linked List 第3題 兩數相加 最多100位數
//LeetCode 2. Add Two Numbers
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode(); // 準備好新的答案
        ListNode* now = ans; // 「現在」要處理的 node
        while(l1 != nullptr) { // 先把 list 都複製到 ans 的 now 裡
            now->next = new ListNode(l1->val); // 新準備一個值
            now = now->next; // 下一筆
            l1 = l1->next; // 下一筆
        }
        return ans->next;
    }
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */