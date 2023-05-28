#pragma once
#include <iostream>
#include "Calculate.h"
using namespace std;
class Mass : public Calculate
{
public:
    Mass(string choice);
    void recalculate(double input);
    double KgToLbs(double input);
    double LbsToKg(double input);
    double StToLbs(double input);
    double LbsToSt(double input);
    double KgToSt(double input);
    double StToKg(double input);
private:
    string choice;
};
