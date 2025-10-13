#include<iostream>
using namespace std;

int sum(int a, int b){
    int totalsum = a+b;
    return totalsum;
}

int getMultiplication(int x, int y, int z){
    int result = x*y*z;
    return result;
}

void printMynametenTimes(){
    for(int i=1; i<=10; i++){
        cout << "jaggu" << endl;
    }
}

void printMultiplesof5(){
    int number = 5;
    for(int i=1; i<=10; i++){
        cout << number << "*" << i << "=" << number*i << endl;
    }
}

void printMultiples(int n){
    for(int i=1; i<=10; i++){
        cout << n* i << endl;
    }
}

int convertToCelsius(int farenheit){
    int celsius = (farenheit-32)*5/9;
    return celsius;

}

char convertintoUppercase(char ch){
    char answer = ch - 'a'+'A';
    return answer;
}

void printMyname(){
    cout << "jaggu" << endl;
}



int main(){
    // int ans = sum(5, 10);
    // cout << ans << endl;
    
    // printMyname();

//     // function calling
//    int Multiplicationanswer =  getMultiplication(2,3,4);
//    cout << Multiplicationanswer << endl;

// printMynametenTimes();

// printMultiplesof5();

// printMultiples(5);

// int celsiusvalue = convertToCelsius(100);
// cout << celsiusvalue << endl;

char result = convertintoUppercase('k');
cout << result << endl;



    return 0;
}