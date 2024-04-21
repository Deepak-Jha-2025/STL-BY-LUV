#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    vector<int> ::iterator it;
    for (it=v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    // Range based loops
    // In containers, we can directly iterate over its elements
    // Here, directly the value of elements will be stored in the variable 'value'
    for(int &value : v) {
        value++;
        // cout << value << " ";
    }
    for(int value : v) {
        cout << value << " ";
    }
    cout << endl;

    // Here a thing to note is that a copy of the elements is stored in the variable being used in 
    // range based loops ('value' here) and the actual reference is not passed. So value++ won't affect v[i]
    // but if we take the values by reference by making the 'value' variable of reference type, then the 
    // actual ref to the vector elements will be passed and so value++ would change the elements.


    // Similarly for vector of pairs
    vector<pair<int, int>> v_p = {{1,2}, {2,3}, {3,4}};
    for(pair<int, int> &value : v_p) {
        cout << value.first << " " << value.second << endl;
    }


    // **************************    Auto keyword    ******************************

    // It automatically assumes the datatype of the variable
    // auto a = 1;

    // For iterators, it will automatically know that the variable is an iteraotr of respective container of some datatype
    // vector<int> ::iterator it; // Now no need to specify, compiler will know automatically that it is an iterator
    for (auto it=v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    // for (auto it : v) // here auto it --> copies of int elements of vector v will be passed so type of it is int and not iterator
    for (auto &it : v)   // here auto &it --> actual references of int elements of vector v will be passed so type of it is int& and not iterator
    {
        // cout << (*it) << " ";
        cout << it << " "; 
    }
    cout << endl;

    // Same can be done even for pairs also
    for(auto &value : v_p) {
        cout << value.first << " " << value.second << endl;
    }

    // Start combining auto keyword with range based loops for clean and readable code.

    return 0;
}