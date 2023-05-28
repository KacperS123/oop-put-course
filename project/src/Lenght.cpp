 #include <iostream>
#include "Lenght.h"
Lenght::Lenght(string choice) : choice(choice) {}
    void Lenght::recalculate(double input)
    {
        if (choice == "m" || choice == "M")
        {
            cout << input << " m = " << MtoFt(input) << " ft" << endl;
            cout << input << " m = " << MtoYd(input) << " yd" << endl;
        }
        else if (choice == "ft" || choice == "FT")
        {
            cout << input << " ft = " << FttoM(input) << " m" << endl;
            cout << input << " ft = " << FttoYd(input) << " yd" << endl;
        }
        else if (choice == "yd" || choice == "YD")
        {
            cout << input << " yd = " << YdtoM(input) << " m" << endl;
            cout << input << " yd = " << YdtoFt(input) << " ft" << endl;
        }
    }
    double Lenght::MtoFt(double input)
    {
        return input * 3.280839895;
    }
    double Lenght::MtoYd(double input)
    {
        return input * 1.0936132983;
    }
    double Lenght::FttoM(double input)
    {
        return input / 3.280839895;
    }
    double Lenght::FttoYd(double input)
    {
        return input /3 ;
    }
    double Lenght::YdtoM(double input)
    {
        return input / 1.0936132983;
    }
    double Lenght::YdtoFt(double input)
    {
        return input * 3 ;
    }
