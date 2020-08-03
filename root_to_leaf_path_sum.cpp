bool hasSum(Node *node,int sum,int sumSofar){
    if(node==NULL){
        if(sum == sumSofar){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    if(!hasSum(node->left ,sum,sumSofar+node->data)){
        return hasSum(node->right , sum , sumSofar+node->data);
    }
    return 1;
}


bool hasPathSum(Node *node, int sum) {
    // Your code here
    return hasSum(node,sum,0);
}
