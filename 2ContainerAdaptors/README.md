# stack<>
The c++ stack is a container adapter that gives the programmer the functionality of a stack specifically, a LIFO data structure.
```
#include <stack>
stack();
```
```bash
stack<nt> s;
s.push(0);
s.push(1);
s.push(2);
while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
}
// 2 1 0
```
# queue<>
The c++ stack is a container adapter that gives the programmer the functionality of a stack specifically, a FIFO data structure.
```
#include <queue>
queue();
```
```bash
queue<nt> q;
s.push(0);
s.push(1);
s.push(2);
while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
// 2 1 0
```
# deque<>
Double-ended queues are like vectors, except that they allow fast insertions and deletions at the beginning as well as the end of the container.
## Iterators
- begin
- end
- rbegin
- rend
- cbegin
- cend
- crbegin
- crend

## Capacity Functions
- size
- max_size
- resize
- empty
- shrink_to_fit

## Element access functions
- operator[]
- at
- front
- back

## deque modifier functions
- assign
- push_back
- push_front
- pop_back
- pop_front
- insert
- erase
- swap
- clear

```bash
deque<int> q{1,2,3};
q.push_back(4);
q.push_front(5);
for(auto it = q.begin(); it != q.end(); i++)
    cout<<(*it)<<" ";
```
```bash
deque<int> q{1,2,3};
q.assign({4,5,6});
q.insert(q.begin(), {7,8});
q.erase(q.begin()+1, q.end()-3);
for(auto it = q.begin(); it != q.end(); it++)
    cout<<(*it)<<" ";
```

# priority_queue<>
```
#include<queue>
```
- C++ Priority Queues are like queues, but the elements inside the queue are ordered by some predicate.
- Priority queue **constructors** construct a new priority queue.
- Priority queue **operators** assign and compare priority queues
- priority queue **functions** operate on priority queue container to provide various functionalities.
- *No iterators on priority queue.*
## Functions
### **empty()**
The empty() return true if the list has no elements, false othherwise.
### **push()**
The function push() adds val to the end of the current priority queue.
```bash
priority_queue<int> q;
q.push(0);
q.push(1);
q.push(2);
// 0 1 2
```
### **pop()**
The function pop() remove the top elements of the priority queue and discards it.
```bash
priority_queue<int> q;
q.push(0);
q.push(1);
q.push(2);
q.pop();
// 0 1
```
### **top()**
The function top() returns a reference to the top elements of the priority queue.
```bash
priority_queue<int> q;
q.push(0);
q.push(1);
cout<<q.top();
// 1
```
### **size()**
The function size() returns the numbers of the elements of the current priority queue.
```bash
priority_queue<int> q;
q.push(0);
q.push(1);
q.push(2);
cout<<q.size();
// 3
```
Example 1
```bash
priority_queue<int> q;
q.push(0);
q.push(1);
q.push(2);
while(!q.empty()){
    cout<<'\t' <<q.top();
    q.pop();
}
// 2 1 0
```
Example 2
```bash
class Compare{
    public:
    bool operator() (int a, int b){
        return (a>b);
    }
};
priority_queue<int, vector<int>, Compare> q;
q.push(0);
q.push(1);
while(!q.empty()){
    cout<<'\t'<<q.top();
    q.pop();
}
// 0 1
```