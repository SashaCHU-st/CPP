#include <iostream>
using namespace std;

class Animal {
private:
    int age;

public:
    Animal(int a) : age(a) {}  // Инициализация private переменной через список инициализации

    void showAge() const {
        cout << "Age: " << age << endl;
    }
};

class Cat : public Animal {
public:
    Cat(int a) : Animal(a) {}  // Передаем параметр конструктору базового класса

    // Дополнительные методы и члены класса Cat могут быть здесь
};

int main() {
    Cat cat(7);  // Создаем объект Cat, передавая возраст
    cat.showAge();  // Выводит: Age: 7
    return 0;
}
