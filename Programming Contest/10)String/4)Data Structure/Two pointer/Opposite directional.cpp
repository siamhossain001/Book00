#include<iostream>
#include<vector>

using namespace std;

// two pointer technique only for  sorted array
bool isfound(vector<int> &ar,int target){
    int start = 0;
    int end = ar.size()-1;
    
    while(start<end){
        if(ar[start]+ar[end]==target){
            cout<<ar[start]<<" "<<ar[end]<<endl;
            return true;
        }
        else if(ar[start]+ar[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
}
int main(){
    
    int n,input,target;
    cout<<"Enter the size of your array"<<endl;
    cin>>n;
     
    vector<int> ar;
    for(int i=0;i<n;i++){
        cin>>input;
        ar.push_back(input);
    }
    
    cout<<"Enter the target value"<<endl;
    cin>>target;

    if(isfound(ar,target)){
        cout<<"Found"<<endl;
    }

    else{
        cout<<"Not Found"<<endl;
    }

    return 0;
}