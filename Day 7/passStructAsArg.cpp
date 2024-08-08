#include <iostream>

// PASSING A STRUCT TO A FUNCTION

struct car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(car &car);
void paintCar(car &car, std::string colour);

int main()
{

    car car1;
    car car2;

    car1.model = "VW Golf";
    car1.year = 2014;
    car1.color = "White";

    car2.model = "Ford Focus ST";
    car2.year = 2020;
    car2.color = "White";

    printCar(car1);
    printCar(car2);

    // chaging VW GOLF to balck;
    paintCar(car1, "Blue");
    std::cout << "Car1 colour is now: " << car1.color << '\n';

    return 0;
}

void printCar(car &car)
{
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}

void paintCar(car &car, std::string colour)
{
    car.color = colour;
}