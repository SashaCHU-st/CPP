#include <iostream>

// Базовый класс Animal без виртуальной функции makeSound и без виртуального деструктора
class Animal {
public:
    Animal() { std::cout << "Animal создан\n"; }
    ~Animal() { std::cout << "Animal уничтожен\n"; }

    void makeSound() const {  // Не виртуальная функция
        std::cout << "Animal издает звук\n";
    }
};

// Производный класс Dog
class Dog : public Animal {
public:
    Dog() { std::cout << "Dog создан\n"; }
    ~Dog() { std::cout << "Dog уничтожен\n"; }

    void makeSound() const {  // Не переопределяем, а скрываем метод базового класса
        std::cout << "Woof!\n";
    }
};

// Производный класс Cat
class Cat : public Animal {
public:
    Cat() { std::cout << "Cat создан\n"; }
    ~Cat() { std::cout << "Cat уничтожен\n"; }

    void makeSound() const {  // Не переопределяем, а скрываем метод базового класса
        std::cout << "Meow!\n";
    }
};

int main() {
	Animal* animal0 = new Animal();  // Указатель на базовый класс, но объект производного класса
    Animal* animal1 = new Dog();  // Указатель на базовый класс, но объект производного класса
    Animal* animal2 = new Cat();  // Указатель на базовый класс, но объект производного класса

	animal0->makeSound();
    animal1->makeSound();  // Вызовется метод makeSound() из класса Animal, а не Dog
    animal2->makeSound();  // Вызовется метод makeSound() из класса Animal, а не Cat

    delete animal1;  // Вызовется только деструктор Animal
    delete animal2;  // Вызовется только деструктор Animal

    return 0;
}
