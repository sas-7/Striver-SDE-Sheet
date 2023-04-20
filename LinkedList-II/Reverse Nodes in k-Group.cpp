class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode*temp=new ListNode(0);
        temp->next=head;
        ListNode*prev=temp,*curr,*next;
        int cnt=0;
        while(head){
            head=head->next;
            cnt++;
        }
        while(cnt>=k){
            curr=prev->next;
            next=curr->next;
            for(int i=1;i<k;i++){
                curr->next=next->next;
                next->next=prev->next;
                prev->next=next;
                next=curr->next;
            }
            prev=curr;
            cnt-=k;
        }
        return temp->next;
    }
};