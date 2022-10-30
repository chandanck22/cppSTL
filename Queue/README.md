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