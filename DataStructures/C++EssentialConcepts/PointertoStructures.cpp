#include<iostream>
using namespace std;
using std::string;

 struct Employee{
    int empID;
    string empName;
    float empSalary;
 };

 int main(){
    Employee emp1; //Statically Create an Employee object (created in stack)
    emp1.empID = 2334423;
    emp1.empName = "Scecter Reid";
    emp1.empSalary = 34345.45f;
    
    Employee *empPointer;//Create pointer to access the attributes of the Structure object
    empPointer = &emp1;

    cout<<"Employer ID: "<<empPointer->empID<<endl;
    cout<<"Employer Name: "<<empPointer->empName<<endl;
    cout<<"Employer Salary: "<<empPointer->empSalary<<endl;


//Dynamically create an Employee object (created in heap) No need to create a separate pointer, just create the object as a pointer
Employee *emp2 = new Employee;
    emp2->empID = 836423;
    emp2->empName = "Jackline Carlyle";
    emp2->empSalary= 834745465.456;

    cout<<emp2->empID;
    cout<<emp2->empName<<endl;
    cout<<emp1.empSalary;



 }
