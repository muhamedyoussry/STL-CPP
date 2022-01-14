# List

Lists (Double Linked List) are STL *sequence* container that allow non-contiguous memory allocation. As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally, when we say a List, we talk about doubly linked list. For implementing a singly linked list, we use forward list
 
## List Characterstics

1. **Fast insert/remove at any place**
2. *no suppport for random access*
3. *Slow search*


## List Methods

### List Modifiers
- `push_back()` push an element to the back of the List.
- `push_front()` push an element to the front of the List.
- `pop_back()` remove an element from a List from the back.
- `pop_front()` remove an element from a List from the front.
- `remove()` removes all the elements from the list, which are equal to given element.
- `assign()` assign new elements to list by replacing current elements and resizes the list.


### Element access
- `front()` returns the first element of a List.
- `back()` returns the last element of a List.
- `insert()` insert an element before the element with the specified location.
- `emplace()` emplace is like insert but faster.
- `emplace()_back` emplace is like push back but faster.
- `emplace()_front` emplace is like push front but faster.
- `erase()` remove element from a specific location (the location should be an iterator) or range.
- 

### Capacity
- `max_size()` returns number of the maximum elements that can be inserted to this List.
- `empty()` returns whether the List is empty.

### List Iterators
- `begin()` return an iterator pointing to the first element in the List.
- `end()` return an iterator poniting to the theoritical element that follows the last element in List. So, to reach the last element you can access ut using `List,end() - 1`.
- `rbegin()` returns a reverse iterator pointing to the last element in the List (reverse beginning). It moves from last to first element.
- `rend()` returns a reverse iterator pointing to the theoretical element.

### Functions
- `sort()` to sort my container in ascending order by defalut
  - `sort(greater<int>())` to sort in descending order
- `reverse()` to reverse my container
- `megre()` merge and sort two lists together into one.
- `splice()` used to transfer elements from one list to another without sorting.
- `unique()` returns olnly the unique values of a list.
- `remove_if()` remove an element based on specific condition or function.

### Properties of List

- Fast insert/remove at any place o(1)
- no random access [] - at()
- search o(n)

### Advantages
- better in deletion and insertion from any where

### Drawbacks
- do not support the random access like the vector using `[]` or `at()`
- uses a lot of memory because the double pointers.