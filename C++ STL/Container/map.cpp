#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    // creation
    // unordered_map<string, string> table;

    // //insertion
    // table["in"] = "India";
    // table.insert(make_pair("en", "England"));

    // creation
    map<int, string> table;
    table.insert(make_pair(2, "B"));
    table.insert(make_pair(1, "A"));
    table.insert(make_pair(3, "C"));
    
    map<int, string> :: iterator it = table.begin();
    while(it != table.end()){
        pair<int, string>p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    // pair<string, string> p;
    // p.first = "br";
    // p.second = "Brazil";
    // table.insert(p);

    // unordered_map<string, string> :: iterator it = table.begin();
    // while(it != table.end()){
    //     pair<string, string>p = *it;
    //     cout << p.first << " " << p.second << endl;
    //     it++;
    // }

    // if(table.find("im") != table.end()){
    //     cout << "Key found" << endl;
    // }
    // else{
    //     cout << "Key not found" << endl;
    // }
    
    // if(table.count("ij")==0){
    //     cout << "Key not found" << endl;
    // }
    // if(table.count("ij")==1){
    //     cout << "Key found" << endl;
    // }


    // cout << table.size() << endl;
    // cout << table.at("in") << endl;
    // table.at("in") = "India2";
    // cout << table.at("in") << endl;



    return 0;
}