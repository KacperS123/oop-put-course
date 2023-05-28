#include <iostream>
#include "Calculate.h"
#include "Currency.h"
#include "Lenght.h"
#include "Mass.h"
#include "Time.h"
#include "Temperature.h"
#include "Converter.h"
using namespace std;
int main()
{
    Converter converter;
    converter.convert();
    return 0;
}
