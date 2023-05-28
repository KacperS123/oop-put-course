#pragma once
#include <iostream>
#include "Calculate.h"
class Lenght : public Calculate
{
    public:
  Lenght(string choice);
    void recalculate(double input);
    double MtoFt(double input);
    double MtoYd(double input);
    double FttoM(double input);
    double FttoYd(double input);
    double YdtoM(double input);
    double YdtoFt(double input);
private:
    string choice;
};
