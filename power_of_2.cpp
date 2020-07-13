#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	long long int n,temp;
	while(t--){
	    cin>>n;
	    temp = 1; 
	    bool s = 0;
	    while(temp<=n){
	        if(n==temp){
	            s=1;
	            break;
	        }
	        temp *= 2;
	    }
	    if(s){
	        cout<< "YES\n";
	    }
	    else{
	        cout<< "NO\n";
	    }
	}
	return 0;
}
