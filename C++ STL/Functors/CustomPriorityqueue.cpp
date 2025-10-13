#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

class student{
public:
   int marks;
   string name;
   student(int m, string n){
    this->marks = m;
    this->name = n;
   }
};

class comparator{
public:
   bool operator()(student a, student b){
    // criteria --> min marks --> high priority
    return a.marks > b.marks;
   }
};

int main(){
    // max heap
    // priority_queue<int> pq;
    // priority_queue<int, vector<int>, less<int>> pq3;
    // // min heap
    // priority_queue<int, vector<int>, greater<int>> pq2;

    priority_queue<student, vector<student>, comparator > pq;

    pq.push(student(30, "A"));
    pq.push(student(50, "C"));
    pq.push(student(70, "B"));
    pq.push(student(90, "D"));

    cout << pq.top().marks << " " << pq.top().name << endl;



    return 0;
}