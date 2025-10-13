#include<iostream>
using namespace std;

int main(){
    int height;
    cout<<"Enter your height in feet"<<endl;
    cin>>height;

    int weight;
    cout<<"Enter your weight in kg"<<endl;
    cin>>weight;

    if(height>5){
        
        if(weight>70){
            cout <<"You are fit"<<endl;
        }
        else{
            cout<<"You are not fit"<<endl;
        }
    }
    else{
        cout<<"You need exercise"<<endl;
    }
    return 0;
}