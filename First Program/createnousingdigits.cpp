#include <iostream>
using namespace std;

int createnumberusingdigits(int numberofDigits){
    int num = 0;
    for(int i=0; i < numberofDigits; i++){
        cout << "Enter digit :" << endl;
        int digit;
        cin >> digit;
        num = num * 10 + digit;
    }
    return num;


}

int main() {

    int numberofDigits;
    cin >> numberofDigits;
    int num = createnumberusingdigits(numberofDigits);
    cout << "Number created by digits : " <<  num << endl;
    return 0;
}