#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";

    m[5] = "cde";

    // .find() function --> T.C: O(log(n)) (All self balancing trees like Red Black Trees have log(n) TC for insert, search, access, delete)

    // argument: key

    // auto it = m.find(8); // returns an iterator to that key-value pair
    //                      // if not found, returns the .end() iterator

    // auto it = m.find(7);    // not present in map

    // if(it == m.end()) {
    //     cout << "No value" << endl;
    // }
    // else {
    //     cout << (*it).first << " " << it->second << endl;
    // }



    // .erase() function --> removes a key-value pair (T.C: O(log(n))), n = map.size()

    // takes arg in 2 ways: either the key or the iterator to that pair
    // m.erase(3);  // arg passed: key

    // auto it = m.find(5);
    // m.erase(it); // arg passed: iterator; deletes whatever pair is being pointed by that iterator

    auto it = m.find(7);
    if(it != m.end())    // Suppose iterator pts to .end() i.e. to some key which is not present in the map
        m.erase(it);     // Then trying to erase a pair that is absent will cause seg. fault, so we can't give
                         // an iterator which dnesn't exist, for that we'll add a conditional check to avoid 
                         // this error, then as it pts to m.end(), nothing gets removed.

    
    // .clear() function
    m.clear(); // clears the map entirely

    print(m); 

    return 0;
}