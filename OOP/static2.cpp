#include <iostream> 
#include "Math.cpp"

using namespace std;

int main() {
	cout << Math::abs(-3) << endl;
	cout << Math::add(2, 3) << endl;
	cout << Math::subtract(2, 3) << endl;
	cout << Math::min(2, 3) << endl;
	cout << Math::max(2, 3) << endl;
	cout << Math::pow(2, 3) << endl;
    cout << Math::abs(-2.9) << endl;
    cout << Math::abs(-1920321312) << endl;
    cout << Math::abs(-19203213122321323) << endl;
	return 0;
}