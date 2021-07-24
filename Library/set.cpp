#include<iostream>
#include<vector>
#include<set>

using namespace std;

int differentNumbers(vector<int> inputVector )
{
	set<int> s;
	vector<int>::iterator it;
	for (it = inputVector.begin(); it != inputVector.end() ; it++){
		s.insert(*it);
	}
	return s.size();
} 

void task1() {
    /*Cho một vector chứa các số nguyên.

    Hãy đưa ra số lượng phần tử khác nhau trong vector đó.*/ 
    vector<int> v1 = {1, 3, 3, 2}, v2 = {3,4,4,4,5,6};
    cout << differentNumbers(v1) << endl;
    cout << differentNumbers(v2) << endl;
}

void task2(){
    int myints[] = {75,23,65,42,13};
    set<int> s;

    for (int i = 0; i < sizeof(myints)/sizeof(int); i++)
    {
        s.insert(myints[i]);
        /* code */
    }

    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    task1();

    vector<int> v = {1,2,3,4,5,5,5,4,3,2};
    set<int> s = set<int>(v.begin(), v.end());
    
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    cout << endl;

    task2();
}
