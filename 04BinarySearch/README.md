# binary_search()
- In case of arrays and vectos it must be **sorted sequence.**
- Returns **true** if any element in the range **[first,last)** is equivalent to val, and **false** otherwise.
- The elements are compared using operator < for the first version, and **comp** for the second.
- The element in the range shall already be sorted according to this **same criterion** (operator < or comp), or **at least partitioned** with respect to val.
```bash
int arr[] = {3,7,1,4,2,8,5,3};
vector<int> v (arr, arr+8);

sort(v.begin(), v.end());
// v = {1 2 3 4 5 6 7 8 }

if(binary_search(v.begin(), v.end(), 3))
    cout<<"Found!"<<endl;
else
    cout<<"Not Found!"<<endl;
```
## using comp function
```bash
bool fun (int i, int j)
{
    return (i>j);
}

int arr[] = {3,7,1,4,2,8,5,3};
vector<int> v (arr, arr+8);

sort(v.begin(), v.end(), fun);
// v = {8 7 6 5 4 3 2 1 }
 
if(binary_search(v.begin(), v.end(), 3, fun))
    cout<<"Found!"<<endl;
else
    cout<<"Not Found!"<<endl;
```
# upper_bound()
- Returns **iterator** in vectors and **pointer** in arrays.
- Returns an iterator pointing to the first element in the range [first, last) which compares **greater** than val.
- The elements are compared using operator < for the first version, and **comp** for the second.
- The elements in the range shall already be sorted according to this **same criterion**(operator < or comp), or **at least partitioned** with respect to val.
```bash
int arr[] = {3, 7, 1, 4, 2, 8, 5, 3};
vector<int> v (arr, arr+8);

sor(v.begin(), v.end());
// v = {1 2 3 4 5 6 7 8 }
vector<int>::iterator up = upper_bound(v.begin(), v.end(), 2);
cout<<"Upper bound is at pos: "<<(up - v.begin()); 
// 2
```
# lower_bound()
- Returns **iterator** in vectors and **pointer** in arrays.
- Returns an iterator pointing to the first element in the range [first, last) which **does not compare less than** val.
- The elements are compared using operator < for the first version, and **comp** for the second.
- The elements in the range shall already be sorted according to this **same criterion**(operator < or comp), or **at least partitioned** with respect to val.
```bash
int arr[] = {1, 2, 3, 3, 2, 1, 1, 2};
vector<int> v (arr, arr+8);

sor(v.begin(), v.end());
// v = {1 1 1 2 2 2 3 3 }

vector<int>::iterator lo = lower_bound(v.begin(), v.end(), 2);
vector<int>::iterator up = lower_bound(v.begin(), v.end(), 2);

cout<<"Lower bound is at pos: "<<(lo - v.begin());
// 3
cout<<"Upper bound is at pos: "<<(up - v.begin()); 
// 6 
```

