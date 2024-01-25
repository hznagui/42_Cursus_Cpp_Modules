#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    // Push some elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Access and make a copy of the top two elements without removing them
    if (myStack.size() >= 2) {
        int topElement1 = myStack.top();
        myStack.pop();  // Pop the top element
        int topElement2 = myStack.top();
        
        // Now, you can use topElement1 and topElement2 as needed without modifying the stack

        // Push back the top two elements to the stack
        myStack.push(topElement1);
        myStack.push(topElement2);
    } else {
        std::cout << "Not enough elements in the stack." << std::endl;
    }

    return 0;
}
