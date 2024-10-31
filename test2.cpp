#include <iostream>

// Базовый класс Animal с виртуальной функцией makeSound и виртуальным деструктором
class Animal {
public:
    Animal() { std::cout << "Animal создан\n"; }
    virtual ~Animal() { std::cout << "Animal уничтожен\n"; }

    virtual void makeSound() const {  // Виртуальная функция
        std::cout << "Animal издает звук\n";
    }
};

// Производный класс Dog
class Dog : public Animal {
public:
    Dog() { std::cout << "Dog создан\n"; }
    ~Dog() { std::cout << "Dog уничтожен\n"; }

    void makeSound() const override {  // Переопределение виртуальной функции
        std::cout << "Woof!\n";
    }
};

// Производный класс Cat
class Cat : public Animal {
public:
    Cat() { std::cout << "Cat создан\n"; }
    ~Cat() { std::cout << "Cat уничтожен\n"; }

    void makeSound() const override {  // Переопределение виртуальной функции
        std::cout << "Meow!\n";
    }
};

int main() {
	// Animal* animal0 = new Animal();
    Animal* animal1 = new Dog();  // Указатель на базовый класс, но объект производного класса
    Animal* animal2 = new Cat();  // Указатель на базовый класс, но объект производного класса

	//animal0->makeSound();
    animal1->makeSound();  // Вызовется метод makeSound() из класса Dog
    animal2->makeSound();  // Вызовется метод makeSound() из класса Cat

    delete animal1;  // Правильно вызовется деструктор Dog и затем Animal
    delete animal2;  // Правильно вызовется деструктор Cat и затем Animal

    return 0;
}
