#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void printvv(vector<vector<int>> &v){
    for(int i=0; i<v.size(); i++){
        vector<int> &temp = v[i];
        int a = temp[0];
        int b = temp[1];
        cout << a << " " << b << endl;
    }
    cout << endl;
}

// bool mycomp(int &a, int &b){
//     return a > b;
// }

bool mycompfor1stIndex(vector<int> &a, vector<int> &b){
    return a[1] < b[1];

}



int main(){
    // vector<int> v = {10,20,30,40,50};
    // sort(v.begin(), v.end(), mycomp);
    // print(v);

    // vector of vector sorting
    vector<vector<int>> v;
    int n;
    cout << "Enter size: \n";
    cin >> n;
    for(int i=0; i<n; i++){
        int a,b;
        cout << "Enter a, b" << endl;
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }
    cout << "Here are the values: " << endl;
    printvv(v);
    cout << "Sort by 1st Index: " << endl;
    sort(v.begin(), v.end(), mycompfor1stIndex);
    printvv(v);
    
    return 0;
}