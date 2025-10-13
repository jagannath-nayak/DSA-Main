#include<iostream>
#include<vector>
using namespace std;

vector<int> findcomplement(vector<int> binary){
    int n = binary.size();
    vector<int> twoscomp(n);

    // step 1 flip the bits
    for(int i = 0; i < n; i++){
        twoscomp[i] = binary[i] == 0 ? 1 : 0;  
    }
    // step 2 add +1
    int carry = 1;
    for(int i=n-1; i >=0; i--){
        int sum = twoscomp[i] + carry;
        twoscomp[i] = sum % 2;
        carry = sum/2;
    }
    if(carry){
        twoscomp.insert(twoscomp.begin(), 1);
    }

    return twoscomp;
}

int main(){
    vector<int> binary = {0, 0, 0, 0};
    vector<int> twoscomp = findcomplement(binary);
    vector<int> :: iterator it = twoscomp.begin();
    while(it != twoscomp.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}