#pragma once
#include <iostream>
#include "Calculate.h"
using namespace std;
class Time : public Calculate
{
    public:
  Time(string choice);
    void recalculate(double input);
    double StoH(double input);
    double StoD(double input);
    double HtoS(double input);
    double HtoD(double input);
    double DtoS(double input);
    double DtoH(double input);
private:
    string choice;
};
