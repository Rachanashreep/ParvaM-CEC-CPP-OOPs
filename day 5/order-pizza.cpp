#include<iostream>
using namespace std;

 class Pizza{
    private:
        string secretIngredient;

    public:
        string pizzaType, size; 
        int price;
        bool isPaymentDone;

        void orderPizza(){
            cout << "order the Pizza by selecting your favorite pizza:" << endl;
        }

        void bookPizza(){
            cout << "Booking Pizza!" << endl;
        }
        
        void bakepizza(string type, string pizzaSize){
            pizzaType = type;
            size = pizzaSize;
            cout << "pizza Type:" << pizzaType << ", size" << size << endl;
        }
         
        void addIngredient(string secret){
            secretIngredient = secret;
        }
        
        void confirmOrder(){
            cout << "Order Confirmed!" << endl;
        }
        
        bool checkpayment(int money, bool payment){
            price = money;
            isPaymentDone = payment;
            if(isPaymentDone == true){
            cout << "Amount Paid : Rs." << price << ", Payment Successful!" << endl;
            confirmOrder();
            bookPizza();
            return true;
        } else {
            cout << "Amount Due : Rs." << price << ", Payment Pending!" << endl;
            return false;
        }

    }


        void servePizza(int amount, bool paid , string typeOfpizza, string sizeOfPizza, string secretItem){
            if(!checkpayment(amount, paid)){
              cout << "Order Cancelled due to the pending payment!" << endl;
              return;
            }
            bakepizza(typeOfpizza, sizeOfPizza);
            addIngredient(secretItem);
            cout << "pizza Served! Enjoy your Pizza";
        }

       
 };

 int main(){
    string pizType, size, secretIng;
    int pizzaAmount;
    bool amountPaid;

    Pizza customer1;
    customer1.orderPizza();

    cout << "Enter the pizza Type (Veg/Non-Veg), Size (Regular/Medium/Large):";
    cin >> pizType >> size;

    pizzaAmount = 399;
    cout << "Did the Pay the amount(Type '1' if paid/ Type '0' if not paid):";
    cin >> amountPaid;

    customer1.servePizza(pizzaAmount, amountPaid, pizType, size, secretIng);
 }