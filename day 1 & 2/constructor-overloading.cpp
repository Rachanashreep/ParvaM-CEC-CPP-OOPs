#include<iostream>
using namespace std;

class Area{
    private:
        int lenght, breadth, height;
        float radius;

    public:
        int result;

        Area(){
            lenght=0;
            breadth=0;
            radius=0;
            result=0;
            height=0;
            cout << "Area: " << result << endl;
        }

        Area(int a){
            lenght = a;
            result = lenght * lenght;
            cout << "Area of sqaure:" << result << endl;
        }

        Area(int c, int d){
            lenght = c;
            breadth = d;
            result = lenght * breadth;
            cout << "Area of rectangle:" << result << endl;
        }

        Area(float r){
            radius = r;
            result = 2 * 3.142 * radius;
            cout << "Area of circle:" << result << endl;
        }

        Area(int l, int b, int h){
            lenght = l;
            breadth = b;
            height = h;
            result = lenght * breadth * height;
            cout << "Area of cube: " << result << endl;

        }
};

int main(){
    Area a1;

    int len, wid, hgt;
    float rad;

    cout << "Enter the lenght of the sqaure: ";
    cin >> len;

    Area a2(len);

    cout << "Enter the lenght & breadth of the rectangle:";
    cin >> len >> wid;

    Area a3(len, wid); // Finding Area of Rectangle

    cout << "Enter the radius of the circle:";
    cin >> rad;

    Area a4(rad); // Finding Area of the circle (1 parameter - float)

    cout << "Enter the lenght, breadth & height of the cube: ";
    cin >> len >> wid >> hgt;

    Area a5(len, wid, hgt); // Finding Area of cube (3 parameters)

}