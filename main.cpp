#include <iostream>
#include "header.h"
class Car;
Car::Car(string brand, int year, int miles){
    this->brand = brand;
    this->year = year;
    this->miles = miles;

}


int main(){
    Car car1("por", 4,2 );
    car1.rest_of_info();
    return 0;
}
