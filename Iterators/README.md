# Iterators
Iterators provide a means for accessing data stored in container classes such a vector, map, list, etc.<br>
An iterator points to an item that is part of a larger container of items. <br>
You can access the element by "dereferencing" the interator with a *, just you would dereference a pointer.<br>
Syntax for resquesting an iterator of any STL class template:-<br>
*std::class_name< template_parameters> :: iterator name*<br>
#### eg.
- **std::vector< string> vsc;**
- **std::vector< string>::iterator vecIterator;**

## Types of Iterators
Based upon the functionality of the iterator, they can be classified into five major categories:
- **Input Iterators** : Accessing elements of container.<br>
- **Output Iterators**: To assign value to memory of container.<br>
- **Reverse Iterator**: They can only move in a reverse direction and that too one step at a time.<br>
- **Forward Iterator**:They can only move in a forward direction and that too one step at a time.<br>
- **Bidirectional Iterators**: They can move in both direction.<br>
- **Random-Access Iterators**: They are the most powerful iterators. They can randomly access any elements inside the container. Their functionally are same as pointers.

# (Forward Reverse) < (Bidirectional) < (Random-access Iterator)

**Bidirectional iterator:** - It supports all of the features of forward iterators, and also prefix and postfix decrement operators.

E.g

```bash
  vector<int> vec{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  vector<int> :: iterator it;
  for(it = vec.end(); it != vec.begin(); it--)
        cout<<*it<<" ";
```
**Random access iterator:** - It is an iterator that provides both increment and decrement (just like birectional iterator), and that also provides constant-time methods for moving forward and backward in arbitrary-sized steps.<br>
Random access iterator provide essentially all of the operations of ordinary C pointer arithmetic.

E.g

```bash
  vector<int> vec{10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  vector<int> :: iterator it = vec.begin();
  it += 3;
  cout<<*it<<" ";
```


| Container            | Iterators Suported                                                               |
| ----------------- | ------------------------------------------------------------------ |
| vectors | Random access Iterators |
| list | Bidirectional Iterators |
| dequeue | Random access Iterators |
| maps, multimaps | Bidirectional Iterators |
| sets, multisets | Bidirectional Iterators |
| stacks | - |
| queue, priority queue | - | 