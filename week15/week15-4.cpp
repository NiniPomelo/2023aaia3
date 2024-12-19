//week15-4.cpp  學習計畫 Linked List 第4題 要用到上週第3題(加起來)、上上週2題(倒過來)
//LeetCode 445. Add Two Numbers II
class Solution {
public:
    ListNode* myReverse(ListNode* l1) {
        vector<int> a; // 伸縮自如的陣列
        while( l1 != nullptr ) { // 只要還有 node
            a.push_back( l1->val ); // 就把數值放入陣列裡
            l1 = l1->next; // 換下一筆
        }
        ListNode* ans = new ListNode(); //新準備好 ans node
        ListNode* now = ans; // 現在再處理的 node
        int N = a.size();
        for(int i=N-1; i>=0; i--) { // 倒過來的 for迴圈
            now->next = new ListNode( a[i] ); // 新產生1個node
            now = now->next; // 換下一個
        }
        return ans->next; // 原來ans是空的，它的下一個，才有值
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return myReverse(l1);
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