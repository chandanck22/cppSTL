
# unordered_set<>
- Unordered sets are container that store unique elements in no particular order, and which allow for fast retrieval of individual elments based on their value.
- The value of an element is at the same time its key, that identifies it uniquely. Keys are immutable, therefore, the in an unordered_set cannot be modified once in the container - they can be inserted and removed though.
- Internally the elements in unordered_Set are not sorted, but organised into buckets depending on their hash values to allow for fast access to individual elements directly by their values(with constant time complexity).
- It is faster than set container to access individual elements by their key, although they are generally less effcient for range iteration through a subset of their elements.


# unordered_map<>
- It allows fast retrieval of individual elements based on their keys.
- Elements are not sorted but organised int buckets depending on their hash values to allow for fast access.
- They are implemented using hash table.
- It cannot have duplicate KEY_VALUE pair.
- It contains unsorted KEY_VALUE pairs.
- can be alter.
```bash
unordered_map<int, string> map1;
```