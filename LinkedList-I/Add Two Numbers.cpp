class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*head=NULL,*temp=NULL;
        int carry=0;
        while(l1||l2){
            int sum=0;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            sum+=carry;
            carry=sum/10;
            sum%=10;
            ListNode*node=new ListNode(sum);
            if(!head){
                head=node;
                temp=node;
            }else{
                temp->next=node;
                temp=temp->next;
            }
        }
        if(carry>0) temp->next=new ListNode(carry);
        return head;
    }
};
