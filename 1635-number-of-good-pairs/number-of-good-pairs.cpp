class Solution {  //Number of Good Pairs
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int>mp;
        int result = 0;

        for (int i : nums) {
            if (mp.count(i)) {
                result += mp[i];
            }
            mp[i]++;
        }
        return result;
    }
};
