// Inheritance and polymorphism in c
#include<iostream>

using namespace std;

class Animal {
  public:
    // Pure virtual method - must be implemented in non-abstract child class
    virtual void speak() = 0;

    // Virtual method - can be overridden by the child class.  The type of
    //   object being pointed to determines the method that gets called.
    virtual void move() {
      cout << "I am moving" << endl;
    }

    // Non-virtual method - can be overridden by the child class.  The type 
    //   of the pointer determines the method that gets called.
    void name() {
      cout << "Animal" << endl;
    }
};

class Dog : public Animal {
  public:
    void speak() {
      cout << "Woof!" << endl;
    }

    void move() {
      cout << "Run around." << endl;
    }

    void name() {
      cout << "Max" << endl;
    }

    void fetch() {
      cout << "Fetching! " << endl;
    }
};

class Cat : public Animal {
  public:
    void speak() {
      cout << "Meow." << endl;
    }
    void name() {
      cout << "Felix" << endl;
    }
};

int main() {
  Animal * a1;
  Dog d1, *d2;
  Cat c1, *c2;

  /* // Not allowed since Animal is an abstract class
  cout << "Animal pointer pointing to an animal object:" << endl;
  a1 = new Animal();
  a1->speak();
  a1->move();
  a1->name();
  */

  cout << endl << "Dog object: " << endl;
  d1.speak();
  d1.move();
  d1.name();

  cout << endl << "Dog pointer pointing to an Dog object:" << endl;
  d2 = &d1;
  d2->speak();
  d2->move();
  d2->name();

  cout << endl << "Animal pointer pointing to an Dog object:" << endl;
  a1 = &d1;
  a1->speak();
  a1->move();
  a1->name();

  cout << endl << "Cat object: " << endl;
  c1.speak();
  c1.move();
  c1.name();

  cout << endl << "Cat pointer pointing to an Cat object:" << endl;
  c2 = &c1;
  c2->speak();
  c2->move();
  c2->name();

  cout << endl << "Animal pointer pointing to an Cat object:" << endl;
  a1 = &c1;
  a1->speak();
  a1->move();
  a1->name();

  cout << endl << "Dogs can fetch" << endl;
  d1.fetch();
  d2->fetch();
  a1 = &d1;
  /* // Animals have no fetch method, so the pointer doesn't know what
     //   to point to.
  a1->fetch();   
  */
  ( (Dog *) a1)->fetch();  // Cast the Animal pointer to a Dog pointer

  return 0;
}
