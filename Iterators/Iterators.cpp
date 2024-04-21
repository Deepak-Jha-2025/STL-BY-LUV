#include <bits/stdc++.h>
using namespace std;

int main()
{
    // We know we can use indexing to access vector just like arrays
    // But in containers like maps and sets, indexing can't be done, so there iterators are used


    // Iterators are like pointers
    // Just like pointers point to some address in memory, and to access the value at that address, we use * operator

    // Similary, iterators point to the elements of the STL containers.

    vector<int> v =  {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    // https://excalidraw.com/#json=mq49o8k30RnLFRD1H5vqk,pKHvtfnyFiKxt5jysHRuRw --> For reference(.begin() and .end())

    // Syntax: <container> ::iterator it;
    vector<int> ::iterator it = v.begin();
    // cout << (*(it + 1)) << endl;

    // We can iterate through any container uding iterators
    for ( it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    

    return 0;
}