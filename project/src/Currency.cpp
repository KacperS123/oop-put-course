#include <iostream>
#include "Currency.h"
Currency::Currency(string choice) : choice(choice) {}
void Currency::recalculate(double input)
{
        if (choice == "pln" || choice == "PLN")
        {
            cout << input << " PLN = " << Currency::PLNTOUSD(input) << " USD" << endl;
            cout << input << " PLN = " << Currency::PLNTOEUR(input) << " EUR" << endl;
            cout << "Data valid as of 27.05.2023" << endl;
        }
        else if (choice == "usd" || choice == "USD")
        {
            cout << input << " USD = " << Currency::USDTOPLN(input) << " PLN" << endl;
            cout << input << " USD = " << Currency::USDTOEUR(input) << " EUR" << endl;
            cout << "Data valid as of 27.05.2023" << endl;
        }
        else if (choice == "eur" || choice == "EUR")
        {
            cout << input << " EUR = " << Currency::EURTOPLN(input) << " PLN" << endl;
            cout << input << " EUR = " << Currency::EURTOUSD(input) << " USD" << endl;
            cout << "Data valid as of 27.05.2023" << endl;
        }
}
double Currency::PLNTOUSD(double input)
    {
        return input / 4.22;
    }
double Currency::PLNTOEUR(double input)
    {
        return input / 4.53;
    }
double Currency::USDTOPLN(double input)
    {
        return input * 4.22;
    }
double Currency::USDTOEUR(double input)
    {
        return input * 0.93;
    }
double Currency::EURTOPLN(double input)
    {
        return input * 4.53;
    }
double Currency::EURTOUSD(double input)
    {
        return input / 0.93 ;
    }
