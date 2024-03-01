#include <bits/stdc++.h>
using namespace std;
int a[50]; 
int main(){
    // stp-1 compute sum of the first k elements (i=0 to k)
    // stp-2 while increasing i, substrac a[i-1] and add a[i+k-1] in the previous sum, which will became current sum
    // stp 3 do the above process till i = 5 and maintain the minimum  {time complexity O(n)}
    int x,k,n,sum;
    cout<<"enter the array size "<<endl;
    cin>>x;
    int win[x];
    
    cout<<"enter the array elements size = "<<x<<endl;
    for(int i=0;i<x;i++){
        cin>>win[i];
    }
    
    
    cout<<"enter the window size:"<<endl;
    cin>>k;
    
    n=0;
    for(int i=0;i<(x/2)+1;i++){
       for(int j=i;j<k;j++){
           a[n]+=win[j];
       }
       n++;
       k++;
    }
    
    cout<<"largest and smallest sum in window size"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}