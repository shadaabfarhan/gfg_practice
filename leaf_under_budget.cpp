
/*
Structure of the node of the binary tree is as
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
*/
// your are required to complete this function
// function should return the number of leaf node
// one can visit
int getCount(struct node* root, int k) 
{
    // Code here
    queue<node *>q;
    node *temp;
    q.push(root);
    int level = 1,ans=0,c;
    while(!q.empty()){
        int n = q.size();
        c=0;
        while(n--){
            temp = q.front();
            q.pop();
            if(temp->left == NULL && temp->right == NULL){
                c++;
            }
            if(temp->left!= NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        if((level*c)<=k){
            k -= (level*c); 
            ans += c;
        }
        else{
            while(k>=level){
                k -= level;
                ans++;
            }
            break;
        }
        level++;
    }
    return ans;
}
