#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{

    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        // Same 0 based as array

        // v.size() --> O(1)

        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main()
{
    // Vectors: similar to arrays (continuous memory blocks)
    // Arrays with dynamic size

    // Synatax : vector<datatype/container> name;

    // int a[10]; --> int type array of size 10, this has already reserved 10 blocks in the memory
    // vector<int> v(5);     // of some given size by default initialized with 0
    // vector<int> v(10, 3); // of given size with all elements 3
    vector<int> v;           // int type vector of size 0 currently (no elements)

    // int n;
    // cin >> n;

    // To take input

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     printVec(v);
    //     v.push_back(x); // inserts/adds value at the end of the vector; T.C: O(1); now size = 1
    // }

    v.push_back(7);
    v.push_back(6);
    printVec(v);

    // v.pop_back(); // Removes the last element of the vector, T.C: O(1)


    // Entire vector elements can be directly copied (this is passed by value, any changes in v2 won't affect v)
    // Arrays can never be copied like this, the pointers may be copied, but that is basically giving reference not value

    vector<int> v2 = v; // O(n) --> internally copying elements one by one
    v2.push_back(5);
    printVec(v);
    printVec(v);

    // Now, as copying takes O(n) time, so it's an expensive operation, so better pass by reference in functions. This will
    // save us that extra O(n) time.


    return 0;
}