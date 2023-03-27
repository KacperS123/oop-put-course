// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
using namespace std;
class Numbers{
private:
	double name;
public:
	double Value() {
		return this->name;
	};
	Numbers() { this->name = 321.0; };
	Numbers(double mny) { this->name = mny; };
	Numbers(float mny) : Numbers(static_cast<double>(mny)) {};
	Numbers(int mny) : Numbers(static_cast<double>(mny)) {};
};
int main()
{
	Numbers defaultValue;
	Numbers doubleValue(123);
	Numbers floatValue(456);
	Numbers intValue(789);
	cout << defaultValue.Value() << endl;
	cout << doubleValue.Value() << endl;
	cout << floatValue.Value() << endl;
	cout << intValue.Value() << endl;

}
