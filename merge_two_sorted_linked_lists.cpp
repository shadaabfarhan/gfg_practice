/* Link list Node
struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

Node* sortedMerge(Node* head_A, Node* head_B)  
{  
    // code here
    Node *inAt = new Node(1);
    Node *ans= inAt;
    while(head_A !=NULL && head_B != NULL){
        if(head_B->data < head_A->data){
            inAt->next = head_B;
            head_B = head_B->next;
            inAt = inAt->next;
        }
        else{
            inAt->next = head_A;
            head_A= head_A->next;
            inAt = inAt->next; 
        }
    }
    if(head_A != NULL){
        inAt -> next = head_A;
    }
    else{
        inAt-> next = head_B;
    }
    return ans->next;
}  
