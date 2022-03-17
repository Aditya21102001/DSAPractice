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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *ans=NULL, *temp=NULL;
    int r=0;
    while(l1!=NULL || l2!=NULL)
    {
        if(l1!=NULL && l2!=NULL)
        {
            int t=l1->val + l2->val;
            t=t+r;
            if(t<10)
            {
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }
                r=0;
            }
            else
            {
                t=(l1->val+l2->val+r)%10;
                r=(l1->val+l2->val+r)/10;
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }   

            }
            l1=l1->next;
            l2=l2->next;
        }
        else if(l2==NULL)
        {
            int t=l1->val;
            t=t+r;
            if(t<10)
            {
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }
                r=0;
            }
            else
            {
                t=(l1->val+r)%10;
                r=(l1->val+r)/10;
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }   

            }
            l1=l1->next;
        }
        else
        {
            int t=l2->val;
            t=t+r;
            if(t<10)
            {
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }
                r=0;
            }
            else
            {
                t=(l2->val+r)%10;
                r=(l2->val+r)/10;
                if(ans==NULL)
                {
                    ans=new ListNode(t);
                    temp=ans;
                }
                else
                {
                    temp->next=new ListNode(t);
                    temp=temp->next;
                }   

            }
            l2=l2->next;
        }
        
        
    }
        if(r!=0)
        {
            temp->next=new ListNode(r);
            temp=temp->next;
        }
        return ans;
    }
};