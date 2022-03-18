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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        int i=0;
        ListNode *curr=head, *next=head, *prev=NULL;
        int n=0;
        while(curr!=NULL)
        {
            n++;
            curr=curr->next;
        }
        curr=head;
        while(n-k>=0 && i<k && curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            i++;
        }
        n=n-k;
        if(n-k >= 0)
            head->next=reverseKGroup(next, k);
        else
            head->next=next;
        return prev;
    }
};