#include<iostream>
using namespace std;

class Employee{
    private:
        string employeeID, employeeName;
        int experience;
        float salary;

    public:
        void addDetails(string id, string name, int exp, float salary){
            employeeID = id;
            employeeName = name;
            experience = exp;
            this->salary = salary;
        }

        void showDetails(){
            cout << "The employee with name " << employeeName << " bearing " << employeeID << " having " << experience << " years of experience and receives a salary of Rs." << salary << "/-" << endl;
        }
};

class Skill : public Employee{ // Derived Class (Single Inheritance)
    private:
         int skillCount;
         string *skills; // Pointer Array

    public:
         // Default Constructor without initializing any values
         Skill(){
            cout << "No Data Found!";
         }

         Skill(int count) { // Parameterized Constructor
            skillCount = count;
            skills = new string[skillCount]; // Dynamically Allocating Memory for Pointer Array(skills)
            cout << "Dynamically created the Pointer Array - skills" << endl; 
            cout << "Enter the " << count << "technologies you're familiar with: " << endl;
            for(int i = 0; i < count; i++){  // Array Initialization
                cout << "Skill " << i + 1 << ": ";
                cin >> skills[i];
            }
         }

         void showSkills(){
            cout << "Skills known: " << endl;
            for(int i =0; i < skillCount; i++){ // Display the content of Skill Array
                cout << i+1 << ". " << skills[i] << endl;
            }
         }

         ~Skill(){
            delete[] skills;  // Free up the memory allocated by Pointer Array using delete keyword
            cout << "Memory has been cleared by the Destructor!";
         }

};

int main(){
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;

    cout << "Enter the following details of the Employees: " << endl;
    cout << "Employee ID, Name, Years of Experience, Salary:" << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;

    cout << "Enter the number of technologies you know: " << endl;
    cin >> skill_count;

    // pointer refering to the Object s1 of Skill class which can also inherit the properties of Employee class
    Skill s1;
    Skill *emp1 = &s1;  // Pointer Object - *emp1

    s1.addDetails(emp_id,emp_name,emp_exp,emp_salary);

    emp1->showDetails();
    emp1->showSkills();

    Skill s2;
}