#include<iostream>
#include<fstream> // Header File for Handling the files (Read/Write)
using namespace std;

int main(){
    // fstream headerfile provides 3 classes:
    // fstreambase
    // ifstream (It is derived by the fstreambase) - Read to the file
    // ofstream (It is derived by the fstreambase) - write to a file
    // Writing in the file
    ofstream out("sample.txt");
    string name;
    int age;
    
    cout << "Enter your name and age: ";
    cin >> name >> age;
    out << "Hello " << name << "!" << endl;
    out << "You're " << age << " years old." << endl;
    out.close();

    ifstream read("abd.txt");
    string line;
    cout << "File Contains: " << line << endl;
    while(getline(read, line)){
        cout << line << endl;
    }
    read.close();
}
