#pragma once
#include <iostream>
using namespace std;


class CourseGrade {
	int course;
	float grade;
public:
	void setCourse(int c);
	void setGrade(float g);
	int getCourse() const;
	float getGrade() const;
	CourseGrade(int c, float g);
};