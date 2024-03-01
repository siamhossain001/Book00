#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void add(){
    
}
void update(){
    
}
void dlete(){
    
}
int main()
{
    Node a ,b,root1;
    a.data = 900;
    a.next = &b;
    b.data =800;
    b.next = NULL;
    cout<<a.next;
     
    
    
    struct Node* n1 =new Node; 
    n1->data = 100;
    n1->next = NULL;
    
    struct Node* n2 =new Node; 
    n2->data = 200;
    n2->next = NULL;
    
    n1->next = n2;
    
    
    struct Node* root =n1; 
    while(root !=NULL){
        cout<<root->data;
        root = root->next;
    }
    
    return 0;
}

