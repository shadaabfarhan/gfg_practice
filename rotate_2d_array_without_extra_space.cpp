/*#include <iostream>               //hack is store while scanning input itself
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int i=n-1;i>=0;i--){
	        for(int j=0;j<n;j++){
	            cin>>arr[j][i];
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<arr[i][j]<<' ';
	        }
	    }
	    cout<<'\n';
	}
	return 0;
}*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    //transpose
	    int temp;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<i;j++){
	            temp=arr[i][j];
	            arr[i][j] = arr[j][i];
	            arr[j][i] = temp;
	        }
	    }
	    //swap columns
	    for(int j=0;j<(n/2);j++){
	        for(int i=0;i<n;i++){
	            temp = arr[i][j];
	            arr[i][j] = arr[i][n-j-1];
	            arr[i][n-j-1]= temp;
	        }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            cout<<arr[i][j]<<' ';
	        }
	    }
	    cout<<'\n';
	}
	return 0;
}
