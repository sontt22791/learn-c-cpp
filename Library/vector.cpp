#include<vector>
#include<iostream>

std::vector<int> sortVector(std::vector<int> v)
{
    for (int i =0; i < v.size(); i++){
        for (int j = i+1; j < v.size(); j ++ ){
            if (v[i] > v[j]) {
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
    return v;
}

int maxProductOfAdjacentElements(std::vector<int> v)
{
    
    for (int i = 0; i < v.size()-1; i++)
    {
        v[i] = v[i] * v[i+1];
        /* code */
    }

    int max = v[0];
    for (int i = 0; i < v.size()-1; i++)
    {
        max = max > v[i] ? max : v[i];
        /* code */
    }
    return max;
    
}

std::vector<std::string> findLongestStrings(std::vector<std::string> arr)
{
    int max = 0;
    for (int i = 0; i < arr.size(); i++) {
        max = max > arr[i].size() ? max : arr[i].size();
    }

    std::vector<std::string> tmp;
    for (int i = 0; i < arr.size(); i++) {
        if (max  == arr[i].size()) {
            tmp.push_back(arr[i]);
        }
    }
    return tmp;
    
}

int main(int argc, char const *argv[])
{
    std::vector<int> v;
    v = {4,3,2,1};
    v = sortVector(v);

    for (int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
        /* code */
    }
    
    v = {3, 5, 2, 9, 1};
    std::cout << '\n' << maxProductOfAdjacentElements(v) << std::endl;
    // return 0;
    v = {1, 2, 3, 1};
    std::cout << maxProductOfAdjacentElements(v) << std::endl;
}
