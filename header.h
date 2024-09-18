using namespace std;
#ifndef SUMMERPROJ_HEADER_H
#define SUMMERPROJ_HEADER_H
#pragma once
#endif //SUMMERPROJ_HEADER_H
class Car{
public:
    string brand;
    int year;
    int miles;
    Car(string brand, int year, int miles);
    int getmiles(){
        return miles;
    };
    int getyear(){
        return year;
    };
    string getbrand(){
        return brand;
    };
    void print_information(){
        cout << "   " << brand << endl;
    }
    void rest_of_info(){
        cout << brand << " " << year << miles << endl;
    }
};

