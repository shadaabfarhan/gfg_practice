#include <bits/stdc++.h>
using namespace std;

int findZeros(string s){
    int l= s.length(),c=0;
    for(int i=0;i<l;i++){
        if(s[i]=='0'){
            c++;
        }
    }
    return c;
}

int main() {
	//code
	int t,n;
	cin>>t;
	string s,a;
	while(t--){
	    cin>>n;
	    a = "";
	    int ans = -1, curr = 0;
	    while(n--){
	        cin>>s;
	        curr = findZeros(s);
	        if(curr!=0){
	           if(curr> ans){
	               ans= curr;
	               a = s;
	           } 
	           else if(curr==ans){
	               if(a.length()<s.length()){
	                   a = s;
	               }
	               else if(a.length() == s.length()){
	                   a = a>s ? a : s;
	               }
	           }
	        }
	    }
	    if(a==""){
	        a = "-1";
	    }
	    cout<<a<< '\n';
	}
	return 0;
}
