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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int ca=0, cb=0;
        ListNode *currA=headA;
        while(currA!=NULL)
        {
            currA=currA->next;
            ca++;
        }
        ListNode *currB=headB;
        while(currB!=NULL)
        {
            currB=currB->next;
            cb++;
        }
        currA=headA;
        currB=headB;
        if(ca>=cb)
        {
            for(int i=0; i<(ca-cb); i++)
            {
                currA=currA->next;
            }
        }
        else
        {
            for(int i=0; i<(cb-ca); i++)
            {
                currB=currB->next;
            }
        }
        while(currA!=currB)
        {
            currA=currA->next;
            currB=currB->next;
        }
        return currA;
    }
};