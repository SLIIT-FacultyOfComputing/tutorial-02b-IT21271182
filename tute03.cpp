/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{
	//Declaring variables
    int no;
    long fac;

	//Taking inputs
    std::cout << "Enter a Number : ";
    std::cin >> no ;

	//Selection & calculation
    fac = 1;
	
    for (int r=no ; r >= 1 ; r--) {
        fac = fac * r;
    }

	//Output
    std::cout << "Factorial of " << no << " is " << fac;
	
    return 0;
}
