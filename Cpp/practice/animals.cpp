#include <iostream>

class Animal {
public:
  virtual void speak() { std::cout << "Animal sound\n"; }
};

class Dog : public Animal {
public:
  void speak() override { std::cout << "Woof\n"; }
};

class Cat : public Animal {
public:
  void speak() override { std::cout << "Meow\n"; }
};

int main(void) {
  Dog dog;
  Cat cat;

  Animal *animal1 = &dog;
  Animal *animal2 = &cat;

  animal1->speak();
  animal2->speak();

  return 0;
}
