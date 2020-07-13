/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

/* Computes the diameter of binary tree with given root.  */

int dia=0;

int calculate_height(Node *node){
    if(node==NULL){
        return 0;
    }
    int le = calculate_height(node->left);
    int ri =  calculate_height(node->right);
    dia = max(dia,1+le+ri);
    return 1+ max(le,ri);
}


int diameter(Node* node) {
    // Your code here
    dia = 0;
    int p = calculate_height(node);
    p = dia;
    return p;
}
