# Standard Templates Library
It is a set of C++ template classes that provide generic classes and functions that can be used to implament data strucure and algorithms.

It is a library contaning all the class templates present in the standard namespace. 

Generic programming enables the programmer to write a general algorithm which will work with all data types.

- **Container:-** helps us to implement and replicate simple and complex data structure very easily.  <br>

E.g - Creating Linked List<br>

1.
```bash
// WITHOUT STL
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *n1;
    n1-> data;
    n1->next - NULL;
}
```
2.
```bash
// WITH STL
int main()
{
    list <int> node;
}
```
**Container Types:-**

1.) Sequence Containers:

Array, Vector, List, Forward_list, Dqueue

2.) Container Adaptors: 

stack, queue, priority queue

3.) Associative Container :

set, map, multiset, multimap

4.) Unordered: 

unordered map, unordered set, unordered multimap, unordered multiset


**Nested container**

-> vector< vector< int>> <br>
-> map< int, vector< int>> <br>
-> set< pair< int, string>> <br>
-> vector< map< int, set< int>>> <br>

- **Iterators :-** point to memory address of containers

    -> begin(), end() <br>
    -> vector< int> :: iterators it;

- **Generic Algorithms:-**

    -> binary search <br>
    -> upperbound/lowerbound <br>
    -> min/max <br>
    -> accumulate <br>
    -> count, find, <br>
    -> reverse/rotate <br>
    -> sort/swap etc