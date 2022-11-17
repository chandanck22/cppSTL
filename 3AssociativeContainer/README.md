# set<>
- sets are container that store unique elements following a specific order.
- sets usually implemented as RED-BLACK TREEs.
- Each value must be unique. THe value of the elements in a set cannot be modified once in the container, but they can be inserted or removed from the container.
- Internally the elements in a set are always sorted following a specific strict weak ordering.
- set container are generally slower than unordered_set container to access individual elements by their key, but they allow the direct iteration on subsets based on their order.

# multiset<>
- Same as sets but it allow duplicates.


# map<>
- Each KEY is Unique and can't change.
- maps contains sorted KEY_VAlUES pairs.
- maps are associative container that store elements formed by a combination of a key value and a mapped value, following a specfic order.
- In a map the key value are generally used to  sort uniquely identify the elements, while the mapped value store the content associated to this key.
- Internally, the elements in a map are always sorted by its key following a specific strict weak ordering criteria indicated by its internal comparison object.
- map are slower than unordered_map but they allow the direct iteration on subsets based on their order.
- maps are typically implemented as binary search trees.
- mapped values in a map can be accessed directly by their coresponding key using the bracket operator[].
```bash
map<key_type, value_type> map_name;

map<int, string> map1;
```
# multimap
- multimap contains sorted KEY_VALUE pairs.
- multimap can have duplicate KEY_VALUE pairs.
- cannot alter.
```bash
multimap_map<int, string> map1;
```