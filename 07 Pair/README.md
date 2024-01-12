# pair<>
- This class couples together a pair of values, which may be of different types. The individual values can be accessed through its public member first and second.

# make_pair
- Construct a pair object with its first element set to x and its second element set a y.
- The template types can be implicitly deduced from the arguments passed to make_pair.

Syntax:
```
template <class T1, class T2>
pair<v1, v2> make_pair (T1 x, T2 y);
```

```bash
pair<int, char> g1;                     // default
pair<int, char> g2(1,'a');              // initited different data type
pair<int, int> g3(1,'10');              // initiated same data type
pair<int, int> g4(g3);                  // copy
pair<int, char> g5 = make_pair(1,'a');  // using make_pair
```
```bash
pair<int, char> p1;
p1.first = 1;
p1.second = 'J';

cout<<p1.first<<" ";
cout<<p1.second <<endl;
```


