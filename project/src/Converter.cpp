 #include <iostream>
#include "Converter.h"
    void Converter::convert()
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
    int select = 0;
    int Converter::choose() {
        int number;
        fflush(stdin);
        while (scanf("%d", &number) != 1 || number < 1 || number > 6)
        {
            cout << "You entered wrong character" << endl;
            fflush(stdin);
        }
        return (number);
    }
