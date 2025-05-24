#include<iostream>
using namespace std;

class Interest{
    private:
        int principal, term, rate, totalInterest;
        float rateInpercent;

    public:
    int simpleInterest=0;
        Interest(){ // Default constructor
            principal = 0;
            term = 0;
            rate = 0;
            totalInterest = 0;
            rateInpercent = 0;
            cout << "Total Interest Earned: " << totalInterest << endl; 
        }

        void setValues(int a, int y){
            principal = a;
            term = y;
        }

        void setRateValueInteger(int rateInInteger){
            rate = rateInInteger;
        }

        void setRateValueFloat(float rateInfloat){
            rateInpercent = rateInfloat;
        }

         Interest(int p, int t, int r){ // parameterized constructor
            setValues(p, t);
            setRateValueInteger(r);
            simpleInterest = (principal * term * rate)/100;
            cout << "simple Interest for the following details:" <<endl;
            cout << "principal Amount:" << principal << endl;
            cout << "No.of Years(Terms): " << term << endl;
            cout << "Rate of interest(in Integer): " << rate << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned:" << totalInterest << endl;
         }

         Interest(int p, int t, float rateInDecimal){ // parameterized constructor
            setValues(p, t);
            setRateValueFloat(rateInDecimal);
           simpleInterest = (principal * term * rateInDecimal);
            cout << "simple Interest for the following details:" <<endl;
            cout << "principal Amount:" << principal << endl;
            cout << "No.of Years(Terms): " << term << endl;
            cout << "Rate of interest(in Float): " << rateInDecimal << endl;
            totalInterest = principal + simpleInterest;
            cout << "Total Interest Earned:" << totalInterest << endl;
         }

};

int main(){
    int amount, year, rateOfInterest;
    float interestRate;

    Interest int1;

    cout << "Enter the principal Amount, No. of Yeras & Rate of Interest(eg. 5):";
    cin >> amount >> year >> rateOfInterest;

    Interest int2(amount, year, rateOfInterest);

    cout << "Enter the principal Amount, No. of year & Rate of Interest(eg. 0.05):";
    cin >> amount >> year >> interestRate;

    Interest int3(amount, year, interestRate);
}
