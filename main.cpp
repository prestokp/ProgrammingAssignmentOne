#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

const int NUM_ASSIGNMENT = 3;
const int GRADE_NUMBER = 3;
int main() {

    double gradeAverage;   //this code block defines all of the variables that will be used throughout the program
    string studentName;
    string assignmentName[NUM_ASSIGNMENT];
    int grades[GRADE_NUMBER];


    //program specifications call for the variables to be put in array so the following code will be prototype code
    //string studentName[2] = {firstName, lastName};
    //string nameAssignments[3] = {firstAssignment, secondAssignment, thirdAssignment}
    //int grades[3] = {firstGrade, secondGrade, thirdGrade};

    cout<<"What is your first and last name: ";
    getline(cin, studentName);
    //one line code to get the entire line: getline(cin, studentName);



    cout<<"Enter first assignment name: ";
    getline(cin, assignmentName[0]);

    cout<<"Enter second assignment name: ";
    getline(cin, assignmentName[1]);

    cout<<"Enter third assignment name: ";
    getline(cin, assignmentName[2]);



    cout<<"Enter first grade: ";   //These are the iostreams that prompt the user to enter their grades in
    cin>>grades[0];               //The grades must be entered in as integers, needs a more descriptive prompt

    cout<<"Enter second grade: ";
    cin>>grades[1];

    cout<<"Enter third grade: ";
    cin>>grades[2];

    //one line code that will get the grades from a single line: getline(cin, grades);

    gradeAverage = (grades[0] + static_cast<double>(grades[1])+grades[2])/(3.0); //Average expression, static type cast
    //as extra redundancy to ensure the data type gets converted to a double

    cout<<"The average for "<<studentName<<" "<<"is: "<<fixed<<showpoint<<setprecision(1)<<gradeAverage<<endl; //when array solution is implemented the output variable will
    //simply be studentName

    cout<<"Here are your grades: "<<endl;
    cout<<assignmentName[0]<<": "<<firstGrade<<endl;
    cout<<assignmentName[1]<<": "<<secondGrade<<endl;
    cout<<assignmentName[2]<<": "<<thirdGrade<<endl;
    cout<<endl<<endl;
    cout<<"Thank you for playing. ";

    return 0;
}