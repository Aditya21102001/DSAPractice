// { Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
    return (before[K-1] == after[num - K]) && (before[num-K] == after[K-1]);
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends


//User function Template for C++

/* Linked List Node structure
   struct Node  {
     int data;
     Node *next;
     Node(int x) {
        data = x;
        next = NULL;
  }
  }
*/

//Function to swap Kth node from beginning and end in a linked list.
Node *swapkthnode(Node* head, int num, int K)
{
    if ((num < K) || (2 * K - 1 == num))
        return head;

    Node *x = head, *x_prev = NULL, *y = head, *y_prev = NULL, *temp = NULL;

    int i = 1;

    while (i < K)
    {
        x_prev = x;
        x = x->next;
        i++;
    }

    i = 1;

    while (i < num - K + 1)
    {
        y_prev = y;
        y = y->next;
        i++;
    }

    if (x_prev)
        x_prev->next = y;

    if (y_prev)
        y_prev->next = x;

    temp = x->next;
    x->next = y->next;
    y->next = temp;

    if (K == 1)
        head = y;
    else if (K == num)
        head = x;

    return head;
}
