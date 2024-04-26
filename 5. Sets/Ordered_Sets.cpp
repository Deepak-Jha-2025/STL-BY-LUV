#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s) {
    // for(const string &value : s) { // if taking ref, use const for the value b/z set elements are of type const
    for(string value : s) {
        cout << value << endl;
    }

    // for(auto it = s.begin(); it != s.end(); it++) {
    //     cout << (*it) << endl;
    // }
}

int main()
{
    // Maps used to store key-value pairs
    // A key is mapped to a value

    // From these key-value pairs, remove the values
    // Now, all these keys remain, these keys comprise a "set"

    // Just like in maths, set comprises of unique numbers
    // Here, set is a collection of unique (no duplicates allowed) keys/numbers/elements.


    // Types:
    // 1. Sets 
    // 2. Unordered sets
    // 3. Multi set


    // Syntax: set<datatype/container> identifier;
    set<string> s;

    // Set only stores unique elements, discards any duplicates (if tried to insert)

    // Just like normal maps stored pairs in sorted order of keys, similarly sets
    // stores/prints/output those unique elements in sorted order(for strings in lexographical order)

    s.insert("abc"); // TC for insertion/accessing: O(log(n)) , All same operations have same TC as maps
                     // b/z internal implementation of sets is also done using Red-Black Trees
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); // Just like map keys, set inserts only unique elements, so this duplicate will be discarded from insertion.

    // Accessing methods: In maps it was either using m[key] or m.find()
    // Here, [] doesn't exist, we use only .find()

    // auto it = s.find("abc"); // simply pass the element, will return iterator of that element(if it exists in the set)
    //                           // else will return .end() iterator of that set (just like maps)

    //                           // .find() also has O(log(n)) TC just like ordered_maps

    // if(it != s.end()) {
    //     // cout << (*it) << endl;
    //     s.erase(it);
    // }                             

    s.erase("bcd");

    print(s); // Lexographical order


    return 0;
}