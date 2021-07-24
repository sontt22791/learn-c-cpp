#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {2,3,4,5,6};
    vector<int> v = vector<int>(arr, arr+6);
    cout << "vector ";
    vector<int>::iterator it2;
    it2 = v.begin();
    advance(it2,2);

    v.erase(it2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        /* code */
    }
    cout << endl;

    list<int> l(arr, arr + 10);
    list<int>::iterator it;

    cout << "list l1: ";
    for (it = l.begin() ; it != l.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    cout << endl;
    
    list<int> l2 = l;
    cout << "list l2: ";
    
    it = l2.begin();
    advance(it,3);
    l2.erase(it);
    l2.remove(3);
    for (it = l2.begin() ; it != l2.end(); it++)
    {
        cout << *it << " ";
        /* code */
    }
    cout << endl;
    
    cout << "for-each list: ";
    for (auto x:l2){
        cout << x << " ";
    }

    cout << endl;

    set<int> s = {2,3,6,1,2,3};
    cout << "for-each set: ";
    for (auto x:s){
        cout << x << " ";
    }
}
