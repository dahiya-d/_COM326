

#include "Student.h"

//default constructor

Student::Student(std::string name) {
	name_ = name;
	std::cout << "The first custom student class was called" << std::endl;
}

Student::Student()
{
	std::cout << "default" << std::endl;
}

Student::Student(std::string name, std::string regid, std::string course, int yearofstudy) : name_{ name }, regid_{ regid }, course_{ course }, yearofstudy_(yearofstudy)
{
	std::cout << "second custom constructor was called" << std::endl;
}

void Student::Setname(std::string name) {
	name_ = name;
}
std::string Student::Getname() const {
	return name_;
}

void Student::Setregid(std::string regid) {
	regid_ = regid;
}
std::string Student::Getregid() const {
	return regid_;
}

void Student::Setcourse(std::string course) {
	course_ = course;
}
std::string Student::Getcourse() const {
	return course_;
}

void Student::Setyearofstudy(int yearofstudy) {
	yearofstudy_ = yearofstudy;
}
int Student::Getyearofstudy() const {
	return yearofstudy_;
}