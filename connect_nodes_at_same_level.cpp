/* struct Node
{
  int data;
  Node *left,  *right;
  Node *nextRight;  // This has garbage value in input trees
}; */

// Should set the nextRight for all nodes
void connect(Node *p)
{
   // Your Code Here
   queue<Node *>q,attach;
   q.push(p);
   Node *temp;
   int n;
   while(!q.empty()){
       n = q.size();
       while(n--){
            temp = q.front();
            attach.push(temp);
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
       }
       
       temp = attach.front();
       attach.pop();
       
       while(!attach.empty()){
           temp->nextRight = attach.front();
           temp = temp->nextRight;
           attach.pop();
       }
       
       temp->nextRight = NULL;
   }
}
