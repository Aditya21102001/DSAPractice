/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next==NULL || head->next->next==NULL)
        {
            return;
        }
        ListNode *s=head, *f=head->next;
        while(f!=NULL && f->next!=NULL)
        {
            s=s->next;
            f=f->next->next;
        }
        ListNode *prev=NULL, *curr=s->next, *next=s->next;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode *first=head, *second=prev;
        while(second!=NULL)
        {
            ListNode *t1=first->next;
            first->next=second;
            ListNode *t2=second->next;
            second->next=t1;
            first=t1;
            second=t2;
        }
        first->next=NULL;
    }
};