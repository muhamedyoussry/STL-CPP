# Forward List

Forward Lists (Singly Linked Forward List) are STL *sequence* container are more useful than other containers in insertion, removal and moving operations (like sort) and allows time constant insertion and removal of elements. 

## Forward List Characterstics

1. **Fast insert/remove at the front**
2. *no suppport for random access*
3. *Slow search*


## Forward List Methods

### Forward List Modifiers
- `push_front()` push an element to the front of the Forward List.
- `pop_front()` remove an element from a Forward List from the front.
- `emplace()_front` emplace is like push front but faster and better in memory space.
- `emplace()_after` like the insert_after finction; it inserts an element after the element with the specified location.
- `insert_after()` insert an element after the element with the specified location.
- `assign()` assign new elements to Forward List by replacing current elements and resizes the Forward List.
- `remove()` removes all the elements from the forward list, which are equal to given element.


### Element access
- `erase_after()` remove element after a specific location (the location should be an iterator).
- `before_begin()` give you the location of the element that before the start location.
- `next()` access the next element after the given iterator. Also, you can specify how many steps to move.

### Capacity
- `max_size()` returns number of the maximum elements that can be inserted to this List.
- `empty()` returns whether the Forward List is empty.

### Forward List Iterators
- `begin()` return an iterator pointing to the first element in the Forward List.
- `end()` return an iterator poniting to the theoritical element that follows the last element in Forward List.

### Functions
- `sort()` to sort my container in ascending order by defalut
  - `sort(greater<int>())` to sort in descending order
- `reverse()` to reverse my container
- `megre()` merge and sort two Forward Lists together into one.
- `splice_after()` used to transfer elements from one Forward List to another without sorting.
- `unique()` returns olnly the unique values of a Forward List.
- `remove_if()` remove an element based on specific condition or function.

### Properties of Forward List
- Fast insert/remove at the front o(1)
- no random access [] - at()
- search o(n)

### Advantages
- better in deletion and insertion from the front
- less space memory than list (doubly linked list)

### Drawbacks
- do not support insertion and deletion from back.
- it cannot be iterated backwards
- its individual elements cannot be accessed directly using `[]` or `at()`
- have no `it--`; cannot go back in the iterator just go forwards 