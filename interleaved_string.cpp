
/*You are required to complete this method */
bool isInterleave(string A, string B, string C) 
{
    //Your code here
    int l1= A.length(),l2=B.length();
    if(l1+l2 != C.length()){
        return 0;
    }
    bool dp[l1+1][l2+1];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            if(i==0 && j==0){
                dp[i][j]=1;
            }
            else if(i==0){
                if(B[j-1]==C[j-1])
                dp[i][j]=dp[i][j-1];
            }
            else if(j==0){
                if(A[i-1]==C[i-1])
                dp[i][j]= dp[i-1][j];
            }
            else{
                if(A[i-1]==C[i+j-1] && B[j-1]!=C[i+j-1]){
                    dp[i][j] = dp[i-1][j];
                }
                else if(A[i-1]!=C[i+j-1] && B[j-1]==C[i+j-1]){
                    dp[i][j] = dp[i][j-1];
                }
                else if(A[i-1]==C[i+j-1] && B[j-1]==C[i+j-1]){
                    dp[i][j] = dp[i][j-1] | dp[i-1][j];
                }
            }
        }
    }
    /*for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<'\n';
    }*/
    return dp[l1][l2];
}
