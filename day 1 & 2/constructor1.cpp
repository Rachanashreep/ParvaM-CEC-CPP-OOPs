#include<iostream>
using namespace std;

class Customer{
    public:
    string firstName, lastName;
    int age, rating;

    //Initialized the constructor
    Customer(){
        firstName = "John";
        lastName = "Doe";
        age = 10;
        rating = 5;
    }
    
    void showDetails(){
         cout << "Customer Name:" << firstName << " " << lastName << endl;
         cout << "Customer Age:" << age << endl;
      }

      void giveRating(int rate); 

      void showRating(){
        cout << "You've given" << rating << " star rating. Thank you!" << endl;
    }
};
// scope resolution operator
void Customer :: giveRating(int rate){ // define the member function 
    rating = rate;
}

int main(){
    Customer cust1;

    cust1. showDetails();
    cust1.showRating();

    Customer cust2;

    cust2.firstName = "Rachu";
    cust2.lastName = "shree";
    cust2.age =19;

    int starRating;

    cout <<"Give your Rating(0 to 5):";
    cin >> starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();
}