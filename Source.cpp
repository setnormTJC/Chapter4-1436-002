#include <iostream>
#include<iomanip>
#include<fstream>
#include <cassert>

using namespace std;

int main()
{
    int a = -43;
    //
    assert(a > 0);
    
    //ifstream inputData; //#include <fstream>
    //inputData.open("inputFile.txt");
    //if (!inputData)
    //{
    //    cout << "File not found" << endl;
    //    return -42;
    //    // return prevents program from going further
    //    // returning nonzero value is convention for abnormal termination
    //}


    //insert one million lines of code that waste processor time ...

    //double sum = (2.0 / 7.0) + (3.0 / 7.0) + (2.0 / 7.0);
    //float floatSum = (2.0 / 7.0) + (3.0 / 7.0) + (2.0 / 7.0);

    //cout << fixed << setprecision(17) << sum << endl; 
    //cout << floatSum << endl; 

    //double errorTolerance = 0.00000000000000000000000000000001;

    //if (abs(sum - 1.0)  < errorTolerance)
    //{
    //    cout << "The sum is equal to 1.0000.00 (WITHIN our error tolerance)"<< endl; 
    //}

    //else
    //{
    //    cout << "The sum is NOT exactly equal to 1" << endl;
    //}

    //asdfasdf

    //int score = 82;
    //if (80 <= score && score <= 89)
    //{
    //    cout << "Letter grade is B." << endl;
    //}

   // cout <</* std::boolalpha <<*/ (80 <= score) << endl; 


    //cout << "Enter a menu letter option: " << endl; 
    //cout << "Your choices are f (file), e (edit), v(view), g(git): " << endl; 

    ////ifstream 
    //char inputLetter; 
    //cin >> inputLetter; 

    //switch (inputLetter)
    //{
    //case 'f':
    //    cout << "You selected the FILE menu button!" << endl; 
    //    //break;

    //case 'e': 
    //    cout << "You selected the EDIT option!" << endl; 
    //    break; 

    //case 'v': 
    //    cout << "VIEW" << endl; 
    //    break; 

    //case 'g': 
    //    cout << "GIT" << endl; 
    //    break; 

    //default: //analogous to an "else" (in an if ... else if .. else "construct" 
    //    cout << "You entered an UNKNOWN option/letter" << endl; 
    //    break;

    //    
    //}
    ////cout << "NOT hello world" << endl; 

    ////cout << "Something else!" << endl; 
    ////int a = 2; 
    ////int b = a * 2; 

    ////cout << b << endl; 

    ////ifstream inputFile{ "input.txt" };

    ////string input; 

    ////inputFile >> input; 

    ////cout << input << endl;


    ////int aNumber = 2; 
    ////char aLetter = 'z'; 
    ////string someWord = "hello"; 
    ////double pi = 3.14; 
    ////float lessPrecisePi = 3.1f; 

    ////bool lightsOn = false; 

    //////bool whichIsGreater = 5 > 6; //false

    ////int negativeFive = -5; //single equal sign means "assign to"
    ////int zero = 0; 

    ////string correctPassword = "123456"; //Spaceballs 
    ////cout << "Enter your password: " << endl; 
    ////string enteredPassword; 
    ////cin >> enteredPassword;

    ////if (enteredPassword != correctPassword) //double equal sign means "ask if equal"
    ////{
    ////    cout << "Login successful - welcome to your wonderful social media app!" << endl; 
    ////}

    ////int numberToTest = 4; 

    ////if (numberToTest % 2 == 1)
    ////{
    ////    cout << "Odd" << endl; 
    ////}

    ////else
    ////{
    ////    cout << "Even" << endl; 
    ////}

    //int age = 21;
    //cout << "Enter age: " << endl;
    //cin >> age;

    ////if (age > 0)
    ////{

    ////}
    ////
    ////if (age < 0)
    ////{
    ////    cout << "No negative ages allowed " << endl;
    ////}

    ////else if (age >= 0 and age <= 12) //Intentional logic error - DEMO age == 12
    ////{
    ////    cout << "you are a child" << endl;
    ////}
    ////else if (age > 12 && age <= 21/* && age >= 0*/) //"edge case"
    ////{
    ////    cout << "You are no longer a child - you are a teenager" << endl;
    ////}
    //////if ... else if .... else
    ////else if (age > 21 && age < 35)
    ////{
    ////    cout << "You are an adult now" << endl;
    ////    cout << "Some more text in the adult field" << endl;
    ////}

    ////else if (age >= 35 && age < 60)
    ////{
    ////    cout << "You feel old now - bad joints, bad knees, etc" << endl;
    ////}

    ////else
    ////{
    ////    cout << "You actually are old" << endl;
    ////}

    //int a = 0; //0 means FALSE

    //bool isRainy = false; 
    //int speed = 60; 
    //bool isNight = true; 

    //if (isRainy or isNight  )
    //{
    //    speed = speed - 5; 
    //    cout << "Speed decremented by 5" << endl; //INCREMENTED
    //    //speed -= 5; 
    //}

    //cout << speed << endl; 


    //int hour = 17;
    //string time = (hour < 18) ? "Daytime" : "Evening";
    //
    //if (hour < 18)
    //{
    //    time = "Daytime";
    //}

    //else
    //{
    //    time = "Evening";
    //}

    //cout << time << endl; 


    //int speed = 65; 

    //if (!(speed > 70)) //!false = true
    //    //if (speed <= 70)
    //{
    //    cout << "You are NOT speeding" << endl;
    //}
    //
    //else
    //{
    //    cout << "speeding" << endl; 
    //}


    //DEMO common errors with if statements 
    //"semicolon-happy"
    //int age = 43; 

    //if (age > 42)
    //{
    //    int a = 54; 
    //    cout << "Something" << endl; 
    //}

    //else
    //{
    //    cout << "Nothing" << endl;
    //}

    //cout << a << endl; 
    //variable SCOPE!

    //"overlapping conditions" in if ... else if ... else
 

    return 0;
}