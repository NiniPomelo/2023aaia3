// week18-3.cpp 學習計畫 Math 第6題
// LeetCode 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        int N1 = a.length(), N2 = b.length();
        // for(int i=N-1; i>=0; i--);
        vector<int> ans;
        int carry = 0; // carry進位的值
        for(int i=N1-1, j=N2-1; i>=0 || j>=0; i--, j-- ) {
            if(i<0) { // 左邊a[i] 用完了，只用 b[j]
                int now = b[j]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            }else if(j<0) { // 右邊b[j] 用完了。只用 a[i]
                int now = a[i]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            }else { // 兩邊都有、兩邊 a[i] b[j]都用
                int now = a[i]-'0' + b[j]-'0' + carry;
                ans.push_back( now % 2 );
                carry = now / 2;
            }
        } 
        if(carry>0) ans.push_back(carry); // 最後再進位
        //for(int now : ans) cout << now; // 印出陣列結果
        //return "";    
        int N = ans.size(); // 答案有 N 位數
        string ans2(N, '0'); // 最後的答案用字串， 長度是N，裡面值放'0'
        for(int i=N-1; i>=0; i-- ) {//倒過來的迴圈
            ans2[i] = ans[N-1-i] + '0'; // 把數，變成字母的
        }
        return ans2;
    }
};