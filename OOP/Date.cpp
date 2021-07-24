#include<iostream>
#include <string> 

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDate(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void setDay(int day) {this->day = day;}
    void setMonth(int month) {this->month = month;}
    void setYear(int year) {this->year = year;}
    int getDay() {return day;}
    int getMonth() {return month;}
    int getYear() {return year;}
    void display() {
        string d = day < 10 ? "0"+to_string(day) : to_string(day);
        string m = month < 10 ? "0"+to_string(month) : to_string(month);
        cout << d << "/" << m << "/" << year << endl;
    }
};