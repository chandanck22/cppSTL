# sort()
- sorts the elements in the range [first, last) into ascending order.
*sort(v.begin(), v.end());*
- The elements are compared using operator < for the first version, and **comp** for the second.
- Equivalent elements are not guaranteed to keep their original relative order. 
```bash
int arr[] = {3,7,1,4,2,8,3,5};
vector<int> v (arr, arr+8);

sor(v.begin(), v.begin()+4);
// v = {1 3 4 7, 2 8 5 3}

sor(v.begin(), v.end());
// v = {1 2 3 4 5 6 7 8 }
```

## Comparator function
- **comp** must be a Binary function that accepts two elements in the range as arguments, and returns a value convertible to **bool**.
- The value returned indicates whether the element passed as first argument is considered to go before the second in the specific srict weak ordering it defines.
- The function shall not modify any of its arguments.

```bash
    bool comp(int a, int b)
    {
        if(a>b)
            retrun true;
        return false;
    }
```
```bash
sort(v.begin(), v.end(), comp);
```

### example of sort() using comp
```bash
bool fun (int i, int j)
{
    return (i>j);
}
int arr[] = {3,7,1,4,2,8,3,5}; 
vector<int> v (arr, arr+8);

sor(v.begin(), v.begin()+4, fun);
// v = {7 4 3 1 , 2 8 5 3}

sort(v.brgin(), v.end(), greater<int>());
// v = {8 7 6 5 4 3 2 1}
```
## greater<> class template
- It is a binary function object class whose call returns whether its first argument compares greater than the second (as returned by operator >).
- Function objects are instance of a class with member function operator() defined. This member function allows the objects to be used with the same syntax as a function call.

# find()
- find value in range
- returns an iterator to the **first** element in the range [first, last) that compares equal to val. If no such element is found, the function returns last.
- The function uses operator == to compare the individual elements to val.

```bash
int arr[] = {3, 7, 1, 4, 2, 8, 5, 3};
vector<int> v (arr, arr+8);

std::vector<int>::iterator it;
it = find (v.begin(), v.end(), 3);

if(it != v.end())
    cout<<"Elements found "<< *it <<endl;
else
    cout<<"element not found"<<endl;
```
# find_if()
- find elements in range satisfying a predicate.
- returns an iterator to the first element in the range [first, last) for which pred returns true. If no such element is found, the function returns last.
- The function uses operator == to compare the individual elements to val.
```bash
bool iEven (int i{
    return ((i%2) == 0);
}
int main(){
    vector<int> v;
    for(int i=1; i<10; i++){
        v.push_back(i);
        // v = {1 2 3 4 5 6 7 8 9 }
    }
    it = find(v.begin(), v.end(), isEven);
    if(it != v.end())
        cout<<"Even  number found"<<endl;
    else
        cout<<"Even number NOT found in v"<<endl;
}
```
# unique()
- Remove consecutive duplicates in range.
- Remove all but the first element from every consecutive group of equivalent elements in the range [first, last).
- The function does not alter the properties of the objects containing the range of elments(i.e. it cannot alter the size of an array or a container). The removal is done by replacing the dupicate elements by the next elements that is not a duplicate, and signaling the new size of the shortened range by returning an iterator to the elements that should be considered its new past-the-end elements.
- The relative order of the elements not removed is preserved, while the elements between the returned iterator and last are left in a valid but unspecified state.

```bash
int arr[] = {1,2,2,2,3,3,2,2,1};
vector<int> v (arr, arr+9);
vector<int>::iterator it;
it = unique (v.begin(),v.end());
v.resize(it - v.begin());

for(it = v.begin(); it != v.end(); ++it)
{
    std::cout<<" "<< *it;
}

// 1 2 3 2 1

```
## unique() with pred

