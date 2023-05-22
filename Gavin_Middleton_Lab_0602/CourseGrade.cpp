#include <iostream>
#include "CourseGrade.h"
using namespace std;


void CourseGrade::setCourse(int c) {
	course = c;
}

void CourseGrade::setGrade(float g) {
	grade = g;
}

int CourseGrade::getCourse() const {
	return course;
}

float CourseGrade::getGrade() const {
	return grade;
}

CourseGrade::CourseGrade(int c, float g) {
	course = c;
	grade = g;
}