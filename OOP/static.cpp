#include<iostream>

using namespace std;

class Math
{
private:
public:
    Math(/* args */) {}
    ~Math() {}
    double PI = 3.14;
    static int P;
    static double getPI() {
        return P;
    }
};

int Math::P = 10.9;

int main(int argc, char const *argv[])
{
    Math m1;
    cout << m1.getPI() << endl;
    cout << Math::getPI() << endl;
}

