#include<iostream>
#include<vector>

using namespace std;
int main(){
    int N;
    cout<<"Enter the size of array :";
    cin>>N;
    
    vector<int> arry(N);
    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<N;i++){
        cin>>arry[i];
    }
    
    int i=0,j=1,carry=N;
    while(carry--){
        for(i=0;i<carry;i++){
            if(arry[i]>arry[i+1] && j<=carry){
                swap(arry[i],arry[i+1]);
            }
            j++;
        }
        j=1;
    }
    
    cout<<"Bubble Sort is :"<<endl;
    for(int i=0;i<N;i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
    return 0;
}