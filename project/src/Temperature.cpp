 #include <iostream>
#include "Temperature.h"
Temperature::Temperature(string choice) : choice(choice) {}
    void Temperature::recalculate(double input) {
        if (choice == "c" || choice == "C")
        {
            cout << input << " C = " << Temperature::CtoF(input) << " F" << endl;
            cout << input << " C = " << Temperature::CtoK(input) << " K" << endl;
        }
        else if (choice == "f" || choice == "F")
        {
            cout << input << " F = " << Temperature::FtoC(input) << " C" << endl;
            cout << input << " F = " << Temperature::FtoK(input) << " K" << endl;
        }
        else if (choice == "k" || choice == "K")
        {
            cout << input << " K = " << Temperature::KtoC(input) << " C" << endl;
            cout << input << " K = " << Temperature::KtoF(input) << " F" << endl;
        }
    }
    double Temperature::CtoF(double input)
    {
        return input * 9.0/5.0 + 32.0;
    }
    double Temperature::CtoK(double input)
    {
        return input + 273.15;
    }
    double Temperature::FtoC(double input)
    {
        return (input - 32.0) * 5.0/9.0;
    }
    double Temperature::FtoK(double input)
    {
        return (input + 459.67) * 5.0/9.0 ;
    }
    double Temperature::KtoC(double input)
    {
        return input - 273.15;
    }
    double Temperature::KtoF(double input)
    {
        return input * 9.0/5.0 - 459.67 ;
    }
