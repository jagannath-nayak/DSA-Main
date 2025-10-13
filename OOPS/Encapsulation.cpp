#include<iostream>
using namespace std;

class Student{
private:
    // Attributes
    int id;
    int age;
    string name;
    int nos;  
    float *cgpa;
    string bothername;

public:
    void setcgpa(float a){
        // layer of authentication
        *this->cgpa = a;
    }

    float getcgpa() const{
        return *this-> cgpa;
    }

    float getAge() const{
        return this->age;
    }

    // ctor: Default ctor
    Student(){
        cout << "Student default ctor called" << endl;
    }
    
    // ctor: Parametrised ctor
    Student(int id, int age, string name, int nos, float cgpa, string bothername){
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->cgpa = new float(cgpa);
        this->bothername = bothername;
    }

    // Copy ctor
    Student(const Student & srcobj){ // srcobj -> A
        cout << "Student copy ctor called" << endl;
        this->id = srcobj.id;       // this --> jiska object baan rha hai.
        this->age = srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    }

    // Behaviour/Methods/functions
    void study(){
        cout << this->name << "Studying" << endl;
    }
    void sleep(){
        cout << this->name << "Sleeping" << endl;
    }

    // dtor
    ~Student(){
        cout << "Student default dtor called" << endl;
        delete this->cgpa;
    }

private:
void bothermarks(){
    cout << this->name << "bother marks" << endl;
}    

};

int main(){
    Student A(1, 21, "jaggu", 5, 8.42, "bhola");

    cout << A.getcgpa() << endl;
    A.setcgpa(7.5);
    cout << A.getcgpa() << endl;
    
    cout << A.getAge() << endl;
    

    return 0;
}