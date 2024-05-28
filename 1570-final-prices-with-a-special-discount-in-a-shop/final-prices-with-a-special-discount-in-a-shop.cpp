class Solution { // Final Prices With a Special Discount in a Shop
public:
    // Time Complexity: O(n^2), Space Complexity: O(n)
    vector<int> finalPrices(vector<int>& cmimet) {
        vector<int> ans;
        for (int i = 0; i < cmimet.size(); i++) {
            bool zbritja = false;
            for (int j = i + 1; j < cmimet.size(); j++) {
                if (cmimet[i] >= cmimet[j]) {
                    int temp = cmimet[i] - cmimet[j];
                    ans.push_back(temp);
                    zbritja = true;
                    break;
                }
            }
            if (!zbritja) {
                ans.push_back(cmimet[i]);
            }
        }
        return ans;
    }
};