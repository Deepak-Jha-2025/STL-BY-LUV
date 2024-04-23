/*
    Given N strings, print unique strings in lexographical order,
    N <= 10^5
    |S| <= 100000

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
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        s.insert(str);
    }

    // Now, the set s has only all the unique strings in lexographical order
    // just print it

    for(auto value : s) {
        cout << value << endl;
    }
    

    return 0;
}