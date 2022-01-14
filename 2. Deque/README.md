# Deque

Deques (Double Ended Queues) are STL *sequence* containers same as dynamic arrays with the feature of expansion and contraction on both the ends (front and back).

Similar to vector but more effecint in case of insertion and deletion of elemens.
 
## Deque Characterstics

1. **Fast insert/remove at the front and the end**
2. *Slow insert/remove at at the middle*
3. *Slow search*

- try to pass an iterator to your functions to make it faster. for example `v.insert(v.begin()+1 , 5)`


## Deque Methods

### Deque Modifiers
- `push_back()` push an element to the back of the Deque.
- `push_front()` push an element to the front of the Deque.
- `pop_back()` remove an element from a Deque from the back.
- `pop_front()` remove an element from a Deque from the front.
- `swap()` It is used to swap the contents of one Deque with another Deque of same type. Sizes may differ.


### Element access
- `front()` returns the first element of a Deque.
- `back()` returns the last element of a Deque.
- `at(x)` returns the value in the position of `x`.
- `insert()` insert an element before the element with the specified location.
- `emplace()` emplace is like insert but faster.
- `emplace()_back` emplace is like push back but faster.
- `emplace()_front` emplace is like push front but faster.
- `erase()` remove element from a specific location (the location should be an iterator) or range.
- 

### Capacity
- `size()` returns the number of elements in the Deque.
- `capacity()` returns the size of the storage space allocated for the Deque.
- `max_size()` returns number of the maximum elements that can be inserted to this Deque.
- `empty()` returns whether the Deque is empty.
- `resize(n)` resize the container to `n` elements.
- `shrink_to_fit()` make the capacity of the container to fit the container size and destroy all elements after the last element of my container.

### Deque Iterators
- `begin()` return an iterator pointing to the first element in the Deque.
- `end()` return an iterator poniting to the theoritical element that follows the last element in Deque. So, to reach the last element you can access ut using `Deque,end() - 1`.
- `rbegin()` returns a reverse iterator pointing to the last element in the Deque (reverse beginning). It moves from last to first element.
- `rend()` returns a reverse iterator pointing to the theoretical element.

### Functions
- `sort()` to sort my container in ascending order by defalut
  - `sort(v.rbegin(), v.rend())` to sort in descending order
- `reverse()` to reverse my container
- `min_element()` to get the minimum address - to access put the * -
- `max_element()` to get the minimum address - to access put the * -
- `minmax_element()` to get the min and max of a container by access the first and second elements from this function - to access put the * -
- `copy()` to copy an array/Deque to my Deque.
- `copy(s.begin(), s.end(), ostream_iterator<char>(cout));` to print my Deque without loop.
- `find()` to find an iterator of an element in a Deque, to find the element index in a Deque you can use `it - v.begin()`.

### Properties of Deque

- Add to the back and add to the front in o(1) `push_back()`, ``push_front()`
- delete from the back and delete from the front in o(1) `pop_back()`, `pop_front()`
- add to any where in the Deque o(n)
- delete from any where in the Deque o(n)
- access any where o(1)
- search using `find()` o(n)

### Advantages
- implemented as dynamic array
- better than vector in push and pop from the front.

### Drawbacks
- Expensive reallocation
- require contiguous memory