#include <iostream>
using namespace std;

int bitDifference(int x,int y){
    int c=0,p=0;
    while(4>p){
        if(((x>>p)&1) != ((y>>p)&1)){
            c++;
        }
        p++;
    }
    return c;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int bit_dif =0;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            bit_dif += 2 * (bitDifference(arr[i],arr[j]));
	        }
	    }
	    cout<< bit_dif << '\n';
	}
	return 0;
}
