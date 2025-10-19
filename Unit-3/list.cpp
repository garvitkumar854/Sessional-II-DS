// Linked List
#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class List{
    Node* head;
    Node* tail;
public:
    List(){
        head = tail = nullptr;
    }

    // Insert at Begin
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head = newNode;
        }
    }

    // Insert at End
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = tail = newNode;
            return;
        } else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    // Delete from start
    void pop_front(){
        if(head == nullptr){
            cout << "List is Empty !";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
    }

    // Delete from end
    void pop_back() {
        if (head == nullptr) {
            cout << "List is Empty !" << endl;
            return;
        }

        // Only one node in the list
        if (head == tail) {
            delete head;
            head = tail = nullptr;
            return;
        }

        Node* temp = head;
        // Traverse to the node just before tail
        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;       // Delete the last node
        tail = temp;       // Update tail
        tail->next = nullptr; // New tail's next should be NULL
    }


    // Insert at a given position (1-based index)
    void insertAt(int val, int pos) {
        Node* newNode = new Node(val);

        if(pos <= 0){
            cout << "Invalid Position !" << endl;
            return;
        }

        // Insert at the beginning
        if (pos == 1) {
            if(head == nullptr){
                head = tail = newNode;
                return;
            } else{
                newNode->next = head;
                head = newNode;
            }
            return;
        }

        Node* temp = head;
        // Traverse to the node just before the desired position
        for (int i = 1; i < pos - 1; i++) {
            if(temp == nullptr){
                cout << "Invalid Position !" << endl;
                return;
            }
            temp = temp->next;
        }
        
        newNode->next = temp->next;
        temp->next = newNode;
        
        if(newNode->next == nullptr){
            tail = newNode; // update tail if inserted at end
        }
    }

    // Traversal on List
    void print(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Search in List
    void search(int val){
        Node* temp = head;
        int idx = 0;
        while(temp != nullptr){
            if(temp->data == val){
                cout << "Value found at Position: " << idx+1 << endl;
                return;
            }
            temp = temp->next;
            idx++;
        }
        cout << "Value not found !";
        return;
    }
};

int main(){
    List l;
    l.push_front(3);
    l.push_front(2);
    l.push_front(1);
    l.print();
    l.insertAt(4, 1);
    l.print();
    l.search(0);
    return 0;
}