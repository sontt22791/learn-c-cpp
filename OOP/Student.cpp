#include<iostream>

using namespace std;

class Student {
private:
    string name;
    char gender;
public:
    Student() { this->name = "Unknown"; this->gender = 'u';}
    Student(string name) { this->name = name;this->gender = 'u';}
    Student(char gender) { this->name = "Unknown"; this->gender = gender;}
    Student(string name, char gender) { this->name = name; this->gender = gender;}
    void display() {
        string g;
        switch (gender) {
            case 'm':
                g = "Male";
                break;
            case 'f':
                g = "Female";
                break;
            case 'u':
                g = "Unknown";
                break;
        }
        cout << "Name: " << name << endl;
        cout << "Gender: " << g<< endl;
    }
};