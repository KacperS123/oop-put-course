 #include <iostream>
#include "Time.h"
Time::Time(string choice) : choice(choice) {}
        void Time::recalculate(double input)
    {
        if (choice == "s" || choice == "S")
        {
            cout << input << " s = " << Time::StoH(input) << " h" << endl;
            cout << input << " s = " << Time::StoD(input) << " d" << endl;
        }
        else if (choice == "h" || choice == "H")
        {
            cout << input << " h = " << Time::HtoS(input) << " s" << endl;
            cout << input << " h = " << Time::HtoD(input) << " d" << endl;
        }
        else if (choice == "d" || choice == "D")
        {
            cout << input << " d = " << Time::DtoS(input) << " s" << endl;
            cout << input << " d = " << Time::DtoH(input) << " h" << endl;
        }
    }
    double Time::StoH(double input)
    {
        return input / 3600;
    }
    double Time::StoD(double input)
    {
        return input / 86400;
    }
    double Time::HtoS(double input)
    {
        return input * 3600;
    }
    double Time::HtoD(double input)
    {
        return input / 24 ;
    }
    double Time::DtoS(double input)
    {
        return input * 86400;
    }
    double Time::DtoH(double input)
    {
        return input * 24 ;
    }
