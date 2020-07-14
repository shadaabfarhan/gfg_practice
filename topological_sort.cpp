// The Graph structure is as folows

/*  Function which sorts the graph vertices in topological form
*   N: number of vertices
*   adj[]: input graph
*/
void update(stack<int>&s, unordered_set<int>&vis,vector<int> adj[],int i){
    vis.insert(i);
    for(int k: adj[i]){
        if(vis.find(k)==vis.end()){
            update(s,vis,adj,k);
        }
    }
    s.push(i);
    return;
}

vector<int> topoSort(int V, vector<int> adj[]) {
    // Your code here
    stack<int>s;
    unordered_set<int> vis;
    for(int i=0;i<V;i++){
        if(vis.find(i)!=vis.end()){
            continue;
        }
        update(s,vis,adj,i);
    }
    int n = s.size();
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        v[i] = s.top();
        s.pop();
    }
    
    return v;

}
