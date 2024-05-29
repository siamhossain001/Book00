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
   
    int finder;
    cout<<"Enter the value you want to find :";
    cin>>finder;

    for(int i=0;i<N;i++){
        if(arry[i]==finder){
            cout<<"Found at index : "<<i<<endl;
            break;
        }
    }


    return 0;
}