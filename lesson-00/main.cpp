#include <iostream>

using namespace std;

class Calculate
{
public:
    virtual void recalculate(double input) = 0;
    virtual string unit() = 0;
};
class Currency : public Calculate
{
    public:
  Currency(string choice) : choice(choice) {}
    void recalculate(double input)
    {
        if (choice == "pln" || choice == "PLN")
        {
            cout << input << " PLN = " << PLNTOUSD(input) << " USD" << endl;
            cout << input << " PLN = " << PLNTOEUR(input) << " EUR" << endl;
            cout << "Data valid as of 27.05.2023" << endl;
        }
        else if (choice == "usd" || choice == "USD")
        {
            cout << input << " USD = " << USDTOPLN(input) << " PLN" << endl;
            cout << input << " USD = " << USDTOEUR(input) << " EUR" << endl;
        }
        else if (choice == "eur" || choice == "EUR")
        {
            cout << input << " EUR = " << EURTOPLN(input) << " PLN" << endl;
            cout << input << " EUR = " << EURTOUSD(input) << " USD" << endl;
        }
    }
    double PLNTOUSD(double input)
    {
        return input / 4.22;
    }
    double PLNTOEUR(double input)
    {
        return input / 4.53;
    }
    double USDTOPLN(double input)
    {
        return input * 4.22;
    }
    double USDTOEUR(double input)
    {
        return input * 0.93;
    }
    double EURTOPLN(double input)
    {
        return input * 4.53;
    }
    double EURTOUSD(double input)
    {
        return input / 0.93 ;
    }
    string unit()
    {
        return "Mass";
    }
private:
    string choice;
};
class Lenght : public Calculate
{
    public:
  Lenght(string choice) : choice(choice) {}
    void recalculate(double input)
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
    double MtoFt(double input)
    {
        return input * 3.280839895;
    }
    double MtoYd(double input)
    {
        return input * 1.0936132983;
    }
    double FttoM(double input)
    {
        return input / 3.280839895;
    }
    double FttoYd(double input)
    {
        return input /3 ;
    }
    double YdtoM(double input)
    {
        return input / 1.0936132983;
    }
    double YdtoFt(double input)
    {
        return input * 3 ;
    }
    string unit() {
        return "Mass";
    }
private:
    string choice;
};

