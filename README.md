# Standard Templates Library

- **Container:-** <br>
1.) Sequential: vector, stack, queue, pair(not a conatiner) <br>
2.) Ordered: maps, multimap, set, multiset <br>
3.) unordered: unordered map, unordered set <br><br>
*Nested container*<br>
-> vector< vector< int>> <br>
-> map< int, vector< int>> <br>
-> set< pair< int, string>> <br>
-> vector< map< int, set< int>>> <br>

- **Iterators :- point to memory address of contaoiners** <br>
    -> begin(), end() <br>
    -> vector< int> :: iterators it;

- **Algorithms:-**
    -> upperbound <br>
    -> lowerbound <br>
    -> sort <br>
    -> min_element <br>
    -> accumulate <br>
    -> count, find, etc 