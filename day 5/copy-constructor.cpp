#include<iostream>
using namespace std;

class Teacher{
    private: // By default all the data members of the class comes under private access specifier
       string branch;
    public:
       string name, qualification;
       int experience;

       Teacher(){ //Default Constructor
          branch = "AIML";
          name = "John Doe";
          qualification = "M.Tech";
          experience = 5;
          cout << "Welcome, John Doel" << endl;
        }

        void setData(string Tname, string Tbranch, string Tqual, int exp){
            name = Tname;
            branch = Tbranch;
            qualification = Tqual;
            experience = exp;

        }

         Teacher(string TeacherName, string TeacherBranch, string TeacherQual, int TeacherExp){//parametrized constructor
            setData(TeacherName, TeacherBranch, TeacherQual, TeacherExp);
            cout << "welcome, " << name << " to " << branch << " branch."  << endl;
            cout << "You've graduated with , " << qualification << " degree. And You've" << experience << " years of experience" << endl;
        }
        // Syntax for copy constructor: Consteuctor(Reference-constructor address of-the-object)
        Teacher(Teacher &t){ // Copy Constructor
            name = t.name;
            branch = t.branch;
            qualification = t.qualification;
            experience = t.experience;
        }

        void getData(){ // Getter
            cout << "welcome, " << name << " to " << branch << " branch."  << endl;
            cout << "You've graduated with , " << qualification << " degree. And You've" << experience << " years of experience" << endl;

        }

        ~Teacher(){ // Destructor
            cout << "object's work is done, Clearing the memory!" << endl;
        }
};

int main(){
    string  n, q, b;
    int e;

    Teacher teacher1; // Object Created and Invoked the default constructor

    cout << "Enter your name, qualification, branch & experience:";
    cin >> n >> q >> b >> e;


    Teacher teacher2(n,b,q,e);

    Teacher teacher3 = teacher2;
    teacher3.getData();
}