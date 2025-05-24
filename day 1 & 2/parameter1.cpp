#include<iostream>
using namespace std;

class Wish{
    private:
         string name;
         int age;

    public:
        Wish(){ // Default constructor
            name = "unknown";
            age = 0;
        }
        Wish(string n, int a); // parameterized constructor

        void birthdayWishes();
        
};

// Defining the rule of parameterized constructor outside the class using scope Resolution operator
Wish :: Wish(string n, int a){ // Syntax: className :: constructor(parameter)(No Return type required)
    name = n;
    age = a;
}

void Wish :: birthdayWishes(){ // Syntax: return_type className :: member_function(parameter) 
    cout << "Happy Birthday " << name << " ! Now you're " << age
    << " year old." << endl;
}

int main(){
    string personName;
    int personAge;

    Wish person1; // object Declared
    person1.birthdayWishes();

    cout << "Enter your name:";
    cin >>  personName;
    cout<< "Enter your age:";
    cin >> personAge;

    Wish person2(personName, personAge);
    person2.birthdayWishes();
}