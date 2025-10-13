#include<iostream>
using namespace std;

class Student{
    public:

    // Attributes
    int id;
    int age;
    string name;
    int nos;
    int *cgpa;

    // ctor: Default ctor
    Student(){
        cout << "Student default ctor called" << endl;
    }
    
    // ctor: Parametrised ctor
    Student(int id, int age, string name, int nos, float cgpa){
        cout << "Student Parameterised ctor called" << endl;
        this->id = id;
        this->age = age;
        this->name = name;
        this->nos = nos;
        this->cgpa = new int(cgpa);
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


};

int main(){
    // Student A(1, 21, "Jaggu", 5); 
    // Student B(2, 22, "Bhola", 6);

    // cout << A.name << " " << A.age << endl;
    // cout << B.name << " " << B.age << endl;
    
    // copy ctor
    // Student C = A;
    // cout << A.name << " " << C.name << endl;

    // Dynamic allocation or Student pointer
    Student *A = new Student(1, 14, "Ram", 6, 9.34);
    cout << A->name << endl;
    cout << A->age << endl;
    A->study();

    // agar hum dynamic allocation karenge toh khudh se object destroy karna hoga tabhi dtor called hoga
    delete A;
    return 0;
}