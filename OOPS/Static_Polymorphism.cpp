#include<iostream>
using namespace std;

// Compile time polymorphism
// --> function overloading  

// class Add{
// public:
//    // x, y two int addition
//    int sum(int x, int y){
//     cout << "sum of two int" << endl;
//     return x + y;
//    }    

//    // x, y, z three int addition
//    int sum(int x, int y, int z){
//     cout << "sum of three int " << endl;
//     return x + y + z;
//    }

//    // double add
//    double sum(double x, double y){
//     cout << "sum of two doubles" << endl;
//     return x + y;
//    }

// };

// --> Operator overloading

class Complex{
public:
  int real;
  int imag;

  Complex(){
    real = imag = -1;
  }

  Complex(int r, int i): real(r), imag(i){};

  Complex operator+(const Complex &B){

    // this-> A instance
    Complex temp;
    temp.real = this->real + B.real;
    temp.imag = this->imag + B.imag;
    return temp;
  } 

  bool operator==(const Complex&B){
    // this-> A instance
    return (this->real==B.real) && (this->imag==B.imag);
  }

  void print(){
    printf("[%d + i%d]\n", this->real, this->imag);
  }
};

int main(){
    // int x = 5, y = 5, z = 2;
    // Add add;
    // cout << add.sum(x, y) << endl;
    // cout << add.sum(x, y, z) << endl;

    // cout << add.sum(5.4, 2.3) << endl;
    
    Complex A(3,3);
    A.print();
    Complex B(3,3);
    B.print();

    // Complex C = A + B;
    // C.print();

    bool a = A==B;
    cout << a << endl;

    return 0;
}