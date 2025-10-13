#include<iostream>
using namespace std;

void stringPermutations(string& str, int i){
    // Base case
    if(i >= str.length()){
        cout << str << endl;
        return;
    }
    // Ek case mai solve karunga
    for(int j=i; j<str.length(); j++){
        swap(str[i], str[j]);

    // Baki recursion dekh lega
    stringPermutations(str, i+1);    

    // Backtrack
    swap(str[i], str[j]);
    
    }
}

int main(){
    string str = "abc";
    int i = 0;
    stringPermutations(str, i);

    return 0;
}