#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

struct queue{
      int data;
      struct queue *next;
};
struct queue *head = NULL;

//Converts a given string to lowercase.
void toLowercase(string& str) {
    transform(str.begin(), str.end(), str.begin(),
    [](unsigned char c){ return tolower(c); });
}
//Pushes an integer value to the end of the queue.
void PUSH(int a){  
    struct queue *Linker ;
    struct queue  *Newnode;
    
    Newnode = (struct queue*)malloc(sizeof(struct queue));
    Newnode->data = a;
    Newnode->next = NULL;

    if(head==NULL){
         head = Newnode;
         Linker->next = head;
    }
    else{
        Linker = head;
        while(Linker->next!=NULL){
            Linker = Linker->next;
        }
        Linker->next = Newnode;
    }
    
}
//Prints the elements of a queue.
void print(){
    struct queue *temp;
    temp = head;
    if(head==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else {
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
       cout<<endl;
    }
}
//Removes the first element from the queue.
void POP(){
    struct queue *temp;
    if(head!=NULL){
    temp = head;
    head = head->next;
    delete temp;
    }
    
}
void Delete_value(int a){
    struct queue *temp1;
    struct queue *temp2;
    if(head==NULL){
        cout<<"Qeueu is empty"<<endl;
    }
    else{
        temp2 = head;
        temp1 = temp2->next;
        while(temp1->data!=a && temp1->next!=NULL){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(temp1->data == a){
            temp2->next = temp1->next;
           delete temp1;
            cout<<"found and deleted"<<endl;
        }
        else {
            cout<<"Not found"<<endl;
        }
    }
}
void VALUE(){
    if(head==NULL){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<head->data<<endl;
    }
}
int main() { 
    string input_type;
    int a,count=0;
     cout<<"**********This program is Queue using Linked list property******************"<<endl;
     cout<<"*************It has 6 case push,pop,print,delete,size,top**************"<<endl;
     cout<<"********************write what you want to do********************"<<endl;
    while(1){
        cin>>input_type;
        toLowercase(input_type);
        if(input_type=="stop"){
            cout<<"stop the program"<<endl;
            break;
        }
        else if(input_type=="push"){
            cout<<"input the value you want to pursh"<<endl;
            cin>>a;
            PUSH(a);
            cout<<a<<" is pushed into the queue"<<endl;
            count++;
        }
        else if(input_type=="pop"){
            cout<<"fist value is poped :";
            VALUE();
            POP();
            count--;
        }
        else if(input_type=="print"){
           cout<<"output the queue list"<<endl;
           print();
        }
        else if(input_type=="size"){
            cout<<"output the length of the queue"<<count<<endl;
        }
        else if(input_type=="delete"){
            cout<<"which value you want to delete"<<endl;
            cin>>a;
            Delete_value(a);
            count--;
        }
        else if(input_type=="top"){
            cout<<"output the first value in queue";
            VALUE();  
        }
        else{
            cout<<"invalid input"<<endl;
        }
    }
    return 0;
}
