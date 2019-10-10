// week 3 practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HeartRates.h"



int main()
{

	std::string fname, lname;
	int dateDay, dateMonth, dateYear;

	std::cout << "Please enter your First Name!" << std::endl;
	std::cin >> fname;
	std::cout << "Please enter your Last Name!" << std::endl;
	std::cin >> lname;
	std::cout << "Please enter your DOB day-month-year" << std::endl;
	std::cin >> dateDay >> dateMonth >> dateYear;

	HeartRates test(fname, lname, dateDay, dateMonth, dateYear); {
	std::cout << "Your Age is:" << x  << std::endl;
	std::cout << "Your Heartrate is:" <<  CalculateHeartRate << std::endl;
	std::cout << "Your target Heartrate:" <<  CalculateMinHeartRate << " - " <<int CalculateMaxHeartRate << std::endl;
	
	
	}




	return 0;

}
