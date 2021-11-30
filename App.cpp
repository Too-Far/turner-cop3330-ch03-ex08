/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Turner
 */

#include "std_lib_facilities.h"

int main()
{
	//Declaration for integer to be used
	int num, x;
	cout << "Please enter an integer number: "; //

    //Obtain int from user
	cin >> num;
	
    // Use modulo to see if number is even or not.
    // if even, modulo will be 0
	x = num % 2;

	if (x == 0) {
		cout << "The number " << num << " is an even number."; 
	}
	else {
		cout << "The number " << num << " is an odd number.";
	}
	return 0;
}