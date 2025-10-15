#include<iostream>
#include<queue>
using namespace std;

class CircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    CircularQueue(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int val){
        // 4 cases - overflow, firstElement, circular nature, normal flow
        if((front == 0 && rear == n-1) || (rear == front - 1)){
            cout << "overflow" << endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(rear == n-1 && front != 0){
            // circular nature
            rear = 0;
            arr[rear] = val;
        }
        else{
            // normal flow
            rear++;
            arr[rear] = val;
        }

    }

    void pop(){
        // 4 cases - underflow, single element, circular nature, normal flow
        if(front == -1 && rear == -1){
            cout << "underflow" << endl;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == n-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    int getFront(){
        if(front == -1){
            cout << "queue is empty" << endl;
        }
        else{
            return arr[front];
        }
    }

    int getSize(){
        if(front == -1 && rear == -1){
            return 0;
        }
        else if(rear > front){
            return rear - front + 1;
        }
        else{
            return n-front+rear+1;
        }

    }

    bool isEmpty(){
        if(front == -1 && rear == -1){
            return true;
        }
        else return false;

    }

    void print(){
        if(front == -1){
            cout << "Queue is empty" << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};


int main(){
    CircularQueue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    cout << q.getSize() << endl;
    cout << q.getFront() << endl;
    cout << q.isEmpty() << endl;
    



    return 0;
}