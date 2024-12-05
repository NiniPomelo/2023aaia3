// week13-4.cpp 解 Advent of code 2024 Day 1 題目
// LeetCode 右上角圖示, My Playground
// New Playground, +新的 Playground
// 前面 LeetCode 幫妳寫好 #include <iostream> 和 #include <vector>
// using namespace std; 都幫妳寫好了, 你不用寫, 方便你在遊樂場玩程式
int main() {
    vector<int> A, B; // 2個陣列 (伸縮自如)
    int a, b; // 兩個數
    while( cin >> a >> b) { // Step01: Input
        A.push_back(a); // Step02: 放到陣列
        B.push_back(b);
    }
    sort(A.begin(), A.end()); // Step04: sort 小到大排好
    sort(B.begin(), B.end());
    int ans = 0;
    for(int i=0; i<A.size(); i++) { // Step02: Output
        cout << A[i] << " ";
        ans += abs(A[i]-B[i]);
    }
    cout << "答案是: " << ans;
}