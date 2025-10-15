#include<iostream>
#include<queue>
using namespace std;

class DeCircularQueue{
    public:
    int *arr;
    int n;
    int front;
    int rear;

    DeCircularQueue(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushFront(int val){
        // 4 cases - overflow, firstElement, circular nature, normal flow
        if((front == 0 && rear == n-1) || (rear == front - 1)){
            cout << "overflow" << endl;
        }
        else if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = val;
        }
        else if(front == 0 && rear != n-1){
            front = n-1;
            arr[front] = val;
        }
        else{
            front--;
            arr[front] = val;
        }
    }

    void pushBack(int val){
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

    void popFront(){
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

    int popBack(){
        // 4 cases - underflow, single element, circular nature, normal flow
        if(front == -1 && rear == -1){
            cout << "underflow" << endl;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(rear == 0){
            rear = n-1;
        }
        else{
            rear--;
        }
        
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
    DeCircularQueue q(5);
    q.pushFront(10);
    q.print();
    q.pushFront(20);
    q.print();
    q.pushFront(30);
    q.print();
    q.pushBack(40);
    q.print();
    q.pushBack(50);
    q.print();
    q.popFront();
    q.print();
    q.popBack();
    q.print();



    return 0;
}