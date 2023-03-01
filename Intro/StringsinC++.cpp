//**C++ STRINGS**  
#include <iostream>
#include <string>
using namespace std;

int main()
{
string greeting = "Hello, ";
string firstName = "Ironman!";

//CONCATENATION
cout<<greeting + firstName;

//USING APPEND
string lastName = "Marvel";
string fullName = firstName.append(lastName);
//string fullGreeting = greeting.append(firstName, lastName);
cout<<"\n\n"<<fullName;
//cout<<"\n\n"<<fullGreeting;

//GETTING LENGTH OF A STRING
cout<<fullName.length()<<endl;
cout<<fullName.size()<<endl;


//INDEXING STRINGS
//outputs the first letter of the fullname
cout<<fullName[0]<<endl;
cout<<fullName.substr(1,3)<<endl;//prints 1,2&3rd character

//replacing characters in strings
string sweetname = "pumpkin";
sweetname[0] = 'b';
cout<<sweetname<<endl;


//ACCEPTING USER INPUT STRINGS
string yourName;
//using cin which has the disadvantage of only reading the 1st word. treats spaces as a break
/*cout<<"Type your full names: \n";
cin>>yourName;
cout<<"Your full names are: "<<yourName;*/

//using getline(); with cin which can read a full line
cout<<"\n Type your full names: \n";
getline(cin,yourName);
cout<<"Your full names are: "<<yourName;

return 0;
}

