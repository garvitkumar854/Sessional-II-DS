// Stack using Library

#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    
    // cout << s.size() << endl;    {Returns size of stack}
    // s.empty();

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}