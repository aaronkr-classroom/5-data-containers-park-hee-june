#pragma once
#ifndef GUARD_grade_h
#define GUARD_grade_h

//grade.h
#include <vector>
#include "Student_info.h"

double grade(double, double, double); //header���Ͽ����� �Ű����� �̸� �ʿ���� ���� �ڷ����� ǥ�� (����, ����, ����)
double grade(double, double, vector<double>&);
double grade(const Student_info&);

#endif