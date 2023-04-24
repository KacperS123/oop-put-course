// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <sstream>
#include <memory>
using namespace std;
class Sequence
{
public:
	virtual int lenght() = 0;
	class Fake;
};
class Sequence::Fake : public Sequence {
	int lenght() { return 100; };
};
class Gene
{
private:
	string name_;
	shared_ptr<Sequence> sequence_;
public:
	Gene() {
		Gene(string name, shared_ptr<Sequence> sequence)
			:name_(name), sequence_(sequence) {};
		string JSON() {
			stringstream ss
				ss << "{";
			ss << " \"name\"; \"" << name_ << "\",";
			ss << " \"lenght\"; " << sequence_ ->Lenght();
			return ss.str();
		}
	}
};
int main()
{
	shared_ptr<Sequence> fakeSequence = make_shared<Sequence::Fake>();
	Gene gene(name: "BALFS", sequence: fakeSequence);
	return 0;
}
