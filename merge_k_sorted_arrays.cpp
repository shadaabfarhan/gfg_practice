#define N 105
typedef pair<int,pair<int,int>> pi;

int *mergeKArrays(int arr[][N], int k)
{
//code here
    priority_queue<pi,vector<pi>,greater<pi>>q;
    int *ans=new int[k*k];
    for(int i=0;i<k;i++){
        q.push(make_pair(arr[i][0],make_pair(i,0)));
    }
    int idx=0,row,col;
    pi p;
    while(!q.empty()){
        p = q.top();
        q.pop();
        ans[idx++]=p.first;
        row = p.second.first;
        col = p.second.second;
        if(col+1<=k-1){
            q.push(make_pair(arr[row][col+1],make_pair(row,col+1)));
        }
    }
    return ans;
}
