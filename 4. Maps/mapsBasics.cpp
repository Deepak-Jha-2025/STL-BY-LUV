#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m) {
    
    cout << m.size() << endl;

    // To o/p the map elements, use iterators
    // map<int, string> ::iterator it;
    // for(it = m.begin(); it != m.end(); it++) {
    //     // Here, also same iterators concept as any other container (vectors, pairs)
    //     // m.begin() points to the 1st element/iterator of 1st element
    //     // m.end() points to the iterator of element/element just next to the last one.

    //     // now every map element is a pair, so it points to a pair
    //     // cout << (*it).first << " " << (*it).second << endl;
    //     cout << it->first << " " << it->second << endl;
    // }


    // Shortcut without iterators
    for(auto &pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }

    // Accessing values through iterator is a O(1) operation as iterator has address of the value and accessng value at some address if you know the address is a unit time operation. Now when we traverse the map, we start from m.begin() and are doing it++ in each step, it++ is also O(1) , so whole map traversal is O(1) only.Now, in above range based loops, we are not using iterators but internally that only is happening, pr is the value at address pointed by iterator, internally range based loops is also iterating through maps using iterators and then providing us reference to to the value at that address. 
    //  So the TC of accessing elements via pr in this loop is O(N) and not O(NlogN), where N is the number of elements in the map.

    // But when you want to directly access some specific value in map using m[key] or m.find(key), these are log(n) operations as log(n)time is taken by map to search this key.


    // ******************************** Summary: **********************************

    // Like insertion, TC of accessing map elements through key is also O(log(n)), but when pr is given the 
    // references from the map, it takes O(1) time b/z we directly have the address by internal use of iterators.
}

int main()
{
    // maps is a data structure which stores key-value pairs
    // key and value will have their own datatypes

    // corresponding to any key, a value can be stored
    // i.e. a mapping is there from key to value. 

    // https://excalidraw.com/#json=lYSGHtsxOgiZ-6hm7BWjY,Sy6Dc0r5DzOn-WpQjYQdhA --> For reference.


    // Syntax: 
    // map <datatype1/container1, datatype2/container2>

    map<int, string> m;

    // To insert key-value pairs:
    // int(key)     value(string)
    //    1             abc
    //    5             cde
    //    3             acd

    // Method-1
    m[1] = "abc"; // Insertion takes O(log(n)) time; where n = current size of map, similarly accessing through key also take logn time
    m[5] = "cdc";
    m[3] = "acd";

    m[6]; // Even though nothing inserted here, still the TC is O(log(n)), b/z besides the key 6
          // some default value corresponding to that key is inserted based on the value datatype
          // Like here value datatype is string, so empty string "" will be inserted
          // Similary for int/double/float --> value = 0 inserted
          // For vector, empty vector inserted

    // Method-2
    m.insert({4, "afg"}); // Remeber we're inserting element in a map, and a map's element is a pair.

    // Advantages: 

    // 1. Keys are stored in sorted order in maps
    // so, if keys are strings, then they'll be stored in lexographical increasing order.

    // 2. Keys are unique, they can't be inserted more than once, meaning duplicate keys can't be inserted in maps
    // Rather if it finds a key already inserted, i.e. a duplicate, it will update it's existing value with the new value

    m[5] = "cde"; // key = 5 was already there, so only it's value = "cdc" will be updated to "cde"
    
    print(m);




    return 0;
}