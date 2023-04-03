// ConsoleApplication2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
class interface
{
public:
	virtual int math() = 0;
	virtual string text() = 0;
};
class addition : public interface
{
public:
	int a;
	int b;
	void Numbers() {
		this->a = 3;
		this->b = 2;
	};
	int  math()
	{
		return a + b;
	}
	string text() {
		return "wynik";
	}
};
class substraction : public interface
{
public:
	int a;
	int b;
	void Numbers() {
		this->a = 5;
		this->b = 4;
	};
	int  math()
	{
		return a - b;
	}
	string text() {
		return "wynik";
	}
};
int main()
{
	addition test;
	test.Numbers();
	cout << test.text() << endl;
	cout << test.math()<<endl;
	substraction test2;
	test2.Numbers();
	cout << test2.text() << endl;
	cout << test2.math()<<endl;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
