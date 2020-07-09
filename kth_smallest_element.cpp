#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	int arr[100001];
	while(t--){
	    memset(arr,0,sizeof(arr));
	    int n,x,c;
	    cin>>n;
	    for(int i=0;i<n;i++){
	        cin>>x;
	        arr[x]++;
	    }
	    cin>>x;
	    c=0;
	    for(int i=1;i<100001;i++){
	        if(arr[i]!=0){
	            c+=arr[i];
	            if(c>=x){
	                x=i;
	                break;
	            }
	        }
	    }
	    cout<<x<<'\n';
	}
	return 0;
}
