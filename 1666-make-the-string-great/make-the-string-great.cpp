class Solution { // Make The String Great
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    string makeGood(string s) {
        stack<char> stack;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (!stack.empty() && abs(c - stack.top()) == 32) {
                stack.pop();
            }
            else {
                stack.push(c);
            }
        }

        string result;
        while (!stack.empty()) {
            result = stack.top() + result;
            stack.pop();
        }

        return result;
    }
}; 
