#include "Date.cpp"

using namespace std;

int main() {
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();	
	return 0;
}