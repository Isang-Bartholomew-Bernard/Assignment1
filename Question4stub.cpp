/*
 *  Question4.cpp
 *
 *  Name: ISANG BARTHOLOMEW BERNARD
 *  Department: DEPARTMENT OF COMPUTER SCIENCE
 *  Matric. No: PDS/2013/0872
 *
 *  Program that inputs a five-digit integer,
 *  separates the integer into its digits and prints them separated by three spaces each
 *
 *  Stub file to enable you complete assignment #1 - question #4
 */
	
	#include <iostream>
	#include <string>
	#include <math.h>
	using namespace std;
	

	
	int main()
	{
	// Variable declaration
	int digits;
	
	// display welcome messages to user
	cout << "Welcome - This program reads a five-digit integer\n";
	cout << "separates the integer into its digits and prints them\n";
	cout << "separated by three spaces each\n\n";
	
	// TODO: Read integer using cin
	cout << "Enter five digit integer value - ";
	cin>>digits;
	
	// check if digit is a five digit integer
/*	if (to_string(digits).length() < 5 || to_string(digits).length() > 5)
	{
	cout << "\nERROR - Please enter a five digit integer";
	} else {
 */
	// TODO: Separate the integer into its digits and prints them separated by three spaces each
	int decimal_int=10000;		// decimal_int is number of decimal place
	double value2;
	double value3;
	int int_counter=1;
	while(int_counter>=1 && int_counter<=5)
	{
		value2=digits/decimal_int;
		value3=floor(value2);
		cout<<value3<<"   ";
		digits=digits-value3*decimal_int;
		decimal_int=decimal_int/10; // reduce decimal point
		int_counter=int_counter+1;
	}

	
	cout<< "\nThanks and Goodbye";
	
	system("PAUSE");
	return EXIT_SUCCESS;
	}
	
