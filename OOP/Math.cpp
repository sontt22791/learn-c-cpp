#include<iostream>

using namespace std;

class Math {
public:
    static int abs(int a) {return (a < 0 ? -a : a);}
    static int add(int a, int b) {return a + b;}
    static int subtract(int a, int b) {return a - b;}
    static int min(int a, int b) {return (a < b ? a: b);}
    static int max(int a, int b) {return ( a < b ? b :a);}
    static int pow(int x, int y) {
        int r = 1;
        for (int i = 0; i < y; i++) {
            r *= x;
        }
        return r;
    }

    static double abs(double x) { return x > 0 ? x : -x;}
    static long abs(long x) { return x > 0 ? x : -x;}    
    static long long abs(long long x) { return x > 0 ? x : -x;}    
};