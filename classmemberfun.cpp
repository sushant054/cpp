#include <iostream>

// Define a class called Person
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Member function to display information about the person
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create an instance of the Person class
    Person person1("Alice", 30);

    // Call the displayInfo() member function
    person1.displayInfo();

    return 0;
}
