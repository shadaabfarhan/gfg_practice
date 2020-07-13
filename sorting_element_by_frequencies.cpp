//Complete this function
//Return the sorted array


bool cmp(pair<int,int>&a,pair<int,int>&b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    else
        return a.second<b.second;
}

vector<int> sortByFreq(int arr[],int n)
{
    //Your code here
    map<int,int> freqMap;
    for(int i=0;i<n;i++){
        freqMap[arr[i]]++;
    }

    vector<pair<int,int>>freq;
    for(auto x:freqMap){
        freq.push_back({x.second,x.first});
    }
    
    sort(freq.begin(),freq.end(),cmp);
    
    int idx = 0,f;
    vector<int> v(n);
    for(auto &x:freq){
        f = x.first;
        while(f--){
            v[idx++]= x.second;
        }
    }
    
    return v;
}
