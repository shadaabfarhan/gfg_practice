/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
     // Your code here
     int i = l,j= m+1,k=0;
     //cout<<l<<' '<<m<<' '<<r;
     int temp[r+l+1];
     while(i<=m && j<=r){
         if(arr[i]>arr[j]){
             temp[k++]=arr[j++];
         }
         else{
             temp[k++]= arr[i++];
         }
     }
     while(j<=r){
         temp[k++]= arr[j++];
     }
     while(i<=m){
         temp[k++] = arr[i++];
     }
     
     for(int p=l;p<=r;p++){
         arr[p] = temp[p-l];
     }
     
     return;
}
