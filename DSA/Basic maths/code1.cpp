#include<iostream>
#include<vector>
using namespace std;

int slowExponentiation(int a, int b){
    int ans = 1;
    for(int i=0; i<b; i++){
        ans *= a;
    }
    return ans;
}

vector<bool> sieve(int n){
    vector<bool> prime(n+1, true);
    prime[0]=prime[1]=false;
    for(int i=2; i*i<=n; i++){
       if(prime[i]==true){
        int j = i*i;
        while(j<=n){
            prime[j] = false;
            j+=i;
        }
       }
    }
    return prime;
}



int main(){
    // cout << slowExponentiation(5, 4) << endl;
    vector<bool> prime = sieve(25);
    for(int i=0; i<=25; i++){
        if(prime[i]) cout << i << " " << endl;
    }

    

    return 0;
}