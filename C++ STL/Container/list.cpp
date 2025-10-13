#include<iostream>
#include<list>
using namespace std;
int main(){
    // creation
    list<int> mylist;

    // insertion
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    mylist.push_front(100);
    mylist.pop_back();
    mylist.pop_front();

    // cout << mylist.front() << endl;
    // cout << mylist.back() << endl;

    list<int>:: iterator it = mylist.begin();
    while(it!=mylist.end()){
        cout << *it << " " ;
        it++;
    }

    // cout << mylist.size() << endl;
    // mylist.clear();
    // cout << mylist.size() << endl;

    // if(mylist.empty()==true){
    //     cout << "List is empty" << endl;
    // }
    // else{
    //     cout << "List is not empty" << endl;
    // }







    return 0;
}