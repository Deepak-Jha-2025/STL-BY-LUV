#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> s) {
    for(auto value : s) {
        cout << value << endl;
    }
}

int main()
{
    /*
        Just like in multimaps, multiple/ dutplicate keys were allowed.
        Similarly, in multiset, we can insert multiple values.

        Multiset will also print the values in sorted order.
    */

    // Syntax
    multiset<string> s;

    // insert() function
    s.insert("abc"); // O(log(n)) --> since uses Red-Black Trees
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc"); // now it will be inserted twice (multiple/duplicate insertion allowed)

    // find() function

    /*
        Now, in multisets as multiple values are allowed and are stored in sorted order, 
        so .find() will return the iterator to the 1st element of a particular type.

        The iterator returned below is of the 1st string "abc" as there are 2 of them in 
        the multiset this time. 
    */
    auto it = s.find("abc"); // O(log(n)) --> since uses Red-Black Trees


    // erase() function --> takes either the iterator of the element or directly the element as argument
    // erase() also takes O(log(n)) time.

    // Deleting by iterator (deletes only the pointed element)
    if(it != s.end()) {
        s.erase(it); // This will delete only 1 element of that type(the 1st one pointed by that iterator)
                     // Here, 2 "abc" strings, are there, only the 1st one pointed by it will be removed
    }

    // Delete by value (deletes all occurences of that element in the multiset)
    // The reason is b/z when we pass value, then internally it keeps finding the 
    // iterator to that element, until it deletes all its occurences and it no longer
    // finds iterator to that element.

    // s.erase("abc"); // So be careful not to use this

    print(s);

    /*
        Most imp usecase: 

        There are priority queues in STL: They can store multiple elements, and store them 
        in sorted order. So, we can use multisets instead of priority queues. 
    */

    return 0;
}