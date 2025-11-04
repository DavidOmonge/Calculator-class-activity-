#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float num1, num2;

    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    cout<<"Addition: "<<(num1 + num2)<<endl;
    cout<<"Subtraction: "<<(num1 - num2)<<endl;
    cout<<"Modulus: "<<fmod(num1, num2)<<endl;
    cout<<"Multiplication: "<<(num1 * num2)<<endl;
    cout<<"Division: "<<(num1 / num2)<<endl;
    cout<<"Square root of first number: "<<sqrt(num1)<<endl;
    cout<<"First number raised to the power of second number: "<<pow(num1, num2)<<endl;
    cout<<"Log of first number: "<<log(num1)<<endl;
    
}