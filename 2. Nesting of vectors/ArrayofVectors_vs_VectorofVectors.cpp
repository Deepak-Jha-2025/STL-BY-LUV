#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int N;
    // cin >> N;

    // // N vectors v[0], v[1], .... v[N-1] are declared
    // vector<int> v[N];

    // // Taking i/p for each vector separately
    // for (int i = 0; i < N; i++)
    // {
    //     // Size for each vector
    //     int n;
    //     cin >> n;

    //     for (int j = 0; j < n; j++)
    //     {
    //         // Inserting the jth value in the ith vector v[i]
    //         int x;
    //         cin >> x;
    //         v[i].push_back(x);
    //     }
    // }
    // // To print
    // for (int i = 0; i < N; i++)
    // {
    //     printVec(v[i]);
    // }


    // But arrays are fixed in size, so in array of vectors, no. of rows/vectors is fixed
    // but no. of columns(size of each vector) is dynamic

    // So to make the no. of rows dynamic as well, just declare "Vector of vectors" instead.



    // ********************************* Vector of Vectors ******************************************

    int N;
    cin >> N;
    vector<vector<int>> v;

    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;

        // vector<int> temp; // To tackle the problem that v[i] doesn't exist yet
        v.push_back(vector<int> ()); // Now v[i].push_back() will be valid everytime since there's an empty ith vector v[i] actually present now

        // This loop takes a row/vector as i/p
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x); // wrong since v[i] doesn't exist yet as nothing is there in v so far, only valid if an empty vector is inserted everytime beforehand this loop. 
            // temp.push_back(x);
        }

        // Now insert that vector into v (which is a vector of vectors).
        // v.push_back(temp);
        
    }

    v[0].push_back(10);
    // v.push_back(vector<int> ()); // inserts an empty vector

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    
    cout << v[0][1] << endl;

    return 0;
}