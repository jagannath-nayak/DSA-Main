#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size = v.size();
    for(int i=0; i < size; i++){
        //cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
}

int main(){

    vector<int>v;
    // insert
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // print(v);

    // // pop--> delete (END)
    // v.pop_back();
    // print(v);

    // Input
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int d;
        cin>>d;
        v.push_back(d); 
    }
    cout << "Print Vector: " << endl;
    print(v);
    cout << endl;
    cout << "Print Vector: " << endl;
    for(int i=0; i<10; i++){
        v.push_back(80);
    }
    print(v);



}
