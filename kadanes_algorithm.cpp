#include <iostream>
#include <climits>
using namespace std;

int max(long long int a,long long int b){
    return a>b?a:b;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n+1];
	    bool flag = 1;
	    long long int ans = INT_MIN,currSum =0;
	    for(int i=1;i<=n;i++){
	        cin>>arr[i];
	        ans = ans>arr[i]?ans:arr[i];
	        if(arr[i]>0){
	            flag = 0;
	        }
	    }
	    
	    arr[0] = 0;
	    
	    if(flag){
	        cout<< ans << '\n';
	        continue;
	    }
	    
	    currSum = 0,ans =0;
	   
	    for(int i=0;i<=n;i++){
	        if(currSum + arr[i] <= 0){
	            currSum = 0;
	        }
	        else{
	            currSum = currSum + arr[i];
	            ans = max(ans,currSum);
	        }
	    }
	    
	    cout<<ans<< '\n';
	}
	return 0;
}
