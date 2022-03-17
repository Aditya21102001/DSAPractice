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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *tl=NULL, *curr=head, *ph=NULL;
        while(curr!=NULL)
        {
            int an=0;
            ListNode * t=curr->next;
            while(t!=NULL && t->val==curr->val)
            {
                an=1;
                curr=t;
                t=t->next;
            }
            if(an==1 && curr!=NULL)
            {
                curr=curr->next;
                continue;
            }
            if(ph==NULL)
            {
                ph=curr;
                tl=curr;
            }
            else
            {
                tl->next=curr;
                tl=tl->next;
            }
            curr=curr->next;
        }
        if(tl!=NULL)
            tl->next=NULL;
        return ph;
    }
};