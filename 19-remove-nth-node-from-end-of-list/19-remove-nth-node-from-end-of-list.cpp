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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)
            return NULL;
        int c=0;
        ListNode *t=head;
        while(t!=NULL)
        {
            c++;
            t=t->next;
        }
        t=head;
        if(c-n==0)
        {
            return head->next;
        }
        for(int i=1; i<c-n; i++)
        {
            t=t->next;
        }
        t->next=t->next->next;
        return head;
    }
};