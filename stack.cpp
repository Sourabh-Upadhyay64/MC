#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
 int top;
 public:
 int arr[MAX];
 Stack(){
    top=-1;
 }   
 bool push(int x);
 int pop();
 int peek();
 bool isEmpty();
};
bool Stack::push(int x){
    if(top>=MAX-1){
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
        arr[++top]=x;
        return true;
    }
}
int Stack::pop(){
    if(top<0){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else{
        return arr[top--];
    }
}
int Stack::peek(){
    if(top<0){
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else{
        return arr[top];
    }
}
bool Stack::isEmpty(){
    return(top<0);
}
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.pop()<<" Popped from stack"<<endl;
    cout<<"Top element is : "<<s.peek()<<endl;
    return 0;
    
}