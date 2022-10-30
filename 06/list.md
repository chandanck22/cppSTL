# list<>
- Lists are sequences of elements stored in a linked list.
- Compared to vectors, they allow fast inseration and deletions, but slower random access.
- List **constructors** create lists and initialize them with some data.
- List **operators** assign and compare lists
- List **function** operate on list container to provide verious functionalities
## List constructor
```bash
#include <list>
```
```bash
list();
// The default list consructor takes no arguments, create a new instance of that list.
```
```bash
list(const list& c);
// Default copy constructor that can be used to create a new list that is a copy of the given list c.
```
```bash
list(size_type num, const TYPE& val = TYPE());
//create a list  with space for num objects. If val is specified,each of those objects will be given that value.
```
## List Operators
- All of the C++ containers can be compared and assigned with the standard comparison operators: 
==, !=, <=, >=, <, >, and =
- Performing a comparison or assigning one list to another takes linear time.

*We don't have at() function in list.<br>
We don't have capacity().*

## Functions
- front() & back()
- begin() & end()
- rbegin() & rend()
- clear(), erase(), empty()
- push_back() & pop_back()
- push_front() & pop_front()
- **insert()**
```bash
list<int> l1;
l1.push_back(0);
l1.push_back(1);
l1.push_back(2);
l1.push_back(3);

list<int> l2;
l2.push_back(5);
l2.push_back(6);
l2.push_back(7);
l2.push_back(8);

l2.insert(12.end(), l1.begin(), l1.end());

for(int i=0; i<l2.size(); ++i){
    cout<<l2[i]<<" ";
}
//5  6 7 8 0 1 2 3
```
- size(), resize()
- max_size()
- assign()
- **swap()**
```bash
list<int> l1, l2;
for(int i=1; i<=10; i++)
    l1.push_back(i);
for(int i=5; i<=15; i++)
    l2.push_back(i);

l1.swap(l2);
for(auto it = l1.begin(); it != l1.end(); i++)
    cour<<(*it)<<" ";
```