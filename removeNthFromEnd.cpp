class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;

        // move fast for n nodes to create gap b/w fast and slow
        while(n--){
            fast= fast->next;
        }

        // IF N=SIZE, simple return head as slow->next
        if(fast==NULL){
            return slow->next;
        }

        // keep inc fast and slow till fast ka next reaches null
        while(fast->next!=NULL){
            slow=slow->next;
             fast=fast->next;
        }

        // break the link 
        slow->next=slow->next->next;
        return head;
    }
};