# Vector

Vectors are STL *sequence* containers same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted.

## Vector Characterstics

1. **Fast insert/remove at the end**
2. *Slow insert/remove in the middle or at the beggining*
3. *Slow search*

- Vector is one of the dynamic shapes of the array.
  - we can *save more space* using dynamic arrays.
  - wecan *resize* the dynamic arrays.
- To access vector iterator we write the word iterator after the scoop resolution operator `::`
  - iterator is like the pointer, to acess its value you should add asterisk `*` before the iterator.
```c++
vector<int>:: iterator it;  
```
- `auto` is a data type that will adapt automatically with its data initialization.



## Vector Methods

### Vector Modifiers
- `push_back()` push an element to the back of the vector.
- `swap()` It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
- `pop_back()` remove an element from a vector from the back.


### Element access
- `front()` returns the first element of a vector.
- `back()` returns the last element of a vector.
- `at(x)` returns the value in the position of `x`.
- `insert()` insert an element before the element with the specified location.
- `emplace()` emplace is like insert but faster.
- `erase()` remove element from a specific location (the location should be an iterator) or range.
- 

### Capacity
- `size()` returns the number of elements in the vector.
- `capacity()` returns the size of the storage space allocated for the vector.
- `max_size()` returns number of the maximum elements that can be inserted to this vector.
- `empty()` returns whether the vector is empty.
- `resize(n)` resize the container to `n` elements.
- `shrink_to_fit()` make the capacity of the container to fit the container size and destroy all elements after the last element of my container.

### Vector Iterators
- `begin()` return an iterator pointing to the first element in the vector.
- `end()` return an iterator poniting to the theoritical element that follows the last element in vector. So, to reach the last element you can access ut using `vector,end() - 1`.
- `rbegin()` returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element.
- `rend()` returns a reverse iterator pointing to the theoretical element.

### Functions
- `sort()` to sort my container in ascending order by defalut
  - `sort(v.rbegin(), v.rend())` to sort in descending order
- `reverse()` to reverse my container
- `min_element()` to get the minimum address - to access put the * -
- `max_element()` to get the minimum address - to access put the * -
- `minmax_element()` to get the min and max of a container by access the first and second elements from this function - to access put the * -
- `copy()` to copy an array/vector to my vector.
- `copy(s.begin(), s.end(), ostream_iterator<char>(cout));` to print my vector without loop.
- `find()` to find an iterator of an element in a vector, to find the element index in a vector you can use `it - v.begin()`.

### Properties of Vector

- Add to the back o(1) `push_back()`
- delete from the back o(1) `pop_back()`
- add to any where in the vector o(n)
- delete from any where in the vector o(n)
- access any where o(1)
- search using `find()` o(logN)

### Advantages
- implemented as dynamic array

### Drawbacks
- Expensive reallocation
- require contiguous memory