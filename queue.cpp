#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Queue {
private:
    int front, rear;
    int arr[MAX];

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void push(int x);
    int pop();
    int peek();
    bool isEmpty();
};

void Queue::push(int x) {
    if (rear == MAX - 1) {
        cout << "Queue overflow" << endl;
        return;
    }

    if (front == -1) {
        front = 0;
    }

    arr[++rear] = x;
    cout << x << " pushed to queue" << endl;
}

int Queue::pop() {
    if (front == -1 || front > rear) {
        cout << "Queue underflow" << endl;
        return -1;
    }

    int val = arr[front++];
    cout << val << " popped from queue" << endl;
    return val;
}

int Queue::peek() {
    if (front == -1 || front > rear) {
        cout << "Queue is Empty" << endl;
        return -1;
    }

    cout << arr[front] << " is at front" << endl;
    return arr[front];
}

bool Queue::isEmpty() {
    return (front == -1 || front > rear);
}

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);

    q.pop();
    q.peek();

    if (q.isEmpty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

    return 0;
}
