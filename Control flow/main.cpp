#include<iostream>
using namespace std;

int main() {
    int budget;
    cout << "Enter your budget: "<<endl;

    //input
    cin >> budget;

    if(budget > 2000000){
    cout << "You can buy Scorpio"<<endl;
    }
    else{
    cout << "You cannot buy Scorpio"<<endl;
    }

    int age = 50;
    if(age>18){
    cout<<"You can vote"<<endl;
    }
    else{
    cout <<"You cannot vote"<<endl;
    }


    return 0;
}