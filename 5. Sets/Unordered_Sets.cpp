#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        All the operations in set like find(), erase(), insert() or accessing the values
        have TC of O(log(n)) b/z internal implementation of sets is also using Red-Black
        Trees.

        Juse like maps and unordered maps, sets and unordered sets have same differences.

        All the TC will be O(1) now b/z unordered_maps are also implemented using hash tables
        internally. 

        Just like in unordered maps, we can't put complex DS as keys like pairs, same for
        unordered sets, we can't make a set of such complex DS like pairs, sets:

        unordered_set<pair<int, int> , unordered_set<set<int>> , etc. can't be done
        This is b/z in-built hash func is not defined for those DS is not defined.

        But unordered_set of simple datatypes like int, double, float, strings, can be made.
    */

    // Syntax
    unordered_set<string> s;

    // insert() function
    s.insert("abc"); // O(1)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");


    // find() function
    auto it = s.find("abc"); // O(1)

    // erase() function
    if(it != s.end()) {
        s.erase(it);
    }
    s.erase("bcd");


    /*
        Usecase of unordered sets:

        Where order doesn't matter, we just need to check for the presence of an element. 
    */

    return 0;
}