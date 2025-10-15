#include<iostream>
#include<queue>
using namespace std;

class Deque{
    private:
    int *arr;
    int n;
    int front;
    int rear;

    public:
    Deque(int size){
        this->n = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void pushfront(int val){
        if(front == 0 && rear != -1){
            cout << "overflow" << endl;
            return;
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
        }
        else{
            front--;
        }
        arr[front] = val;

    }

    void pushback(int val){
        if(rear == n-1){
            cout << "overflow" << endl;
        }
        else if(front == -1 && rear == -1){
            // inserting first element
            rear++;
            front++;
            arr[rear] = val;
        }
        else{
            // normal flow
            rear++;
            arr[rear] = val;
        }

    }

    void popfront(){
        if(front == -1 && rear == -1){
            cout << "underflow" << endl;
        }
        else if(front == rear){
            // single element
            front = -1;
            rear = -1;
        }
        else{
            // normal flow
            front++;
        }

    }

    void popback(){
        if(front == -1 && rear == -1){
            cout << "underflow" << endl;
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else{
            // normal flow
            rear--;
        }
    }

    void printing(){
        if(front == -1){
            cout << "Deque is empty" << endl;
            return;
        }
        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};

int main(){
    Deque dq(5);
    dq.pushfront(10);
    dq.pushfront(20);
    dq.pushback(90);
    dq.pushback(100);
    dq.popfront();
    dq.popback();
    dq.printing();






    return 0;
}