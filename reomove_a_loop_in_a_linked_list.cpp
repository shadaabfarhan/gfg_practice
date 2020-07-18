/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/


void removeLoop(Node* head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *slow, *fast;
    
    slow = head;
    fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            break;
        }
    }
    
    if(fast == NULL || fast->next==NULL){
        return;
    }
    
    Node *addHere = fast;
    Node *start;
    
    fast = fast->next;
    
    slow->next = NULL;
    
    stack<Node *> s1,s2;
    
    start = head;
    while(start != NULL){
        s1.push(start);
        start = start->next;
    }
    start = fast;
    while(start != NULL){
        s2.push(start);
        start = start->next;
    }
    
    Node *temp=NULL;
    
    while(!s1.empty() && !s2.empty() && s1.top()==s2.top()){
        temp = s1.top();
        s1.pop();
        s2.pop();
    }
    
    slow = fast;
    
    while(slow->next != temp && slow->next != NULL){
        slow = slow->next;
    }
    
    if(slow->next!=NULL){
        slow->next = NULL;
        addHere->next = fast;
    }
    return;
}
