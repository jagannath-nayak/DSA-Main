#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* prev;
    Node* next;

    // constructor
    Node(int value){
        data = value;
        prev = NULL;
        next = NULL;
    }
};

void insertAthead(int value, Node* &head, Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void printReverse(Node* tail){
    Node* temp = tail;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

void insertAttail(int value, Node* &head, Node* &tail){
    // LL is empty
    if(head == NULL && tail == NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // LL is not empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int len = getLength(head);
    if(position==1){
        insertAthead(value, head, tail);
    }
    else if(position==len+1){
        insertAttail(value, head, tail);
    }
    else{
        // middle mai kisi position par insert karna hoga
        Node* temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        Node* forward = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = forward;
        forward->prev = newNode;
    }
}

bool searchElement(Node* head, int target){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteFromPosition(int position, Node* &head, Node* &tail){
    int len = getLength(head);
    // LL is empty
    if(head == NULL && tail == NULL){
        cout << "No nodes to delete" << endl;
        return;
    }
    else if(head == tail){
        // single node
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp; 
    }
    else if(position==1){
        // we want to delete head node
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete temp;
    }
    else if(len == position){
        Node* temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else{
        // we want to delete node other than head
        Node* Backward = head;
        for(int i=0; i<position-2; i++){
            Backward = Backward->next;
        }
        Node* curr = Backward->next;
        Node* forward = curr->next;
        Backward->next = forward;
        forward->prev = Backward;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // insertAthead(10, head, tail);
    // insertAthead(20, head, tail);
    // insertAthead(30, head, tail);
    // print(head);
    // printReverse(tail);

    insertAttail(10, head, tail);
    insertAttail(20, head, tail);
    insertAttail(30, head, tail);
    print(head);
    insertAtPosition(4, 420, head, tail);
    print(head);
    //cout << searchElement(head, 42);
    deleteFromPosition(4, head, tail);
    print(head);




    return 0;
}
