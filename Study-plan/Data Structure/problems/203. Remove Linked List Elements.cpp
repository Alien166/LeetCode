class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head;
        while(temp){
            if(temp->next && temp->next->val == val) {
                temp->next = temp->next->next;

            } else {
                temp = temp->next;
            }
        }
        if(head && head->val == val) {
            return head->next;
        }
        return head;
    }
};
