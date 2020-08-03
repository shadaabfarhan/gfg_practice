#include <iostream>
using namespace std;

void fill_lps(int lps[],string &pat){
    int l = pat.length();
    lps[0]=0;
    int i=0,j=1;
    while(j<l){
        if(pat[i]==pat[j]){
            lps[j] = i+1;
            i++;
            j++;
        }
        else{
             if(i==0){
                 lps[j]=0;
                 j++;
             }
             else{
                 i = lps[i-1];
             }
        }
    }
    /*for(int i=0;i<l;i++){
        cout<<lps[i]<<' ';
    }*/
    return;
}

int main() {
	//code
	int t;
	cin>>t;
	string text,pattern;
	while(t--){
	    cin>>text;
	    cin>>pattern;
	    
	    int txtlen = text.length();
	    int patlen = pattern.length();
	    
	    int lps[patlen];
	    
	    fill_lps(lps,pattern);
	    
	    int i=0,j=0;
	    
	    bool set=0;
	    
	    while(i<txtlen){
	        if(text[i]==pattern[j]){
	            i++;
	            j++;
	            if(j==patlen){
	                set = 1;
	                break;
	            }
	        }
	        else{
	            if(j==0){
	                i++;
	            }
	            else{
	                j = lps[j-1];
	            }
	        }
	    }
	    
	    if(set){
	        cout<<"found\n";
	    }
	    else{
	        cout<<"not found\n";
	    }
	    
	}
	return 0;
}
