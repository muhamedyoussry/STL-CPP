# Vector

Vectors are STL sequence containers same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted.

## Vector Characterstics

1. Fast insert at the end
2. Slow insert at at the middle and at the beggining
3. Slow search

- Vector is one of the dynamic shapes of the array.
  - we can *save more space* using dynamic arrays.
  - wecan *resize* the dynamic arrays.

## Vector Methods

### Vector Modifiers
- `push_back()` push an element to the back of the vector.
- `swap()` It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
- `pop_back()` remove an element from a vector from the back.


### Element access
- `front()` returns the first element of a vector.
- `back()` returns the last element of a vector.
- `at(x)` returns the value in the position of `x`.

### Capacity
- `size()` returns the number of elements in the vector.
- `capacity()` returns the size of the storage space allocated for the vector.
- `max_size()` returns number of the maximum elements that can be inserted to this vector.
- `empty()` returns Returns whether the vector is empty.