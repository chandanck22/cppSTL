# Vector
- Vector contain contiguous elements stored as an array.
- Accessing members of a vector or appending elements can be done in constant time, whereas locating a specfic value or inserting elements into the vectors takes linear time.
- Vectors **constructors** create vectors and initialize them with some data
- Vector **operators** compare, assign and access elements of a vector
## Vector Consructors
```bash
#include <vector>
vector();
vector<int> v;
```
*default vector constructor takes no arguments, creates a new instance of that vector.* <br><br>
```bash
vector(const vector& c);
vector<int> v2(v1);
```
*default copy constructor that can be used to create a new vector that is a copy of the given vector 'c'.* <br><br>
```bash
vector(size_type num, const TYPE& val = TYPE());
vector<int> v(2,3);
```
*creates a vector with space for num objects. If val is specified each of those objects will be given that value.*<br> <br>

**vector(input_iterator start, input_iterator end);** <br>
vector< int> v(it1,it2); <br>

## Vector Operators
- All of the c++ containers can be compared and assigned with the standard comparison operators: ==, !=, >=, <, >, and =
- Individual elements of a vecotr can be accessed with the [ ] operator.
- A comparison or assigning one vector to another takes linear time.
- The [ ] operator runs in constant time.

## front(), back() Function
The front() function returns a refernce to the first element of the vector, and runs in constant time.<br>
The back() function returns a reference to the last elements in the vector. <br>

```bash
cout<<"The first element is: "<<v.front()<<endl;
cout<<"The Last element is: "<<v.back()<<endl;
```
## at() Function
The at(loc) function returns a refernce to the element in the vector at index "loc". <br>
Syntax:-<br>
*TYPE& at(size_type loc);*<br>
*const TYPE& at(size_type loc) const;*<br>
```bash
vector<int> v(5,2);
for(int i=0; i<5; ++i){ 
    cout<< v.at(i)<<" ";
}
// 2 2 2 2 2
```
## push_back(), pop_back() Function
The push_back() function appends value to the end of the vector.<br>
The pop_back() function removes the last element of the vector.<br>
Syntax:-<br>
*void push_back(const TYPE& val);*<br>
*void pop_back();*
```bash
vector<int> v;
for(int i=0; i<10; ++i){ v.push_back(i); }
v.pop_back();
```
## begin(), end() Function
The begin() function returns an itertor to the first element of the vector, and runs in constant time.<br> 
The end() function returns an iterator just past the end of the vector. <br>
Syntax:- <br>
*iterator begin();*<br>
*iterator end();*<br>
```bash
vector<int> v ={2,3,5,6,7};
vector<int>::iterator it;
for(it = v.begin(); it != v.end(); ++it){ 
    cout<< (*it) <<" "; 
}
// 2 3 5 6 7
```

## insert() Function
Sytax:-<br>
*iterator insert(iterator loc, const TYPE& val);*<br>
insert val before loc, returning an iterator to the element inserted.<br>
*void insert(iterator loc, size_type num, const TYPE& val);*<br>
insert num copies of val before loc<br>
*void insert(iterator loc, input_iterator start, input_iterator end);*<br>
insert the elements from start to end before loc.
```bash
vector<int> v1;
v1.push_back(0);
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);

vector<int> v2;
v2.push_back(5);
v2.push_back(6);
v2.push_back(7);
v2.push_back(8);
v2.insert(v2.end(), v1.begin(), v1.end());
for(int i=0; i < v2.size(); ++i){ 
    cout<< v2[i]<< " "; 
}
// 5 6 7 8 0 1 2 3
```

## How to print all elements of a vector?
### 1.)
```bash
vector< int> v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
for(int i=0; i< v.size(); ++i){ 
    cout<< v[i] << " "; 
}
// 1 2 3 4
```
### 2.)
```bash
vector<int> v;
vector<int>::iterator it;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
for(it = v.begin(); it != v.end(); ++it){ 
    cout<< (*it) << " "; 
}
// 1 2 3 4 
```

## swap() Function
 The swap() function exchanges the elements of the current vector with those of from. This function operates in constant time. <br>
 Syntax:- <br>
 *void swap(container& from)*<br>
```bash
 vector<int> v1;
 v1.push_back(10);
 vector<int> v2;
 v2.push_back(20);
 v1.swap(v2);
 cout<<"The first element in v1 is: "<<v1.front()<<endl;  // 20
 cout<<"The first element in v2 is: "<<v2.front()<<endl;  // 10
```
## assign() Function
The assign() function either gives the current vector the values from start to end, or gives it num copies of val and will destroy the previous contents of the vector. <br>
Syntax:- <br>
*void assign(size_type num, const TYPE& val);*
*void assgin(input_iterator start, input_iterator end);*
```bash
vector<int> v;
v.assign(10,42);
```
## capacity(), reserve() Functions
The capacity function returns the number of elements that the vector can hold before it will need to allocate more space.<br>
The reserve() function sets the capacity of the vector to at least size.<br>
Syntax:- <br>
*size_type capacity() const*<br>
*void reserve(size_type size)*<br>

```bash
vector<int> v(10);
cout<<"The capacity of v is:"<<v.capacity()<<endl;
// 10
vector< int> v1;
v1.reserve(30);
cout<<"The capacity of v1 is:"<<v1.capacity()<<endl;
// 30
```
## size(), resize() Function
The size() function returns the number of elements in the current vector.<br>
The function resize() changes the size of the vector to size.<br>
Syntax:-<br>
*size_type size() const;*<br>
*void resize(size_type num, const TYPE& val=TYPE());* <br>
```bash
vector<int> v;
for(int i=0; i<10; i++) v.push_back(i);
cout<<"The size of v is: "<<v.size()<<endl;
// 10
v.resize(4);
cout<<"The size of v is: "<<v.size()<<endl;
// 4
```
## clear(), erase(), empty() function
The clear() function deletes all of the elements in the vector and it runs in linear time. <br>
The empty() function returns true if the vector has no elements, false otherwise. <br>
The erase() function either deletes the elements at location loc, or deletes the elements between start and end(including start but not including end).<br>
Syntax:-<br>
*void clear();*<br>
*bool empty() const;*<br>
*iterator erase(iterator loc);*<br>
*iterator erase(iterator start, iterator end);*<br>
```bash
while(!v.empty()) { //code }
it = v.begin();
v.erase();
v.clear();
```


## rebegin(), rend() Function
The rbegin() function returns a reverse_iterator to the end of the current vector.<br>
The rend() function returns a reverse_iterator to the beginning of the current vector.<br>
Both works in constant time.<br>
Syntax:- <br>
*reverse_iterator rbegin();*<br>
*reverse_iterator rend();*<br>
```bash
for(auto it=v.rbegin(); it != v.rend(); ++it){ cout<< *it <<" "; }
```

