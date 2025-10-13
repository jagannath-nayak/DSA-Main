#include<iostream>
using namespace std;

// class functorone{
// public:
//     bool operator()(int a, int b){
//     return a > b;
// }
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

// functor
class studentcomparator{
public:
   bool operator()(student a, student b){
    return a.marks < b.marks;
   }    

};

int main(){
//     functorone cmp;
//    if(cmp(10,5)==true){
//     cout << "10 is greater than 5" << endl;
//    }
//    else{
//     cout << "10 is less than 5" << endl;
//    }

    student s1(93, "jaggu");
    student s2(97, "bhola");

    studentcomparator cmp;
    if(cmp(s1, s2)){
        cout << "jaggu marks less than bhola marks"<< endl;
    }
    else{
        cout << "jaggu marks more than bhola marks" << endl;
    }
  


   return 0;
}