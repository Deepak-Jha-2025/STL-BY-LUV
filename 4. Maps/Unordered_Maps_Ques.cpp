/*
    Given N strings and Q queries. In each query, you are given a 
    string, print frequency of that string. 

    N <= 10^6
    |S| <= 100
    Q <= 10^6

    Given i/p:
    8
    abc
    def
    abc
    ghj
    jkl
    ghj
    ghj
    abc
    2
    abc
    ghj
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Here, order does not matter, so better to use unordered_map
    unordered_map<string, int> m;

    // // Multimaps declaration (implemented using red black trees only)
    // multimap<pair<int, int>, string> m; // In maps, keys are unique, means if 6 is inserted twice
    //                                     // it will be inserted only once, and 2nd time it's value
    //                                     // will be updated. 

    //                                     // In multimaps however, it will be inserted twice i.e. duplicates can be inserted


    // An alternative to multimaps (example)

    // Eg: we need to store multiple strings corresponding to a single integer
    // map<int, vector<string>> m; // to store those multiple values corresponding 
                                   // to a single key, instead of multimap, use a vector of values



    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        string s;
        cin >> s;

        m[s]++;
    }

    int q;
    cin >> q;

    while(q--) { // q queries ==> Total TC: O(q) * O(1) = O(q)
        string s;
        cin >> s;

        cout << m[s] << endl; // Accessing TC for unordered_map -> O(1)
    }

    for(auto &pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }


    return 0;
}