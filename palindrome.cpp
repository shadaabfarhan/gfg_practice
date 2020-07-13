#include <iostream>
using namespace std;

bool ispal(int n){
    int temp=n,rev=0;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    return n==rev;
}

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(ispal(n)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
