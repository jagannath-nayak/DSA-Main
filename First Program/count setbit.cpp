#include<iostream>
using namespace std;

int countsetbit(int n){
    int count = 0;
    while (n > 0){
        int bit = n & 1;
        if(bit ==1)
            count ++;
            n= n >> 1;
    }
    return count;
}


int main(){
    int n; cin >> n;
    int setBitCount = countsetbit(n);
    cout << setBitCount << endl;

}
