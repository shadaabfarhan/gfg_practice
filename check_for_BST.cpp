/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

bool checkBST(Node *root,int mi,int ma){
    if(root == NULL){
        return 1;
    }
    if(root->data >= ma || root->data <= mi){
        return 0;
    }
    
    return checkBST(root->left,mi,root->data) & checkBST(root->right,root->data,ma);
}

// return true if the given tree is a BST, else return false
bool isBST(Node* root) {
    // Your code here
    return checkBST(root,INT_MIN,INT_MAX);
}
