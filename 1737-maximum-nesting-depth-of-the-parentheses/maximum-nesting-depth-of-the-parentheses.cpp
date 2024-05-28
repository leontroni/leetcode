class Solution { // Maximum Nesting Depth of the Parentheses
public:
    // Time Complexity: O(n), Space Complexity: O(1)
    int maxDepth(string s) {
        int maksimumi_depth = 0;
        int current_depth = 0;
        for (int i = 0; i < s.size(); ++i) {
            char c = s[i];
            if (c == '(') {
                current_depth++;
            }
            if (c == ')') {
                maksimumi_depth = max(maksimumi_depth, current_depth);
                current_depth--;
            }
        }
        return maksimumi_depth;
    }
};