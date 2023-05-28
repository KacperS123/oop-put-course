#pragma once
#include <iostream>
#include "Calculate.h"
using namespace std;
class Currency : public Calculate
{
    public:
  Currency(string choice);
    void recalculate(double input);
    double PLNTOUSD(double input);
    double PLNTOEUR(double input);
    double USDTOPLN(double input);
    double USDTOEUR(double input);
    double EURTOPLN(double input);
    double EURTOUSD(double input);
private:
    string choice;
};
