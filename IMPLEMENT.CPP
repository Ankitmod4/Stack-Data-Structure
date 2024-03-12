#include <iostream>
# include <stack>
using namespace std;
class Stack{
    private:
    int size;
    int top;
    int *arr;
    public:
    Stack(int size){
     this->size=size;
     top=-1;
     arr=new int[size]; 
    }
    // for push
    void push(int ele){
        if(top<size-1){ 
            top++;
            arr[top]=ele;
        }
        else{
            cout<<"Overflow condition"<<endl;
        }
    }
    // for pop
    void pop(){
        if(top>=0){
            top--;

        }
        else{
            cout<<"Underflow condition"<<endl;
        }
    }
    // for display
    int peek(){
        if(top>=0){
            return arr[top]; 
        }
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }
    // for checking empty
    bool empty(){
        if(top==-1){
            // cout<<"Stack is empty";
            return true;
        }
        else{
            // cout<<"stack is not empty";
            return false;
        }
    }
}; 
using namespace std;
int main(){
 Stack s(5);
 s.push(4);
 s.push(3);
 s.push(2);
 s.push(12);
 s.push(34);
 s.push(89);
 s.pop();
 s.pop();
 cout<<s.peek();
 



    return 0;
}

