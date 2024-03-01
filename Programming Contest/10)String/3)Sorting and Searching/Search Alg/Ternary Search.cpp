#include<iostream>
#include <stdio.h>
#include <string.h>
#include <vector>

using namespace std;
bool isfound(vector<int> &ternary ,int key){
    int mid1,mid2;
    int l=0,r=ternary.size();
    while(l<=r){
        mid1 = l+(r-l)/3;
        mid2 = r-(r-l)/3;
        if(ternary[mid1]==key || ternary[mid2]==key){
            return true;
        } 
        else if(ternary[mid1]>key){
            r = mid1-1;
        }
        else if(ternary[mid2]<key) {
            l = mid2+1;
        }
        else {
             l = mid1+1;
             r = mid2-1;
        }
    }
    return false;

}
int main()
{
    int x;
    cout<<"Enter the array Size"<<endl;
    cin>>x;
    
    vector<int> ternary(x);
    cout<<"ternary Search only apply when array is sorted"<<endl;
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<x;i++){
        cin>>ternary[i];
    }

    int key;
    cout<<"Enter the element to be searched"<<endl;
    cin>>key;
    isfound(ternary,key);

    if(isfound(ternary,key)){
        cout<<key<<" is found"<<endl;
    }   
    else {
        cout<<key<<" Is not found"<<endl;
    }
    return 0;
}