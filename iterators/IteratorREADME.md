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