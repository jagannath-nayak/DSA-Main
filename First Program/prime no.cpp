#include<iostream>
using namespace std;

// // 1 to n print all prime numbers
// bool checkPrime(int N)
// {
//    // we will check if N is prime or not
//    if (N <=1)
//    {
//     return false;
//    }

//    // check if N is divisible by any number between [2 , N-1]
//    for (int i = 2; i < N; i++)
//    {
//     if (N % i == 0){
//         return false;
//     }
//    }
//    // agar main yaha a gya toh iska matlab
//   // N kisi se bhi divide nahi hua hai
//  // toh yeh prime hai
//    return true;


// }


// int main()
// {
//     cout << "Enter n:" << endl;
//     int n;
//     cin >> n;

//     // 0-> <n, 1-> <=n, dono mai n times hi chalega
//     for(int i = 1; i <=n; i++)
//     {
//         // lets check if i is prime or not 
//         bool isPrime = checkPrime(i);

//         // if i is prime
//         if (isPrime)
//         {
//             cout << "Prime:" << i << endl;
//         }
//         else
//         {
//             cout << "Not Prime:" << i << endl;
//         }


//     } 
//     return 0;


// }

// bool isprime(int number){
//     for(int i=2 ; i<=number-1; i++){
//         if(number%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     bool ans = isprime(111);
//     if(ans==true){
//         cout << "Prime" << endl;
//     }
//     else{
//         cout << "Not Prime" << endl;
//     }
// }

// bool function(int a, int b){
//     bool bit = a&(1<<b);
//     return bit;
// }


// int main(){
//     // cout << (1^2^3) << endl;
// //    bool ans =  function(5,2);
// //    cout << ans << endl;

// // cout << (000111 || 01010 )<< endl;

// double x =1.2;
// int sum = (int)x+1;
// cout << sum << endl;
// }

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    bool ans = isprime(n);
    if (ans==true){
        cout << n << " is prime" << endl;
    }
    else {
        cout << n << " is not prime" << endl;
    }
}

// int main(){
//     int i,n;
//     cin>>n;
//     i=1;
    
//      while(i<=n){
//        int j=1;
//        int cnt=i;
//         while(j<=i){

//             cout<<cnt<<" ";
//            cnt=cnt+1;
//            j=j+1;
//         }
//          cout<<endl;
//        i=i+1;


//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin >> n;
//     char ch = 'A';
//     for(int i =0; i<n; i++){
//         for(int j=0; j<i+1; j++){

//         }
// }

// }