// Stack Implementation using Array
#include <iostream>
using namespace std;

class Stack{
    int* arr;
    int topIndex, capacity;
public:
    Stack(int size){
        capacity = size;            // Assign size into capacity
        arr = new int[capacity];    // Create Dynamic array of capacity
        topIndex = -1;              // Intial Value of Top Index
    }

    ~ Stack(){
        delete[] arr;
    }

    bool isEmpty(){
        return topIndex == -1;
    }

    bool isFull(){
        return topIndex == capacity-1;
    }

    void push(int val){
        if(isFull()){
            cout << "Stack Overflow !" << endl;
            return;
        }
        arr[++topIndex] = val;          // first increase topindex and then assign value
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack Underflow !" << endl;
            return;
        }
        topIndex--;                     // decrease the top index by 1 step
    }

    int top(){
        if(isEmpty()){
            cout << "Stack is Empty !" << endl;
        }
        return arr[topIndex];           // return top value
    }

    void display(){
        cout << "Stack: ";
        for(int i=topIndex; i>=0; i--){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack s(5); 
    s.push(1);          // 1
    s.push(2);          // 2 1
    s.push(3);          // 3 2 1
    s.display();        // 3 2 1    {Output}
    s.pop();            // delete 3 
    s.display();        // 2 1      {Output}
    s.push(4);          // 4 2 1
    s.push(5);          // 5 4 2 1
    s.push(7);          // 7 5 4 2 1
    s.display();        // 7 5 4 2 1    {Output}
    return 0;
}