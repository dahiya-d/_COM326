#pragma once

#include <iostream>
#include <string>


class Student {
	//privatise data members
private:
	std::string name_;
	std::string regid_;
	std::string course_;
	int yearofstudy_{};

	//std::vector<module> moduleMarks_{};

	//int moduleOneMark_;
	//int moduleTwoMark_;
	//int moduleThreeMark_;

public:

	Student();

	Student(std::string name, std::string regid, std::string course, int yearofstudy);

	Student(std::string name);

	//GETTERS AND SETTERS

	void Setname(std::string name);
	std::string Getname() const;

	void Setregid(std::string regid);
	std::string Getregid() const;

	void Setcourse(std::string course);
	std::string Getcourse() const;

	void Setyearofstudy(int yearofstudy);
	int Getyearofstudy() const;

	//void AddModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);
	//void AddModule(Module m);
	//void DeleteModule(std::string moduleCode);
	//void UpdateModule(std::string moduleTitle, std::string moduleCode, int moduleCreditPoints, int moduleMark);

	//void ToString() const;

	//std::string Student::CalculateClassification() const;

};