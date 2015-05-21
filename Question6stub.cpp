/*
 *  Question6.cpp
 *
 *  Name: ISANG BARTHOLOMEW BERNARD
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/0872
 *
 * Body Mass Index (BMI) calculator application that reads
 * the user’s weight in kilograms and height in meters,
 * calculates and display the user’s body mass index
 *
 *  Stub file to enable you complete assignment #1 - question #6
 */
	
	#include <iostream>
	#include <math.h>
	using namespace std;
	
	
	int main()
	{
	// Variable declaration
	double weightInKilograms;
	double heightInMeters;
	double BMI;
	
	// display welcome messages to user
	cout << "Welcome - This Body Mass Index (BMI) calculator application that reads\n";
	cout << "the userâ€™s weight in kilograms and height in meters,\n";
	cout << "calculates and display the userâ€™s body mass index\n\n";
	
	// TODO: display information from the Department of Health and Human Services

	cout<<"DEPARTMENT OF HEALTH AND HUMAN SERVICES"<<endl;	
	cout<<endl;          // Another end paragraph
	// TODO: read in values
	cout << "Enter weight (in kg): ";
	cin>>weightInKilograms;
	cout << "Enter height (in meters): ";
	cin>>heightInMeters;
	
	// TODO: calculate BMI
	// Put code here ...
	BMI = weightInKilograms/pow(heightInMeters,2);	// calculation of the BMI
	
	// display result
	// Put code here ...
	cout<<"body mass Index = "<<BMI<<endl;	
	
	cout << "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
