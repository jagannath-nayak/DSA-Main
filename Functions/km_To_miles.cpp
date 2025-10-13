#include<iostream>
using namespace std;

float km_to_miles(float km){
    float _1kmmiles = 0.621371;
    float miles = km * _1kmmiles;
    return miles;

}

float circle_area(float radius){
    float area = 3.14 * radius * radius;
    return area;
}

long long int factorial(long long int n){
long long int fact =1;
    for(int i=1; i<=n; i++){
        fact = fact * i;  
    }
    return fact;
}

bool check_even(int n){
    if(/*n%2==0*/ (n&1)==0){
        return true;
    }
    else{
        return false;
    }
}

void printalldigits(int n){
    while (n){
    int onesplacedigit = n % 10;
    cout << "Digit: " << onesplacedigit << endl;
    n= n/10;
    }
}

int main(){
//     float km;
//     cout << "Tell me Kilometers: ";
//     cin >> km;
//     float miles = km_to_miles(km);
//     cout << km << " " << "kilometers is equal to " << miles << " " << "miles." << endl;
//     return 0;

    // int n;
    // cout << "Enter a number to print all digits: "<< endl;
    // cin >> n;
    // printalldigits(n);
  
    // float radius;
    // cin >> radius;
    // float area = circle_area(radius);
    // cout << "Area of circle is: " << area << endl;

    // int n;
    // cin>>n;
    // bool isEven = check_even(n);
    // if(isEven){
    //     cout << n << " is even. " << endl;
    // }
    // else{
    //     cout << n << " is odd. " << endl;
    // }
int n;
cin >> n;
long long int ans = factorial(n);
cout << "Factorial of " << n << " is: " << ans << endl;

}