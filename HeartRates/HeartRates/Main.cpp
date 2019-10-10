// week 3 practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HeartRates.h"



int main()
{

	std::string fname_, lname_;
	int dateDay_, dateMonth_, dateYear_;

	std::cout << "Please enter your First Name!" << std::endl;
	std::cin >> fname_;
	std::cout << "Please enter your Last Name!" << std::endl;
	std::cin >> lname_;
	std::cout << "Please enter your DOB day-month-year" << std::endl;
	std::cin >> dateDay_ >> dateMonth_ >> dateYear_;

	HeartRates test(fname_, lname_, dateDay_, dateMonth_, dateYear_); {
	std::cout << "Your Age is:" << test.CalculateAge()  << std::endl;
	std::cout << "Your Heartrate is:" <<  test.CalculateHeartRate() << std::endl;
	std::cout << "Your target Heartrate:" <<  test.CalculateMinHeartRate() << " - " <<test.CalculateMaxHeartRate() <<std::endl;
	
	
	}




	return 0;

}
