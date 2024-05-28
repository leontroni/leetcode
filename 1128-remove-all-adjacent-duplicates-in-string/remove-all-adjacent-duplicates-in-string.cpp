class Solution { // Remove All Adjacent Duplicates In String
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    string removeDuplicates(string s) {
        stack<char> steku;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if (steku.empty()) {
                steku.push(ch);
            }
            else if (steku.top() == ch) {
                steku.pop();
            }
            else {
                steku.push(ch);
            }
        }
        string str;
        while (!steku.empty()) {
            str = steku.top() + str;
            steku.pop();
        }
        return str;
    }
};