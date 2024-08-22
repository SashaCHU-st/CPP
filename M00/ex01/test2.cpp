#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Transport
{
protected:
	float speed;
};

class Auto : public Transport
{
private:
	int wheels;
public:
	Auto (float speed, int wheels)
	{
		this->speed = speed;
		this->wheels = wheels;
		cout << "Speed is: " << speed << ", model is - " << wheels << endl;
	}
};

int main(int argc, char *argv[])
{
	unsigned speed = atoi(argv[1]);
	unsigned wheels = atoi(argv[2]);
	Auto bmw(speed, wheels);
	Auto mercedes(speed, wheels);
 
	return 0;
}