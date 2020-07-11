#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	char a[10];
	while(t--){
	    int n;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<' ';
	    }
	    cout<<'\n';
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<' ';
	    }
	    cout<<'\n';
	    
	}
	return 0;
}
