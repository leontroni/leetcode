class Solution {  //  Jewels and Stones
public:
    // Time Complexity: O(m + n), Space Complexity: O(m)
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> map;
        int count = 0;
        for (int i = 0; i < jewels.length(); i++) {
            map[jewels[i]]++;
        }

        for (auto x : stones) {
            if (map.find(x) != map.end()) {
                count++;
            }
        }
        return count;

    }
};