#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

char val(int k){
    if(k<=25){
        return char(97+k);
    }
    else if(k<=51){
        k= k-26;
        return char(65+k);
    }
    else{
        k = k-52;
        return char(48+k);
    }
}

int main() {
	//code
	int t,n,temp,k;
	string s;
	cin>>t;
	while(t--){
	    cin>>n;
	    s = "";
	    temp = n;
	    if(n==0){     // Don't miss this case where in n==0
	        cout<<"a"<<'\n'<<n<<'\n';
	        continue;
	    }
	    while(temp>0){
	        k = temp % 62;
	        s = s + val(k);
	        temp = temp/62;
	    }
	    reverse(s.begin(),s.end());
	    cout<< s << '\n' << n << '\n';
	}
	return 0;
}
