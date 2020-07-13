#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	string s;
	cin>>t;
	while(t--){
	    cin>>s;
	    int l = s.length();
	    if(s[0]>='a' && s[0]<='z'){
	        for(int i=1;i<l;i++){
	            if(s[i]>='A' && s[i]<='Z'){
	                s[i] += 32;
	            }
	        }
	    }
	    else{
	        for(int i=1;i<l;i++){
	            if(s[i]>='a' && s[i]<='z'){
	                s[i] -= 32;
	            }
	        }
	    }
	    
	    cout<< s << '\n';
	}
	return 0;
}
