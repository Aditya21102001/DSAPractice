/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        {
            return NULL;
        }
        ListNode *f=head, *s=head;
        int a=0;
        while(f!=NULL && f->next!=NULL)
        {
            f=f->next->next;
            s=s->next;
            if(s==f)
            {
                a=1;
                break;
            }
        }
        if(a==0)
            return NULL;
        else
        {
            s=head;
            while(f!=s)
            {
                f=f->next;
                s=s->next;
            }
        }
        return s;
    }
};