#include <iostream>

namespace first
{
    int x = 1;
    int y = 1;
}

namespace second
{
    int x = 2;
}

int main()
{
    using namespace first;

    int x = 0;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << y << std::endl;
    std::cout << second::x << std::endl;

    return 0;
}

void const_variables()
{
    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
}

void variables()
{
    int age = 100;
    int year = 2024;
    int days = 7.5;

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    bool student = false;
    bool power = true;
    bool forSale = true;

    std::string name = "John";
    std::string day = "Friday";
    std::string food = "Pizza";
    std::string address = "Test Address";

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';
}