#pragma once
#pragma warning(disable : 4996)

#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

class HeartRates {
private:
	std::string fname_;
	std::string lname_;
	int dateDay_;
	int dateMonth_;
	int dateYear_;
	int age_;



public:

	HeartRates(std::string fname, std::string lname, int dateDay, int dateMonth, int dateYear)
		: fname_{ fname }, lname_{ lname }, dateDay_{ dateDay }, dateMonth_{ dateMonth }, dateYear_{ dateYear }
	{}
	//Getters/Setters

	void Setfname(std::string fname)
	{}
	std::string Getfname() const {
		return fname_;
	}

	void Setlname(std::string lname)
	{}
	std::string Getlname() const {
		return lname_;
	}

	void SetdateDay(int dateDay)
	{}
	int GetdateDay() const {
		return dateDay_;
	}

	void SetdateMonth(int dateMonth)
	{}
	int GetdateMonth() const {
		return dateMonth_;
	}

	void SetdateYear(int dateYear)
	{}
	int GetdateYear() const {
		return dateYear_;
	}

	int CalculateAge() {
		time_t t = time(NULL);
		tm* timePtr = localtime(&t);
		return ((timePtr->tm_year + 1900) - dateYear_);

	}

	int CalculateHeartRate() {
		return (220 - CalculateAge());
	}

	int CalculateMaxHeartRate() {
		return (80 * (CalculateHeartRate() / 100));
	}

	int CalculateMinHeartRate() {
		return (50 * (CalculateHeartRate() / 100));
	}

};