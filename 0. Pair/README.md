# Pair

Pairs are STL *Simple* container used to combine together two values that may be different in type.
 
## Pair Characterstics

1. **Fast insert/remove at any place**
2. *no suppport for random access*
3. *Slow search*


## Pair Methods

### Pair Modifiers
- `push_back()` push an element to the back of the Pair.
- `push_front()` push an element to the front of the Pair.
- `pop_back()` remove an element from a Pair from the back.
- `pop_front()` remove an element from a Pair from the front.
- `remove()` removes all the elements from the Pair, which are equal to given element.
- `assign()` assign new elements to Pair by replacing current elements and resizes the Pair.


### Element access
- `front()` returns the first element of a Pair.
- `back()` returns the last element of a Pair.
- `insert()` insert an element before the element with the specified location.
- `emplace()` emplace is like insert but faster.
- `emplace()_back` emplace is like push back but faster.
- `emplace()_front` emplace is like push front but faster.
- `erase()` remove element from a specific location (the location should be an iterator) or range.
- 

### Capacity
- `max_size()` returns number of the maximum elements that can be inserted to this Pair.
- `empty()` returns whether the Pair is empty.

### Pair Iterators
- `begin()` return an iterator pointing to the first element in the Pair.
- `end()` return an iterator poniting to the theoritical element that follows the last element in Pair. So, to reach the last element you can access ut using `Pair,end() - 1`.
- `rbegin()` returns a reverse iterator pointing to the last element in the Pair (reverse beginning). It moves from last to first element.
- `rend()` returns a reverse iterator pointing to the theoretical element.

### Functions
- `sort()` to sort my container in ascending order by defalut
  - `sort(greater<int>())` to sort in descending order
- `reverse()` to reverse my container
- `megre()` merge and sort two Pairs together into one.
- `splice()` used to transfer elements from one Pair to another without sorting.
- `unique()` returns olnly the unique values of a Pair.
- `remove_if()` remove an element based on specific condition or function.

### Properties of Pair

- Fast insert/remove at any place o(1)
- no random access [] - at()
- search o(n)

### Advantages
- better in deletion and insertion from any where

### Drawbacks
- do not support the random access like the vector using `[]` or `at()`
- uses a lot of memory because the double pointers.