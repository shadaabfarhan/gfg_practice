#include <iostream>
#include <algorithm>
using namespace std;

int lowerBound(int arr[],int tar,int l,int h){
    int mid , ans= -1;
    
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid] == tar){
            ans = mid;
            h = mid - 1;
        }
        else if(arr[mid] < tar){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    
    return ans;
}

int higherBound(int arr[],int tar,int l,int h){
    int mid , ans= -1;
    
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid] == tar){
            ans = mid;
            l = mid + 1;
        }
        else if(arr[mid] < tar){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
    
    return ans;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,target,c=0;
	    cin>>n>>target;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    
	    int i=0,l,h;
	    
	    while(i<n-1 && arr[i]<target){
	        l = lowerBound(arr,target - arr[i],i+1,n-1);
	        if(l!= -1){
	            h = higherBound(arr,target - arr[i],i+1,n-1);
	            c += h-l+1;
	        }
	        //cout << l << ' ' << h << '\n';
	        i++;
	    }
	    
	    cout<< c << '\n';
	    
	}
	return 0;
}
