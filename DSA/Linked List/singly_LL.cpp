#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // constructor
    Node(int value){
        this->data = value;
        this->next = NULL;
    }
};

Node* insertatHead(int value, Node* &head, Node* &tail){
    // Linked List is empty
    if(head==NULL && tail==NULL){
        // create new node
        Node* newNode = new Node(value); 
        // head ko newNode par lagado
        head = newNode;
        // tail ko newNode par lagado
        tail = newNode;
    }
    else{
        // Linked List is not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

void insertAttail(int value, Node* &head, Node* &tail){
    // linked list is empty
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else{
        // linked is not empty
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = newNode;
    }
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->";
        temp = temp->next;
    }cout << "NULL" << endl;
}

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
    temp = temp->next;
    len++;
    }
    return len;
}

void insertAtPosition(int position, int value, Node* &head, Node* &tail){
    int length = getLength(head);
    // insert at head
    if(position == 1){
        head = insertatHead(value, head, tail);
    }
    // insert at tail
    else if(position==length+1){
        insertAttail(value, head, tail);
    }
    // insert in between
    else{
        Node* temp = head;
        for(int i=0; i<position-2; i++){
            temp = temp->next;
        }
        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
}

bool SearchLL(int target, Node* head){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == target){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void DeletefromLL(int position, Node* &head, Node* &tail){
    // if LL is empty
    if(head==NULL && tail==NULL){
        cout << "No node to delete" << endl;
        return;
    }
    // single node in LL
    if(head==tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else{ 
        // multiple nodes in LL
        if(position == 1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            // delete any other node except first one
            Node* prev = head;
            for(int i=0; i<position-2; i++){
                prev = prev->next;
            }
            Node* curr = prev->next;
            Node* forward = curr->next;
            prev->next = forward;
            curr->next = NULL;
            delete curr;
        }
    }
}

int main(){
    // Node* head = NULL;
    // Node* tail = NULL;

    // head = insertatHead(10, head, tail);
    // print(head);
    // head = insertatHead(20, head, tail);
    // print(head);
    // head = insertatHead(30, head, tail);
    // print(head);

    Node* head = NULL;
    Node* tail = NULL;

    insertAttail(101, head, tail);
    print(head);
    insertAttail(201, head, tail);
    print(head);
    insertAttail(301, head, tail);
    print(head);
    insertAtPosition(1, 40, head, tail);
    print(head);
    insertAtPosition(5, 60, head, tail);
    print(head);
    insertAtPosition(3, 420, head, tail);
    print(head);
    // cout<< SearchLL(101, head);
    DeletefromLL(1, head, tail);
    print(head);
    DeletefromLL(3, head, tail);
    print(head);
    DeletefromLL(4, head, tail);
    print(head);


    return 0;
}