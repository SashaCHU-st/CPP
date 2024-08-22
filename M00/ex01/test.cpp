#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Person 
{
private:
	int index = 1;
	string firtsName;
	string lastName;
	string nickname;
	unsigned number;
public:
//constructor
	Person(string first, string last,string nick,  unsigned n)
	{
		set_data(first,last,nick,n );
	}
//method
	void get_info() 
	{
		std::cout << "index: " << index << " first name: " << firtsName << " last : " << lastName << " nickname: " << nickname << " number: " << number << std::endl;
	}
//method
	void set_data(string first, string last,string nick,  unsigned n)
	{
		this->firtsName = first;
		this->lastName = last;
		this->nickname = nick;
		this->number = n;
	}
//disctructor
	~Person(){}
};

int main(int argc, char *argv[])
{
	string firtsName = argv[1];
	string lastName = argv[2];
	string nickname = argv[3];
	unsigned number = atoi(argv[4]);
	Person first(firtsName, lastName, nickname, number); // first is object
	Person second(firtsName, lastName, nickname, number); //  second is object
	// first.set_data(firtsName, lastName, nickname, number);
	// second.set_data(firtsName, lastName, nickname, number);

	first.get_info();
	second.get_info();
	return 0;
}


// #include <iostream>
// #include <string>
// #include <cstdlib>
// using namespace std;

// class Person 
// {
// private:
// 	int index = 1;
// 	string firtsName;
// 	string lastName;
// 	string nickname;
// 	unsigned number;
// public:
// //method
// 	void print() 
// 	{
// 		std::cout << "index: " << index << " first name: " << firtsName << " last : " << lastName << " nickname: " << nickname << " number: " << number << std::endl;
// 	}
// 	// Person(std::string p_name, std::string p_age, std::string p_nickname, unsigned p_number)
// 	// { 
// 	// 	firtsName = p_name; 
// 	// 	lastName = p_age;
// 	// 	nickname = p_nickname;
// 	// 	number = p_number;
// 	// }
// };

// int main(int argc, char *argv[])
// {
// 	// std::string firtsName = argv[1];
// 	// std::string lastName = argv[2];
// 	// std::string nickname = argv[3];
// 	// unsigned number = atoi(argv[4]);
// 	// Person first{firtsName, lastName, nickname, number};
// 	// Person second{firtsName, lastName, nickname, number};
// 	// first.print();
// 	// second.print();
// 	// return 0;
// 	Person first;
// 	Person second;
// 	first.firtsName = argv[1];
// 	first.lastName = argv[2];
// 	first.nickname = argv[3];
// 	first.number = atoi(argv[4]);
// 	first.print();
// 	second.print();
// 	return 0;
// }