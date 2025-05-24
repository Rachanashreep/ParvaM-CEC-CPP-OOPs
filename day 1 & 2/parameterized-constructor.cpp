 #include<iostream>
 using namespace std;

 class Area{
    private:
        int lenght, breadth;

    public:
        int l,b,result;
        Area(){ //Default constructor (No parameters)
             lenght= 0;
             breadth = 0;
        }

    Area(int a, int b){ // parameterized constructor (eg. 2 parameters)
      lenght = 0;
      breadth = 0;
    }  

void calculateArea(){
    result = lenght * breadth;
    cout << "Area of rectangle with lenght: " <<lenght << " and breadth: " << breadth
    << "is equal to " << result << endl;
}
};

int main(){
    int len, wid;
    Area rect1; // object 1 created
    rect1.calculateArea();

    cout << "Enter the lenght & breadth for finding the area of Rectangle: ";
    cin >> len >> wid;

    Area rect2(len, wid); // object 2 created
    rect2.calculateArea();
}



