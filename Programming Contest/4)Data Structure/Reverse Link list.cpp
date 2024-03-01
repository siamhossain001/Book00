#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

struct LinkedList {
    Node* head;

    LinkedList() : head(nullptr) {}

    void push(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
 
     void reverseList() {
        Node* current = head;
        Node* prev = nullptr;
        Node* next = nullptr;

        while (current != nullptr) {
            next = current->next; // Save the next node
            current->next = prev;  // Reverse the link
            prev = current;        // Move prev to the current node
            current = next;        // Move to the next node
        }

        head = prev; // Reset the head to the last node, which is now the first node
    }
};

int main() {
    LinkedList linkedList;
    int x;
    // Push elements to the linked list
    cout<<"Enter the elements of the linked list under 5 value: "<<endl;
   
    for(int i=0;i<5;i++){
        cin>>x;
        linkedList.push(x);
    }

    // Print the original linked list
    cout << "Original Linked List: ";
    linkedList.printList();

    // Reverse the linked list
    linkedList.reverseList();

    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    linkedList.printList();

    return 0;
}
