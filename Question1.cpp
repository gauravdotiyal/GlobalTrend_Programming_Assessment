/////////////////////////////////////////////////
//     GAURAV DOTIYAL                          //
//     gauravdotyal33@gmail.com                //
/////////////////////////////////////////////////


#include <bits/stdc++.h> 
using namespace std;

//Class For making linked list 
class Node {
public:
   
    int data;   
    Node* next;       
  
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
 
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to reverse a linked list 
Node* reverseLinkedList(Node *head)
{
   
   Node* temp = head;   
   Node* prev = NULL;   
    
   while(temp != NULL){  
     
       Node* curr = temp->next;   
       temp->next = prev;   
       prev = temp;   
       temp = curr; 
   }
   
    
   return prev;  
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
 
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
 
    cout << "Forward Linked List: ";
    printLinkedList(head); 
 
    head = reverseLinkedList(head); 
     
    cout << "Reverse Linked List: ";
    printLinkedList(head);

    return 0;
}


