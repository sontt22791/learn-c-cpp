#include<iostream>
#include<list>

using namespace std;

void print(list<int> l) {
    list<int>::iterator it;

    for ( it = l.begin(); it != l.end() ; it++)
    {
        cout << *it << " ";
        /* code */
    }
    
}

int main(int argc, char const *argv[])
{
    list<int> lst;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        lst.push_back(i+1);
        /* code */
    }

    print(lst);

    cout << "\n";
    lst = {1,2,3,4,5};
    print(lst);

    // length
    cout << lst.size() <<endl;

    cout << lst.front() << endl;
    cout << lst.back() << endl;
    
    lst = {5,1,2,6,2,3,9,2};
    list<int>::const_iterator it = lst.begin();
    for (it = lst.begin(); it != lst.end(); it++)
    {
        if (*it >= 5)
        {
            lst.erase(it);
            /* code */
        }
        
        /* code */
    }
    print(lst);
    
}



