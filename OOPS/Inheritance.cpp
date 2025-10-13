#include<iostream>
using namespace std;

class Vehicle{
protected:
    string name;    
    string model;
    int noOftyres;

public:    
    string getname(){
        return this->name;
    }
    Vehicle(string _name, string _model, int _noOftyres){
        cout << "I am inside Vehicle ctor" << endl;
        this->name  = _name;
        this->model = _model;
        this->noOftyres = _noOftyres;
    }

public:
   void start_engine(){
    cout << "Engine is starting " << name << " " << model << endl;
   }

   void stop_engine(){
    cout << "Engine is stopping " << name << " " << model << endl;
   }

   ~Vehicle(){
    cout << "I am inside Vehicle dtor" << endl;
   }
};

class Car: public Vehicle{
public:
    int noOfdoors;
    string transmissiontype;

    Car(string _name, string _model, int _noOftyres, int _noOfdoors, string _transmissiontype): Vehicle(_name, _model, _noOftyres){
        cout << "I am inside Car ctor" << endl;
        this->noOfdoors = _noOfdoors;
        this->noOftyres = _noOftyres; 
        this-> transmissiontype = _transmissiontype;
    }

    void startAC(){
        cout << "AC has started of " << name << endl;
    }
 
   ~Car(){
    cout << "I am inside Car dtor" << endl;
   }

};

class Motorcycle: public Vehicle{
protected:
   string handlebarstyle;
   string suspensiontype;

public:   
   Motorcycle(string _name, string _model, int _noOftyres, string _handlebarstyle, string _suspensiontype):Vehicle(_name, _model, _noOftyres){
    cout << "Motorcycle ctor called" << endl;
    this->handlebarstyle = _handlebarstyle;
    this->suspensiontype = _suspensiontype;
   }

   void wheelie(){
    cout << "wheelie kar rahi hai" << " " << name << endl;
   }  
   
   ~Motorcycle(){
    cout << "I am inside Motorcycle dtor" << endl;
   }

};

int main(){
    Car A("Maruti 800", "LXI", 4, 4, "Manual");
    A.start_engine();
    A.startAC();
    A.stop_engine();

    // Motorcycle M("BMW", "VXI", 2, "U", "Hard");
    // M.start_engine();
    // M.wheelie();
    // M.stop_engine();

    return 0;
}