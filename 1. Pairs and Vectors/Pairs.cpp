#include <iostream>
using namespace std;

int main()
{
    // Pairs and Vectors

    // Pairs
    // A class in c++ stl that stores 2 values

    // Syntax: pair<1,2> where 1,2: the datatypes/containers
    pair<int, string> p;

    // To initialize / insert values in a pair, 2 ways

    // 1. Using internal function make_pair()
    // p = make_pair(2, "abc");

    // 2. p = {value1, value2}
    p = {2, "abc"};

    // To print a pair's values
    cout << p.first << " " << p.second << endl;

    // Pass by value and pass by reference works the same way here as for normal variables
    // pair<int, string> p1 = p;
    pair<int, string> &p1 = p;
    p1.first = 3;
    cout << p.first << endl; // Similarly i/p can be taken for both 1st and 2nd

    // Pairs are used to maintain relation b/w 2 things
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    // Suppose these arrays are related by some rule, and we need to store them collectively
    // Eg: we need to swap first and last index of a and so need to do the same for b also
    // better pair them and swap them at once
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};
    swap(p_array[0], p_array[2]);

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl; // similar for cin also
    }
    


    return 0;
}