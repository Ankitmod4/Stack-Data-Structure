// # include <iostream>
// # include <stack>
// using namespace std;
// int main(){  
// stack<int>s;
// s.push(29);
// s.push(4);
// s.push(3); 

// cout<<s.top()<<endl; 
// s.pop();
// cout<<s.top()<<endl;
// cout<<s.size();


//     return  0;
// }

#include <iostream>
using namespace std;

class TwoStacks {
private:
    int *arr; // Array to store the elements
    int size; // Size of the array
    int top1; // Top index of the first stack
    int top2; // Top index of the second stack

public:
    TwoStacks(int size) {
        this->size = size;
        arr = new int[size];
        top1 = -1; // Initially, top of the first stack is -1
        top2 = size; // Initially, top of the second stack is size
    }

    // Push operation for the first stack
    void push1(int ele) {
        if (top1 < top2 - 1) { // Check if there is space between the two tops
            top1++;
            arr[top1] = ele;
        } else {
            cout << "Stack 1 overflow\n";
        }
    }

    // Push operation for the second stack
    void push2(int ele) {
        if (top1 < top2 - 1) { // Check if there is space between the two tops
            top2--;
            arr[top2] = ele;
        } else {
            cout << "Stack 2 overflow\n";
        }
    }

    // Pop operation for the first stack
    int pop1() {
        if (top1 >= 0) {
            int ele = arr[top1];
            top1--;
            return ele;
        } else {
            cout << "Stack 1 underflow\n";
            return -1; // Return a default value indicating failure
        }
    }

    // Pop operation for the second stack
    int pop2() {
        if (top2 < size) {
            int ele = arr[top2];
            top2++;
            return ele;
        } else {
            cout << "Stack 2 underflow\n";
            return -1; // Return a default value indicating failure
        }
    }

    // Check if the first stack is empty
    bool empty1() {
        return top1 == -1;
    }

    // Check if the second stack is empty
    bool empty2() {
        return top2 == size;
    }
};

int main() {
    TwoStacks ts(10); // Creating two stacks using a single array of size 10

    ts.push1(5); // Pushing elements onto the first stack
    ts.push2(10); // Pushing elements onto the second stack
    ts.push1(15); 
    ts.push2(20);

    cout << "Popped element from stack 1: " << ts.pop1() << endl; // Popping elements from the first stack
    cout << "Popped element from stack 2: " << ts.pop2() << endl; // Popping elements from the second stack

    return 0;
}
