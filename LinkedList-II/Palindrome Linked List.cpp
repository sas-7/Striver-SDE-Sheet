class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* mid=midL(head);
        ListNode* half1=head;
        ListNode* half2=reverseList(mid->next);
        while (half1!=NULL && half2!=NULL){
        if(half1->val!=half2->val){
            return false;
        }
        half1=half1->next;
        half2=half2->next;
        }
        return true;
    }
    ListNode* midL(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* tail=head->next;
        ListNode* smallAns=reverseList(head->next);
        tail->next=head;
        head->next=NULL;
        return smallAns;
    }
};
