#include<iostream>
using namespace std;

class Parent{ // Base Class
    private:
        int net_worth = 0;
    public:
        string family_name, family_head;
        int number_of_members;

        void setData(int worth, string familyName, string familyHead, int member_count){
            net_worth = worth;
            family_name = familyName;
            family_head = familyHead;
            number_of_members = member_count;
        }

        int showNetWorth(){ // getter
            return net_worth;
        }

        int getFamilyInfo(){ // getter
            cout << "I'm from " << family_name << " family, and my family head is " << family_head << ", Our Family's Net-worth is about " << showNetWorth() << endl;
        }
};
 // syntax for declaring the Derived class:
 // class derived-class-name : accessbility-mode base-class-name
 // 1)By Dealft : Derived class uses private accessbility mode
 // 2)If derived class used private accessbility mode then public data & 
 // member function of the base class will become private
 // 3)if derived class uses public accessbility mode then public data & 
 // member function of the base class will remain public 

 // class child : Parent{ // Derived Class (By default private)
 // class Child : private Private { // Derived class (private)}

class Child : public Parent{ // Derived Class
    public:
        string member_name;
        int age;

        void addDetails(string name, int person_age){ // Member function
            member_name = name;
            age = person_age;
        }

        void getFamilyDetails(){ // Member function
            cout << "My name is " << member_name << " and I'm " << age << " years old." << getFamilyInfo();
        }
};

int main(){
    string fName, fHead, cName;
    int childAge, fWorth, fMembers;

    cout << "Enter your family name, family head, number of members & net worth:";
    cin >> fName >> fHead >> fMembers >> fWorth;

    Parent p1;
    p1.setData(fWorth, fName, fHead, fMembers);
    p1.getFamilyInfo(); // inheriting the properties of the class 

    cout << "Enter your name & age:";
    cin >> cName >> childAge;

    Child c1;
    // c1.family_head; (As child class is derived with public - accessibility mode
    // we can directly access the public data of the base class)
    c1.setData(fWorth, fName, fHead, fMembers); // Add this line
    c1.addDetails(cName,childAge);
    c1.getFamilyDetails();
}