/*
    Given N strings, print unique strings in lexographical order
    with their frequencies.

    N <= 10^5
    |S| <= 100

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
    // Without maps, to find unique strings would take up so much time. 
    // Then, we'll need to find the count for each string separately
    // Clearly TC will be approx >= O(N^2) --> TLE

    // Even Hashing can't be done here on the strings to find their count.
    // B/z in hashing of int arrays, the ints are used as indices in the 
    // hash array, but strings can't be used as indices. 


    // So, we use maps
    map<string, int> m; // Here, we've taken string as keys b/z we want
                        // only the unique strings, and we know keys are unique
                        // and value is taken as int b/z we wan't the frequencies
                        // corresponding to those unique strings(keys)

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // Now, to calculate the freq of the string 
        // we'll insert it into the map, and increment 
        // that string's ctr.

        // When string is inserted for the 1st time, we'll assign value 1.
        // Then for the same string, the same value will increment.

        // m[s]++;
        m[s] = m[s] + 1; // This can't be done if |S| is too large like 1000000 or something
                         // b/z then in the insertion operation TC, s.size will matter and 
                         // that TC will be too large.

        // In the above line, when compiler sees m[s] written on LHS, it 
        // automatically inserts the string s as key and assigns a default
        // value of 0 to it. Then on RHS, m[s] accesses that same value = 0, 
        // adds 1 to it, and stores that result=1 and updates the same value with 1.
    }

    // Now, m is a freq map, stores freq of unique strings in sorted order.
    // map<string, int> ::iterator it;
    // for(auto it = m.begin(); it != m.end(); it++) {
    for(auto &pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }

    // Similary, maps can be used for hashing of numbers too like for too big numbers, or for -ve numbers
    // where the normal Hash Table/ Array fails.

    return 0;
}