#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize name and age
    Person(std::string personName, int personAge)
        : name(std::move(personName)), age(personAge) {}

    // Getter method for name
    std::string getName() const {
        return name;
    }

    // Getter method for age
    int getAge() const {
        return age;
    }

    // Setter method for name
    void setName(std::string newName) {
        name = std::move(newName);
    }

    // Setter method for age
    void setAge(int newAge) {
        age = newAge;
    }
};

int main() {
    // Creating a Person object with name "Alice" and age 30
    Person alice("Alice", 30);

    // Displaying initial name and age
    std::cout << "Initial Name: " << alice.getName() << std::endl;
    std::cout << "Initial Age: " << alice.getAge() << std::endl;

    // Updating name to "Bob" and age to 35
    alice.setName("Bob");
    alice.setAge(35);

    // Displaying updated name and age
    std::cout << "\nUpdated Name: " << alice.getName() << std::endl;
    std::cout << "Updated Age: " << alice.getAge() << std::endl;

    return 0;
}
