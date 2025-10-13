#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// class comparator{
// public:
//    bool operator()(int a, int b){
//     return a > b;
//    }
// };

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
    if(a.marks==b.marks){
        return a.name < b.name;
    }
    return a.marks > b.marks;
}
};

int main(){
    // vector<int> arr;
    // arr.push_back(10);
    // arr.push_back(50);
    // arr.push_back(70);

    // // ascending order
    // sort(arr.begin(), arr.end(), comparator());
    // // print
    // for(int a: arr){
    //     cout << a << " ";
    // }cout << endl;

    vector<student> arr;
    arr.push_back(student(98, "Jaggu"));
    arr.push_back(student(98, "Bhola"));
    arr.push_back(student(99, "Pratyush"));

    sort(arr.begin(), arr.end(), comparator());

    for(student a: arr ){
        cout << a.marks << " " << a.name << endl;
    }





    return 0;
}