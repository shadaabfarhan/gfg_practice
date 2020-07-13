#include <iostream>
using namespace std;

bool isArmstrong(int n){
    int temp = n;
    int rev = 0,p;
    while(temp > 0){
        p = temp %10;
        rev+= p*p*p;
        temp = temp/10;
    }
    return rev==n;
}

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    if(isArmstrong(n)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
