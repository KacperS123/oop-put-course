#include <iostream>
#include "Mass.h"
Mass::Mass(string choice) : choice(choice) {}
    void Mass::recalculate(double input)
    {
        if (choice == "kg" || choice == "KG")
        {
            cout << input << " kg = " << Mass::KgToLbs(input) << " lb" << endl;
            cout << input << " kg = " << Mass::KgToSt(input) << " st" << endl;
        }
        else if (choice == "lb" || choice == "LB")
        {
            cout << input << " lb = " << Mass::LbsToKg(input) << " kg" << endl;
            cout << input << " lb = " << Mass::LbsToSt(input) << " st" << endl;
        }
        else if (choice == "st" || choice == "ST")
        {
            cout << input << " st = " << Mass::StToLbs(input) << " lb" << endl;
            cout << input << " st = " << Mass::StToKg(input) << " kg" << endl;
        }
    }
    double Mass::KgToLbs(double input)
    {
        return input * 2.20462262;
    }
    double Mass::LbsToKg(double input)
    {
        return input / 2.20462262;
    }
    double Mass::StToLbs(double input)
    {
        return input * 14;
    }
    double Mass::LbsToSt(double input)
    {
        return input / 14;
    }
    double Mass::KgToSt(double input)
    {
        return input / 6.35029318;
    }
    double Mass::StToKg(double input)
    {
        return input * 6.35029318;
    }
