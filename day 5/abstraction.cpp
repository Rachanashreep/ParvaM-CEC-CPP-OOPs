#include<iostream>
using namespace std;

class Bike{
    public:
        string brand, model, engine_type;
        int year, price;

        void injectFule(){
            cout << "Ignite the Fule - Petrol!" << endl;
        }

         void igniteFule(){
            cout << "Ignite the Fuel!" << endl;
         }

         void start(string bikeModel){
            injectFule();
            igniteFule();
            cout << model << "Started, Happy Journey!" << endl;
         }

          void stopAcceleration(){
            cout << "Acceleration Stopped!" << endl;
          }

          void stopFuelFlow(){
            cout << "stopping the Fuel!" << endl;
          }
          
            
         void stop(){
            stopAcceleration();
            stopFuelFlow();
            cout << model << "stopped, Lock the Vechicle!";
          }

};

int main(){
   Bike bike1;
   bike1.brand = "Bajaj";
   bike1.model = "Pulsar NS125";
   bike1.engine_type = "BS6";
   bike1.year = 2022;
   bike1.price = 150000;
   bike1.start(bike1.model);
   bike1.stop();

}