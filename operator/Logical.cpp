#include<iostream>
using namespace std;

int main(){
    // Logical and - (&&) - In this operator if all conditions are true then it will return true and if any one condition is false then it will return false.
    bool cond1 = 0;
    bool cond2 = 0;
    bool cond3 = 0;

    if(cond1&& cond2 && cond3){
        cout << "All conditions are true" << endl;
    }
    else{
        cout << "All conditons are not true" << endl;
    }
    // Logical or - (||) - In this operator if any one condition is true then it will return true and if all conditions are false then it will return false.
    
    // if(cond1|| cond2 || cond3){
    //     cout << "Atleast one condition is true" << endl;
    // }
    // else{
    //     cout << "All conditons are false" << endl;
    // }    

    // Logical not - (!) - In this operator if the condition is true then it will return false and if the condition is false then it will return true.
    
    bool condition = (5 != 10);
    cout << !condition << endl;

    return 0;
}