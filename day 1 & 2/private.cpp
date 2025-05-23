#include<iostream>
using namespace std;

class Company{
    private:
        string cin;
        int totalWorth;
    
    public:
         string gstNum, location;
         int numofEmp;

    void setDetails(string cinNum, int worth){
         cin = cinNum;
         totalWorth = worth;
    }

    // getter method
    void getDetails(string gstNumber){
        cout <<"corporate Identity Number:" << cin << endl;
        cout <<"Total worth of the company:" << totalWorth << endl;

    }

    void getBasicDetails(); // Declare the number function
};

// Function Definition outside the class
// Syntax: return_type class_name :: member_function 
void Company :: getBasicDetails(){ // scope Resolution Operator
    cout <<"GST Number: " << gstNum << endl;
    cout <<"Location: " << location << endl;
    cout <<"Number of Employees: " << numofEmp << endl;
}

int main(){
    Company comp1; //object Created
    comp1.gstNum  = "12345ABCD678";
    comp1.location = "Bengaluru";
    comp1.numofEmp = 50;
    comp1.getBasicDetails();

    string cinNumber;
    int companyWorth;

    cinNumber = "987654AR123";
    companyWorth = 5000000;

    comp1.setDetails(cinNumber, companyWorth);
    comp1.getDetails(comp1.gstNum);

}

