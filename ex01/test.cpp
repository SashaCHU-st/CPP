#include <iostream>
#include <string> // Include this to use std::string
#include <cstdlib> // Include this for std::atoi

class Person 
{
private:
	int index;
	std::string firtsName;
	std::string lastName;
	std::string nickname;
public:
	void print() 
	{
		std::cout << "first name: " << firtsName << "last : " << lastName << "nickname: " << nickname << std::endl;
	}
	
	Person(std::string p_name, std::string p_age, std::string p_nickname)
	{ 
		firtsName = p_name; 
		lastName = p_age;
		nickname = p_nickname;
	}
};

int main(int argc, char *argv[])
{
	std::string firtsName = argv[1];
	std::string lastName = argv[2];
	std::string nickname = argv[3];
	Person person{firtsName, lastName, nickname};
	person.print();
	return 0;
}

// #include <iostream>
 
// class Person 
// {
// private:
//     std::string name;
//    unsigned age;
// public:
//     void print() 
//     {
//         std::cout << "Name: " << name << "\tAge: " << age << std::endl;
//     }
//     Person(std::string p_name, unsigned p_age)
//     { 
//         name = p_name; 
//         age = p_age;
//     }
// };
// int main(int argc, char *argv[])
// {
//     Person person{argv[1], argv[2]};
//     // функция print общедоступная
//     person.print();    // Name: Tom   Age: 22
 
//     // поля name и age вне класса недоступны
//     // tom.name = "";  
//     // tom.age = 1001;
// }