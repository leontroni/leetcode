class Solution { // Middle of the Linked List
public:
    // Time Complexity: O(n), Space Complexity: O(1)
    ListNode* middleNode(ListNode* head) {
        int i = 0;
        ListNode* lista = head;
        while (lista != NULL) {
            lista = lista->next;
            i++;
        }
        int ans = i / 2;
        ListNode* temp = head;
        int j = 0;
        while (j < ans) {
            temp = temp->next;
            j++;
        }
        return temp;
    }
};