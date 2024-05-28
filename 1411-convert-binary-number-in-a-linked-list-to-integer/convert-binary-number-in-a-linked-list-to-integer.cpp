class Solution { // Convert Binary Number in a Linked List to Integer
public:
    // Time Complexity: O(n), Space Complexity: O(n)
    int getDecimalValue(ListNode* head) { 
        ListNode* temp = head; // ky pointer i referohet funksionit lart head 
        vector<int> vektori;
        while (temp != NULL) {
            vektori.push_back(temp->val);
            temp = temp->next;
        }
        int ans = 0;
        for (int i = vektori.size() - 1; i >= 0; i--) {
            if (vektori[i] == 0)
                continue;
            else
                ans += pow(2, vektori.size() - i - 1);
        }
        return ans;
    }
};