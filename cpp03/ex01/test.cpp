#include <iostream>

class Base {
public:
    Base(int baseValue) : baseValue(baseValue) {
        std::cout << "Base constructor" << std::endl;
    }

    // Copy constructor for Base
    Base(const Base& other) {
        baseValue=other.baseValue;
        std::cout << "Base copy constructor" << std::endl;
    }

    virtual ~Base() {
        std::cout << "Base destructor" << std::endl;
    }

    void print() const {
        std::cout << "Base value: " << baseValue << std::endl;
    }

private:
    int baseValue;
};

class Derived : public Base {
public:
    Derived(int baseValue, int derivedValue) : Base(baseValue)  {
        derivedValue=derivedValue;
        std::cout << "Derived constructor" << std::endl;
    }

    // Copy constructor for Derived
    Derived(const Derived& other) : Base(other) {
         derivedValue=other.derivedValue;
        std::cout << "Derived copy constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }

    void print() const {
        Base::print(); // Call the print function of the Base class
        std::cout << "Derived value: " << derivedValue << std::endl;
    }

private:
    int derivedValue;
};

int main() {
    std::cout << "Creating a Base object:" << std::endl;
    Base b1(10);
    Base b2 = b1; // Calls the Base copy constructor

    std::cout << "\nCreating a Derived object:" << std::endl;
    Derived d1(20, 30);
    Derived d2 = d1; // Calls the Derived copy constructor, which in turn calls the Base copy constructor

    std::cout << "\nCalling print() on Base objects:" << std::endl;
    b1.print();
    b2.print();

    std::cout << "\nCalling print() on Derived objects:" << std::endl;
    d1.print();
    d2.print();

    return 0;
}
