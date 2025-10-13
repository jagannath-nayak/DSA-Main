#include<iostream>

int main() {
    // variable declaration
    int marks;
    std::cout << "Enter your marks "<< std::endl;

    // Taking input 
    std::cin >> marks;
    std::cout << "Your marks is : "<< marks << std::endl;
    std::cin.fail();



    return 0;
}