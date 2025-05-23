#include<iostream>
using namespace std;

class Calculate{
    public:
       // Member Data
       int num1, num2;
       float res;

       //Declared the constructor
       //Ctrl + ? : comment
       //Calculate(){
       //  num1 = 5;
       //  num2 = 10;
       // }

        // Member Function
        void showOutput(){
            cout << "Addition:" << num1 + num2 << endl;
            cout << "Substraction:" << num1- num2 << endl;
            cout << "Multiplication:" << num1 *num2 << endl;
            cout << "Quotient:" << num1 / num2 << endl;
            cout << "Remainder:" << num1 % num2 << endl;
        }

        
};
int main(){
    // Intializing the default value using constructor automatically when the object declared 
    Calculate c1; //object

    // Assigning the value to the data members
    Calculate c2;
    c2.num1 = 25;
    c2.num2 = 30;
    c1.showOutput();
    c2.showOutput();
}