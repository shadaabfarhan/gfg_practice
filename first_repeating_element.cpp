#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int n,x,ans;
	unordered_map<int,int>m;
	while(t--){
	    cin>>n;
	    ans = INT_MAX;  
	    m.clear();
	    for(int i=1;i<=n;i++){
	        cin>>x;
	        if(m.find(x)!=m.end()){
	            ans = min(ans,m[x]);
	        }
	        else{
	            m[x]=i;
	        }
	    }
	    if(ans == INT_MAX){
	        cout<< -1 <<'\n';
	    }
	    else{
	        cout<< ans << '\n';
	    }
	}
	return 0;
}
