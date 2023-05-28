#pragma once
#include <iostream>
#include "Calculate.h"
using namespace std;
class Temperature : public Calculate
{
    public:
  Temperature(string choice);
    void recalculate(double input);
    double CtoF(double input);
    double CtoK(double input);
    double FtoC(double input);
    double FtoK(double input);
    double KtoC(double input);
    double KtoF(double input);
private:
    string choice;
};
