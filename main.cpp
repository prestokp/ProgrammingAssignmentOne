#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

    double gradeAverage;   //this code block defines all of the variables that will be used throughout the program
    string firstName;
    string lastName;
    string firstAssignment;
    string secondAssignment;
    string thirdAssignment;
    int firstGrade;
    int secondGrade;
    int thirdGrade;

    //program specifications call for the variables to be put in array so the following code will be prototype code
    //string studentName[2] = {firstName, lastName};
    //string nameAssignments[3] = {firstAssignment, secondAssignment, thirdAssignment}
    //int grades[3] = {firstGrade, secondGrade, thirdGrade};

    cout<<"What is your first and last name: ";
    cin>> firstName>>lastName;
    //one line code to get the entire line: getline(cin, studentName);



    cout<<"Enter first assignment name: ";
    cin>>firstAssignment;

    cout<<"Enter second assignment name: ";
    cin>>secondAssignment;

    cout<<"Enter third assignment name: ";
    cin>>thirdAssignment;



    cout<<"Enter first grade: ";   //These are the iostreams that prompt the user to enter their grades in
    cin>>firstGrade;               //The grades must be entered in as integers, needs a more descriptive prompt

    cout<<"Enter second grade: ";
    cin>>secondGrade;

    cout<<"Enter third grade: ";
    cin>>thirdGrade;

    //one line code that will get the grades from a single line: getline(cin, grades);

    gradeAverage = (firstGrade + static_cast<double>(secondGrade)+thirdGrade)/(3.0); //Average expression, static type cast
    //as extra redundancy to ensure the data type gets converted to a double

    cout<<"The average for "<<firstName<<" "<<lastName<<" is: "<<fixed<<showpoint<<setprecision(1)<<gradeAverage<<endl; //when array solution is implemented the output variable will
    //simply be studentName

    cout<<"Here are your grades: "<<endl;
    cout<<firstAssignment<<": "<<firstGrade<<endl;
    cout<<secondAssignment<<": "<<secondGrade<<endl;
    cout<<thirdAssignment<<": "<<thirdGrade<<endl;
    cout<<endl<<endl;
    cout<<"Thank you for playing. ";

    return 0;
}