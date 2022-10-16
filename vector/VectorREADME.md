## Vector
- Vector contain contiguous elements stored as an array.
- Accessing members of a vector or appending elements can be done in constant time, whereas locating a specfic value or inserting elements into the vectors takes linear time.
- Vectors **constructors** create vectors and initialize them with some data
- Vector **operators** compare, assign and access elements of a vector
## Vector Consructors
**#include < vector>** <br>
**vector();**<br>
vector< int> v; <br>
*default vector constructor takes no arguments, creates a new instance of that vector.* <br><br>

**vector(const vector& c);**<br>
vector< int> v2(v1); <br>
*default copy constructor that can be used to create a new vector that is a copy of the given vector c.* <br><br>

**vector(size_type num, const TYPE& val = TYPE());**<br>
vector< int> v(2,3);<br>
*creates a vector with space for num objects. If val is specified each of those objects will be given that value.*<br> <br>

**vector(input_iterator start, input_iterator end);** <br>
vector< int> v(it1,it2); <br>

## Vector Operators
- All of the c++ containers can be compared and assigned with the standard comparison operators: ==, !=, >=, <, >, and =
- Individual elements of a vecotr can be accessed with the [] operator.
- A comparison or assigning one vector to another takes linear time.
- The [] operator runs in constant time.

## swap() Function
 The swap() function exchanges the elements of the current vector with those of from. This function operates in constant time. <br>
 Syntax:- <br>
 *void swap(container& from)*<br>

 - **vector v1**<br>
 - **v1.push_back(10)**<br>
 - **vector v2**<br>
 - **v2.push_back(20)**<br>
 - **v1.swap(v2)**<br>
 - **cout<<"The first element in v1 is"<<v1.front()<<endl;**<br>
 - **cout<<"The first element in v2 is"<<v2.front()<<endl;**<br>

## assign() Function
The assign() function either gives the current vector the values from start to end, or gives it num copies of val and will destroy the previous contents of the vector. <br>
Syntax:- <br>
*void assign(size_type num, const TYPE& val);*
*void assgin(input_iterator start, input_iterator end);*

- **vector< int> v;**
- **v.assign(10,42);**

## capacity(), reserve() Functions
The capacity function returns the number of elements that the vector can hold before it will need to allocate more space.<br>
The reserve() function sets the capacity oof the vector to at least size.
Syntax:- <br>
*size_type capacity() const*<br>
*void reserve(size_type size)*<br>


- **vector< int> v(10)**
- **cout<<"The capacity of v is:"<<v.capacity()<<endl;**
- **vector< int> v1**
- **v1.reserve(20);**
- **cout<<"The capacity of v1 is:"<<v.capacity()<<endl;**

## size(), resize() Function
The size() function returns the number of elements in the current vector.<br>
The function resize() changes the size of the vector to size.<br>
Syntax:-<br>
*size_type size() const;*<br>
*void resize(size_type num, const TYPE& val=TYPE());* <br>
-**vector< int> v;**
-**for(int i=0; i<10; i++) v.push_back(i);**
-**cout<<"THe size of v is: "<<v.size()<<endl**
-**v.resize(4)**
-**cout<<"THe size of v is: "<<v1.size()<<endl**

## clear(), erase(), empty() function
The clear() function deletes all of the elements in the vector and it runs in linear time. <br>
The empty() function returns true if the vector has no elements, false otherwise. <br>
The erase() function either deletes the elements at location loc, or deletes the elements between start and end(including start but not including end).<br>
Syntax:-<br>
*void clear();*<br>
*bool empty() const;*<br>
*iterator erase(iterator loc);*<br>
*iterator erase(iterator start, iterator end);*<br>

-**while(!v.empty()) { //code }**<br>
-**it = v.begin();**<br>
-**v.erase();**<br>
-**v.clear();**<br>

## begin(), end() Function
The begin() function returns an itertor to the first element of the vector, and runs in constant time.<br> 
The end() function returns an iterator just past the end of the vector. 
Syntax:- <br>
*iterator begin();*<br>
*iterator end();*<br>

-**vector< int>::iterator it;**<br>
-**for(it = v1.begin(); it != v1.end(); ++i){ cout<<*it << endl; }**<br>

## rebegin(), rend() Function
The rbegin() function returns a reverse_iterator to the end of the current vector.<br>
The rend() function returns a reverse_iterator to the beginning of the current vector.<br>
Both works in constant time.
Syntax:- <br>
*reverse_iterator rbegin();*<br>
*reverse_iterator rend();*<br>

- **for(auto it=v.rbegin(); it != v.rend(); ++it){ cout<< *it <<" "; }**

## front(), back() Function
The front() function returns a refernce to the first element of the vector, and runs in constant time.<br>
The back() function returns a reference to the last elements in the vector. <br>

- **cout<<"The first element is: "<<v.front()<<endl**<br>
- **cout<<"The Last element is: "<<v.back()<<endl**<br>

## at() Function
The at(loc) function returns a refernce to the element in the vector at index "loc". <br>
Syntax:-<br>
*TYPE& at(size_type loc);*<br>
*const TYPE& at(size_type loc) const;*<br>

- **vector< int> v(5,15);**<br>
- **for(int i=0; i<5; +++i){ cout<< v.at(i)<<endl}**<br>

## push_back(), pop_back() Function
The push_back() function appends value to the end of the vector.<br>
The pop_back() function removes the last element of the vector.<br>
Syntax:-<br>
*void push_back(const TYPE& val);*<br>
*void pop_back();*<br>

- **vector< int> v**<br>
- **for(int i=0; i<10; ++i){ v.push_back(i); }**<br>
- **v.pop_back();**<br>

## insert() Function
Sytax:-<br>
*iterator insert(iterator loc, const TYPE& val);*<br>
insert val before loc, returning an iterator to the element inserted.<br>
*void insert(iterator loc, size_type num, const TYPE& val);*<br>
insert num copies of val before loc<br>
*void insert(iterator loc, input_iterator start, input_iterator end);*<br>
insert the elements from start to end before loc.

- **vector< int> v1;**<br>
- **v1.push_back(0);**<br>
- **v1.push_back(1);**<br>
- **v1.push_back(2);**<br>
- **v1.push_back(3);**<br>
- **vector< int> v2;**<br>
- **v2.push_back(5);**<br>
- **v2.push_back(6);**<br>
- **v2.push_back(7);**<br>
- **v2.push_back(8);**<br>
- **v2.insert(v2.end(), v1.begin(), v1.end());**<br>
- **for(int i=0; i< v2.size(); ++i){ cout<< v2[i]<< " "; }**<br>


## How to print all elements of a vector?
### 1.)
*vector< int> v;*<br>
*v.push_back(1);*<br>
*v.push_back(2);*<br>
*v.push_back(3);*<br>
*v.push_back(4);*<br>
*for(int i=0; i< v.size(); ++i){ cout<< v[i]<< " "; }*<br>

### 2.)
*vector< int> v;*<br>
*vector< int>::iterator it;*<br>
*myv.push_back(1);*<br>
*myv.push_back(2);*<br>
*myv.push_back(3);*<br>
*for(it = v.begin(); it != v.end(); ++it){ cout<< *it<< " "; }*