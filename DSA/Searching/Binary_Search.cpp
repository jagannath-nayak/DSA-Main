// Question - Given two integers one is dividend and other is divisor, we need to find quotient 
// when dividend is divided by divisor without using these operators - '/' and '%'.
#include<iostream>
using namespace std;

int getQuotient(int dividend, int divisor){
    // search space -> (-ve dividend) to (+ve dividend)
    int s = 0;
    int e = dividend;
    int mid = s + ((e-s)>>1);
    int ans = -1;
    while(s<=e){
        if((divisor*mid)==dividend) return mid;
        else if((divisor*mid) < dividend){
            // store and compute 
            ans = mid;
            s = mid + 1;
        }
        else e = mid - 1;
        mid = s + ((e-s)>>1);
    }
    return ans;

}

int main(){
    int dividend = 35;
    int divisor = 4;
    // Mission is to find quotient
    int ans = getQuotient(abs(dividend), abs(divisor));
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) ans = 0 - ans;
    cout << "Final ans: " << ans << endl;

    return 0;
}