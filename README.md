
#  Standard Templates Library

It is a set of C++ template classes that provide generic classes and functions that can be used to implament data strucure and algorithms.

It is a library contaning all the class templates present in the standard namespace.

Generic programming enables the programmer to write a general algorithm which will work with all data types.

**1.) Container:-** helps us to implement and replicate simple and complex data structure very easily.

E.g - Creating Linked List

**1.**

    //  WITHOUT  STL
    
    struct  node{
	    int  data;
	    struct  node  *next;
    };
    
    int  main(){
	    struct  node  *n1;
	    n1->  data;
	    n1->next  -  NULL;
    }

**2.**
```bash
//  WITH  STL

int  main()
{
	list  <int>  node;
}
```

**Container Types:-**
1.) Sequence Containers:

    Array
    Vector
    List
    Forward_list
    Dqueue

2.) Container Adaptors:

    stack
    queue
    priority_queue

3.) Associative Container :

    set
    map
    multiset
    multimap

4.) Unordered Container :

    unordered map
    unordered set
    unordered multimap
    unordered multiset

**Nested Container**

    vector< vector< int>> 
    map< int, vector< int>> 
    set< pair< int, string>>
    vector< map< int, set< int>>


**2.) Iterators :-** point to memory address of containers

    begin(), end() 
    vector< int> :: iterators it;
    next() / prev()

  

 **3.) Generic Algorithms:-**

    binary_search(startaddress,endaddress, valuetofind)
    upperbound/lowerbound 
    min/max 
    accumulate 
    count, find, 
    reverse/rotate 
    sort(startaddress, endaddress)
    swap

