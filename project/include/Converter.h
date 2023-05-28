#pragma once
#include <iostream>
#include "Calculate.h"
#include "Currency.h"
#include "Lenght.h"
#include "Mass.h"
#include "Time.h"
#include "Temperature.h"
using namespace std;
class Converter {
public:
    string choice;
    void convert();
private:
    int select;
    double value;
    int choose();
};
