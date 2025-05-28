#include<iostream>
using namespace std;

int main(){
    int a;
    // Sytax for declaring the pointer :
    // datatype *pointer_name
    // datatype of pointer should be same as reference variable
    //Assign the adddress to the pointer variable
    // * refers to the pointer variable
    // &  refers to the address of the pointer 
    //*ptr refer to the value of the pointer
    int *ptr =&a;

    float decimal;
    float *f = &decimal;

    cout << "Enter the value of a:";
    cin >> a;

    cout << "Enter any decimal value :";
    cin >> decimal;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of pointer(ptr): " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Value pointer by ptr: " << *ptr << endl;

    cout << "Value of decimal: " << decimal << endl;
    cout << "Address of decimal: " << &decimal << endl;
    cout << "Value of pointer(ptr): " << f << endl;
    cout << "Address of ptr: " << &f << endl;
    cout << "Value pointer by ptr: " << *f << endl;
}