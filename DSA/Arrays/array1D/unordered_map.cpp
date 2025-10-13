#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int, int> table;
    // insertion
    table[1] = 52;
    table[2] = 53;
    table[3] = 54;

    table[2] = 57; // reassign
    // map mai iterate karne k liye iterator create karna hota hai.
    unordered_map<int, int> :: iterator it;
    for(it = table.begin(); it != table.end(); it++){
        int key = it->first;
        int value = it->second;
        cout << "Key: " << key << " " << "Value: " << value << endl;
    }
    // cout << "Another way" << endl;
    // for(auto it: table){
    //     int key = it.first;
    //     int value = it.second; 
    //     cout << "Key: " << key << " " << "Value: " << value << endl;
    // }

    // find? 
    if(table.find(2) != table.end()){
        // found
        int value = table[2];
        cout << "Value found: " << value << endl;
    }
    else{
        cout << "Value Not Found" << endl;
    }

    // deletion
    table.erase(2);
    cout << "After erase: " << endl;
    unordered_map<int,int> :: iterator it2;
    for(it2 = table.begin(); it2 != table.end(); it2++){
        int key = it2->first;
        int value = it2->second;
        cout << "Key: " << key << " " << "Value: " << value << endl;
    }
    cout << "find 2 again: " << endl;
    if(table.find(2) != table.end()){
        // found
        int value = table[2];
        cout << "Value: " << value << endl;
    }
    else{
        cout << "Value Not Found" << endl;
    }




    return 0;
}