#include <bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m)
{

    cout << m.size() << endl;

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    // All functions of maps and unordered maps are same.

    // Differences are in its:
    // 1. inbuilt implementation
    // 2. time complexity
    // 3. valid keys datatype

    // Syntax:
    unordered_map<int, string> m;
    m[1] = "abc"; // TC = O(1)
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a";

    m[5] = "cde";

    print(m); // Now, the keys will be printed in random order (not even in which
              // they were inserted, that isn't maintained) rather than sorted order.


    /* 1. Difference in inbuilt implementation

          Just like maps used trees, unordered_maps use "Hash Tables" for inbuilt implementation
          They use inbuilt HashTables, so every key's hash value is being calculated.
          In maps, keys were inserted based on comparisions (whether it is > or < than existing keys) 
    */

    /* 2. TC for insertion and accessing using keys (m[key]) becomes O(1) using Hash Tables. 
          O(1) is the avg TC b/z if in the hashtables (present internally), collisions occur
          then TC might be more.
    */

    // For maps, their TC was log(n)
    // For unordered_maps, their TC = O(1)

    auto it = m.find(7); // O(1)

    if(it != m.end()) {
        m.erase(it); // O(1)
    }

    // Note: Here only order is not maintained, so if in question maintaining order is not a constraint,
    //       then better use unordered maps as it saves time in operations. 


    /* 3. Valid keys datatype:
          
          In case of maps, we can put any complex datatype as key but can't do the same for unordered maps.
          Eg: unordered_map<pair<int, int>, string> m; --> compilation error
                        map<pair<int, int>, string> m; --> compiles without error

          This happens b/z in unordered maps, the insertion is implemented using in-built hash table.
          And so, for every key inserted, a hash value is calculated for it. So, for pair<> also,
          hash value will be tried to calculate, but for that an in-built hash function must be defined. And
          for pair<>, no in-built hash function is defined. So, unordered map can't work on these.

          However, maps perform insertion based on comparision. 2 pairs sure can be compared(> or <), so
          pairs can directly be inserted in maps. Similar for sets, vectors. Comparison is possible in them
          b/z comparision operation has been implemented internally for them. 

          Mostly, in-built hash functions are defined for int, double, float, long, long long, string. But 
          for complex DS like sets, pairs, vectors, hash func are not def. internally.
          
    */

    return 0;
}