class Mass : public Calculate
{
public:
    Mass(string choice) : choice(choice) {}
    void recalculate(double input)
    {
        if (choice == "kg" || choice == "KG")
        {
            cout << input << " kg = " << KgToLbs(input) << " lb" << endl;
            cout << input << " kg = " << KgToSt(input) << " st" << endl;
        }
        else if (choice == "lb" || choice == "LB")
        {
            cout << input << " lb = " << LbsToKg(input) << " kg" << endl;
            cout << input << " lb = " << LbsToSt(input) << " st" << endl;
        }
        else if (choice == "st" || choice == "ST")
        {
            cout << input << " st = " << StToLbs(input) << " lb" << endl;
            cout << input << " st = " << StToKg(input) << " kg" << endl;
        }
    }
    double KgToLbs(double input)
    {
        return input * 2.20462262;
    }
    double LbsToKg(double input)
    {
        return input / 2.20462262;
    }
    double StToLbs(double input)
    {
        return input * 14;
    }
    double LbsToSt(double input)
    {
        return input / 14;
    }
    double KgToSt(double input)
    {
        return input / 6.35029318;
    }
    double StToKg(double input)
    {
        return input * 6.35029318;
    }
    string unit()
    {
        return "Mass";
    }
private:
    string choice;
};
class Time : public Calculate
{
    public:
  Time(string choice) : choice(choice) {}
    void recalculate(double input)
    {
        if (choice == "s" || choice == "S")
        {
            cout << input << " s = " << StoH(input) << " h" << endl;
            cout << input << " s = " << StoD(input) << " d" << endl;
        }
        else if (choice == "h" || choice == "H")
        {
            cout << input << " h = " << HtoS(input) << " s" << endl;
            cout << input << " h = " << HtoD(input) << " d" << endl;
        }
        else if (choice == "d" || choice == "D")
        {
            cout << input << " d = " << DtoS(input) << " s" << endl;
            cout << input << " d = " << DtoH(input) << " h" << endl;
        }
    }
    double StoH(double input)
    {
        return input / 3600;
    }
    double StoD(double input)
    {
        return input / 86400;
    }
    double HtoS(double input)
    {
        return input * 3600;
    }
    double HtoD(double input)
    {
        return input / 24 ;
    }
    double DtoS(double input)
    {
        return input * 86400;
    }
    double DtoH(double input)
    {
        return input * 24 ;
    }
    string unit()
    {
        return "Mass";
    }
private:
    string choice;
};
class Temperature : public Calculate
{
    public:
  Temperature(string choice) : choice(choice) {}
    void recalculate(double input) {
        if (choice == "c" || choice == "C")
        {
            cout << input << " C = " << CtoF(input) << " F" << endl;
            cout << input << " C = " << CtoK(input) << " K" << endl;
        }
        else if (choice == "f" || choice == "F")
        {
            cout << input << " F = " << FtoC(input) << " C" << endl;
            cout << input << " F = " << FtoK(input) << " K" << endl;
        }
        else if (choice == "k" || choice == "K")
        {
            cout << input << " K = " << KtoC(input) << " C" << endl;
            cout << input << " K = " << KtoF(input) << " F" << endl;
        }
    }
    double CtoF(double input)
    {
        return input * 9.0/5.0 + 32.0;
    }
    double CtoK(double input)
    {
        return input + 273.15;
    }
    double FtoC(double input)
    {
        return (input - 32.0) * 5.0/9.0;
    }
    double FtoK(double input)
    {
        return (input + 459.67) * 5.0/9.0 ;
    }
    double KtoC(double input)
    {
        return input - 273.15;
    }
    double KtoF(double input)
    {
        return input * 9.0/5.0 - 459.67 ;
    }
    string unit()
    {
        return "Mass";
    }
private:
    string choice;
};
class Converter {
public:
    void convert()
    {
        Calculate* converter = nullptr;
        while (1)
        {
            cout << "Choose what you want to convert\n1-Currency\n2-Length\n3-Mass\n4-Time\n5-Temperature\n6-End program" << endl;
            select = choose();
            switch (select)
            {
            case 1:
                {
                cout << "Enter 'PLN' to convert from polish, 'USD' to convert from US dollar or 'EUR' to convert from euros: ";
                cin >> choice;
                converter = new Currency(choice);

                if (choice == "pln" || choice == "PLN")
                {
                    cout << "Enter value in PLN: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "usd" || choice == "USD")
                {
                    cout << "Enter value in USD: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "eur" || choice == "EUR")
                {
                    cout << "Enter value in EUR: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 2:
                  {
                cout << "Enter 'm' to convert from meters, 'ft' to convert from foot or 'yd' to convert from yards: ";
                cin >> choice;
                converter = new Lenght(choice);

                if (choice == "m" || choice == "M")
                {
                    cout << "Enter value in meters: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "ft" || choice == "FT")
                {
                    cout << "Enter value in foot: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "yd" || choice == "YD")
                {
                    cout << "Enter value in yards: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 3:
            {
                cout << "Enter 'kg' to convert from kilograms, 'lb' to convert from pounds or 'st' to convert from stones: ";
                cin >> choice;
                converter = new Mass(choice);

                if (choice == "kg" || choice == "KG")
                {
                    cout << "Enter value in kilograms: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "lb" || choice == "LB")
                {
                    cout << "Enter value in pounds: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "st" || choice == "ST")
                {
                    cout << "Enter value in stones: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 4:
                  {
                cout << "Enter 's' to convert from seconds, 'h' to convert from hours or 'd' to convert from days: ";
                cin >> choice;
                converter = new Time(choice);

                if (choice == "s" || choice == "S")
                {
                    cout << "Enter value in seconds: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "h" || choice == "H")
                {
                    cout << "Enter value in hours: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "d" || choice == "D")
                {
                    cout << "Enter value in days: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 5:
                  {
                cout << "Enter 'C' to convert from celcius, 'F' to convert from fahrenheit or 'K' to convert from kelvins: ";
                cin >> choice;
                converter = new Temperature(choice);

                if (choice == "c" || choice == "C")
                {
                    cout << "Enter value in celcius: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "f" || choice == "F")
                {
                    cout << "Enter value in fahrenheit: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else if (choice == "k" || choice == "K")
                {
                    cout << "Enter value in kelvins: ";
                    cin >> value;
                    converter->recalculate(value);
                }
                else
                {
                    cout << "Invalid choice" << endl;
                }
                break;
            }
            case 6:
                return;
            }
        }
    }
private:
    int select = 0;
    string choice;
    double value;
    int choose() {
        int number;
        fflush(stdin);
        while (scanf("%d", &number) != 1 || number < 1 || number > 6)
        {
            cout << "You entered wrong character" << endl;
            fflush(stdin);
        }
        return (number);
    }
};
int main()
{
    Converter converter;
    converter.convert();
    return 0;
}
