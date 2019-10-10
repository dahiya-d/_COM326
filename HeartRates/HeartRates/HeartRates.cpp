// HeartRates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "Heartrates.h"


HeartRates::HeartRates(std::string fname, std::string lname, int dateDay, int dateMonth, int dateYear ) : fname_{ fname }, lname_{ lname }, dateDay_{ dateDay }, dateMonth_{ dateMonth }, dateYear_{ dateYear }
{
	std::cout << "constructor works" << std::endl;
}


