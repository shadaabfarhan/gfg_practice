/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

/* If n1 and n2 are present, return pointer
   to LCA. If both are not present, return 
   NULL. Else if left subtree contains any 
   of them return pointer to left.*/
   
bool DFS(Node *curr,int key,vector<Node *> &v1){
    if(curr==NULL){
        return 0;
    }
    if(curr->data == key){
        v1.push_back(curr);
        return 1;
    }
    
    v1.push_back(curr);
    
    if(((curr->left)&&(DFS(curr->left,key,v1)))||((curr->right)&&(DFS(curr->right,key,v1)))){
        return 1;
    }
    
    v1.pop_back();
    
    return false;
}

Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   Node *temp = root;
   vector<Node *> v1,v2;
   DFS(temp,n1,v1);
   temp = root;
   DFS(temp,n2,v2);
   
   int i=0,n=min(v1.size(),v2.size());
   
   /*for(Node *x:v1){
       cout<< x->data << ' ';
   }
   
   for(Node *x:v2){
       cout<< x->data << ' ';
   }*/
   
   while(i<n){
       if(v1[i]==v2[i]){
           i++;
       }
       else{
           return v1[i-1];
       }
   }
   
   if(i==n){
       return v1[n-1];
   }
   
}
