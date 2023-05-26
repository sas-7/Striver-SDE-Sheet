class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int cnt=1;
        ListNode*temp=head;
        while(temp->next){
            temp=temp->next;
            cnt++;
        }
        temp->next=head;
        int n=cnt-k%cnt;
        while(n--) temp=temp->next;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};
