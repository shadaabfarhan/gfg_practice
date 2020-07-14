#include <iostream>
#include <stack>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,x,c=0;
	    cin>>n;
	    stack<int> s;
	    int arr[n],height[n];
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(s.empty()){
	            height[i]= -1;
	            s.push(i);
	        }
	        else{
	            while(!s.empty() && arr[s.top()]<= arr[i]){
	                s.pop();
	            }
	            if(s.empty()){
	                height[i]= -1;
	                s.push(i);
	            }
	            else{
	                height[i] = s.top();
	                s.push(i);
	            }
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(height[i]==-1){
	            cout<< i+1 << ' ';
	        }
	        else{
	            cout<< i - height[i] << ' ';
	        }
	    }
	    cout<< '\n';
	}
	return 0;
}
