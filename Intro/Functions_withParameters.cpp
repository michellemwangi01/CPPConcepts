#include <iostream>
using namespace std;


////LESSON#1 example 1 ----> when passing in the parameter to the program directly
//void printMesomething(int x)
//{
////    int x;
//    cout<<"Which number let the dogs out? \n"<<x<<endl;
//}
//
//int main(){
//    int newvar = 20;
//    printMesomething(newvar);
//
//    //same as
//    printMesomething(20);
//    return 0;
//}


//LESSON #2 example 2----> when taking in the parameter value as input from the user
//int printMesomethingElse(int x){
//    cout<<"Let's take in some input shall we, gimme a number: \n";
//    cin>> x;
//    cout<<"And our number is: "<<x;
//    return 0;
//}
//
//int main(){
//    printMesomethingElse(x);
//    return 0;
//}

//LESSON#3 ---> example 3
//void writemeSomeNames(string fname)
//{
//    cout<<fname<< " is hella coool!\n";
//}
//
//int main()
//{
//    writemeSomeNames("Tokyo");
//    writemeSomeNames("Nairobi");
//    writemeSomeNames("Professor");
//    writemeSomeNames("Helsinki");
//    return 0;
//}


////LESSON#5
////Assigning Default Parameter values using the = sign
////A parameter with a default value is often known as an optional parameter
//void holidayDestinations(string country = "Maldives")
//{
//    cout<<"My preferred holiday destinations are: " <<country <<endl;
//}
//
//
//int main()
//{
//    holidayDestinations("South Coast \n");
//    holidayDestinations("Anywhere with a beach and things to do!\n");
//    holidayDestinations("A break from my usual routine \n");
//    holidayDestinations(); //Though no argument is passed in to the function, Maldives is picked by default as it has been assigned as the default destination
//    return 0;
//}


////LESSON#6 MULTIPLE PARAMETERS
////Note that when you are working with multiple parameters,
////the function call must have the same number of arguments as there are parameters
////and the arguments must be passed in the same order as defined in the parameters.
//void ageFunction(string fname, string lname, int age)
//{
//    cout<<fname<<" "<<lname<<" is "<<age<<" years old."<<endl;
//}
//
//int main()
//{
//    ageFunction("Samson", "Kenzis", 24);
//    ageFunction("Scooby", "Doo", 124);
//    return 0;
//}


////LESSON#6 ---> RETURN VALUES
//int  myreturnFunction (int x)
//{
//    int sum =  5+x;
//    return sum;
//}
//
////store the result in a variable either in the main function
//int sumofTwoParameters(int x, int y)
//{
//    int sumofpars = x+y;
//    return sumofpars;
//}
//
//int main()
//{
//    //note that the cout will only output the datatype defined in the function
//    //This below will not work
//    //cout<<"The sum of the 2 numbers is: "<<myreturnFunction(3);
//    cout<<myreturnFunction(3)<<endl;
//
//    //returns depending on the function
//    cout<<sumofTwoParameters(3,4)<<endl;
//
//    //you can also store the result of the function in  a variable that is accessible inside the main function and then print out the variable
//    int summationofpars = sumofTwoParameters(3,4);
//    cout<<summationofpars;
//    return 0;
//}


//LESSON#6 ---> PASSING BY VALUE

//int passbyValue(int x)
//{
//    x=10;
//    cout<<x;
//    return x;
//}
//
//int main()
//{
//    //passing by value means that we maintain the value of x in the function as it was declared in the function itself
//    //int x;
//    //passbyValue(x);
//
//    //The VALUE of variable in the function definition is copied to become the VALUE of the variable passed into the function call variable
//    //Therefore, even changing the value of the x variable in the main function DOES NOT change the value of the variable used in the function call
//    //Y inside the function remains as 10 as was defined in the function because the VALUE of x is COPIED into the new variable, y, that we have defined in the main function.
//    //Also, these 2 variables can have the same name or different names
//    //int y; //used the value 10
//    int y = 12;//changes the value of y. y becomes 12 BUT the value that is used inside the function does not change
//
//    cout<<passbyValue(y);
//    cout<<y;
//    return 0;
//}

//LESSON#7 ---> PASSING BY REFERENCE
//Can also be described as passing by pointer to a specific memory location.
//which means that any changes done to the variable defined in the function are also applied to the variable created in the function call
int passbyReference(int &x)
{
    x=10;
    cout<<x;
    return x;
}

int main()
{
    //since we passed by reference, value of y will change to 10 coz it's reading its value from the location
    int y = 12;
    passbyReference(y);
    cout<<y;

    return 0;
}








