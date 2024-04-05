#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h

//grade.h
#include <vector>
#include "Student_info.h"

double grade(double, double, double); //header파일에서는 매개변수 이름 필요없음 그저 자료형만 표시 (더블, 더블, 더블)
double grade(double, double, vector<double>&);
double grade(const Student_info&);

#endif