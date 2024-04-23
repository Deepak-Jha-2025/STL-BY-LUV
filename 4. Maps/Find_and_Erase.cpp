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


    // ******************************* Note **************************************
    /* Insertion operation may take O(log(n)) time but it also depeneds on the key, 
       basically the datatype of the key.
    */

    // Example: 
    map<string, string> mp;
    mp["abcd"] = "abcd"; // Now, it's TC is not only O(log(n))

    // Actually this insertion in maps is implemented using Red Black Trees

    /* So, whenever a new key-value is inserted, 1st that key is compared 
       with the existing keys (log(n) comparisions happen internally), like
       for m[6] = 2, 6 will be compared with the existing keys 1,3,5 and then
       based on those comparisions that key,along with its value, gets inserted
       in the correct place in the tree (which is visible to us as sorted order
       in the map). Now, here the keys were ints, and their comparisions would
       take O(1) time, so no issues.

       But once the keys are strings, their comparision doesn't take O(1) time, 
       but takes O(s.size) time, so this time would add up to the overall TC now.

       So, for mp["abcd"] = "abcd", the key "abcd" will be compared with the 
       existing key strings in the map, and now the TC becomes:

                             O(s.size) * O(log(n)) , s.size = size of key string to be inserted
                                                          n = size of map
    */

    

    return 0;
}