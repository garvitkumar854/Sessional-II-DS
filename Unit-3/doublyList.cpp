// Doubly Linked list
#include <iostream>
using namespace std;

class Node{
public: 
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;
    }
};

class DoublyList{
    Node* head;
    Node* tail;
public:
    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        } else{
            
        }
    }

    void print(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void reverse(){
        Node* temp = tail;
        while (temp != NULL){
            cout << temp->data  << " ";
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main(){
    DoublyList dl;
    dl.push_front(1);
    dl.push_front(5);
    dl.push_front(2);
    dl.print();
    dl.reverse();
    return 0;
}