```bash
bool fun(int i, int j){
    return (i == j);
}
int main()
{
    int arr[] = {1,2,2,2,3,3,2,2,1};
    vector<int> v (arr, arr+9);
    vector<int>::iterator it;
    it = unique (v.begin(),v.end(), fun);
    v.resize(it - v.begin());

    for(it = v.begin(); it != v.end(); ++it){
        std::cout<<" "<< *it;
    }
    return 0;
}
// 1 2 3 2 1

```

# count()
- count appearnces of value in range.
- Returns the number of elements in the range [first,last) that compare to val.
- The function uses operator == to compare the individual elements to val.

```bash
int arr[] = {1,2,3,3,2,1,1,2};
vector<int> v (arr, arr+8);
int c = count(my, my+8, 1);
cout<<"1 occurs "<<c<< "times";
// 3
```

# count_if()
- return number of elements in range satisfying condition.
- returns the number of elements in the range [first, last) for which **pred** is true.
- The function uses operator == to compare the individual elements to val.
- pred: unary function that accepts an elements in the range as arguments, and returns a value convertible to bool. The value returned indicates whether the element is counted by this function.
The function shall not modify its argument.
This can neither be a function pointer or a function objects.

```bash
bool isEven (int i)
{
    return ((i%2) == 0);
}
int main()
{
    vector<int> v;
    for(int i=1; i<10; i++){
        v.push_back(i);
        // v = {1 2 3 4 5 6 7 8 9}
    }
    int c = count_if(v.begin(), v.end(), isEven);
    cout<<"vector v contains"<< c <<"even values."

    return 0;
}
```


# reverse()
- reverse the order of the elements in the range [first,last).
- The function calls **iter_swap** to swap the elements to thier new locations.
- The function returns nothing.
- Bidirecitonal iterator passed to the function shall point to a type for which swap is properly defined.

```bash
vector<int> v;
for(int i=0; i<10; ++i){
    v.push_back(i+1);
}

reverse(v.begin(), v.end());
cout<<"Content of vector v :";

for(vecto<int>::iterator it=v.begin(); it != v.end(); ++it)
{
    cout<<" "<< *it;
}
```
# transform()
- Applies an operation sequentially to the elements of one (1) or two (2) ranges and store the result in the range that begins at result.
- (1) applies op to each of the elements in the range **[first1,last1)** and stores the value returned by each operation in the range that begins at results.
- (2) calls binary_op using each of the elements in the range **[first1, last1)** as first argumets, and the respective arguments in the range that begins at first2 as second argument. The value returned by each call is stored in the range that begins at result.
```bash
int fun(int i){
    return ++i;
}
int main()
{
    vector<int> v1, v2;
    for(int i=1; i<6; i++)
        v1.push_back();
        //v: 1 2 3 4 5
    
    v2.resize(v1.size());
    transform(v1.begin(), v1.end(), v2.begin, fun);

    for(auto it = v2.begin(); it != v2.end(); ++it){
        std::cout<<" "<<*it;

    return 0;
    }
}
// 2 3 4 5 6
```
```bash
int fun(int i){
    return i+j;
}
int main()
{
    vector<int> v1 {1,2,3,4,5};
    vector<int> v2 {2,3,4,5,6};

    transform(v1.begin(), v1.end(), v2.begin(), v.begin(), fun);
    
    for(auto it=v1.begin(); it != v1.end(); ++it)
        std::cout<<" "<<*it;

    return 0;
    }
}
// 3 5 7 9 11
```
# rotate()
- rotates the order of the elements in the range [first,last) in such a way the elements pointed by middle becomes the new first element.
- The function returns nothing.
```bash
vector<int> v;
for(int i=1; i<10; ++i)
    v.push_back();
    // v: 1 2 3 4 5 6 7 8 9 

rotate(v.begin(), v.begin()+3, v.end());
cout<<"Content is:";

for(vector<int>::iterator it=v.begin(); it != myvector.end(); ++it)
    cout<<" "<<*it;

// 4 5 6 7 9 1 2 3
```
