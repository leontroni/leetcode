class Solution { // Permutation Difference between Two Strings
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mp;
        for (int i = 0; i < t.length(); i++) {
            mp[t[i]] = i;
        }
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            res += abs(i - mp[s[i]]);
        }
        return res;
    }
};