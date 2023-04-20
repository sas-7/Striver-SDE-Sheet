class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        ListNode*fast=head,*slow=head,*temp=head;
        while(fast->next!=NULL && fast->next->next!=NULL) {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(slow!=temp){
                    slow=slow->next;
                    temp=temp->next;
                }
                return slow;
            } 
        }
        return NULL;
    }
};
