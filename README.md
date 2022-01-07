# Standard Template Library

---
## 00: Introduction to Standard Template Library

- The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of
  - *container classes*: such as array, stack, queue, list
  - *algorithms*: sort, min, max, swap
  - *iterators*

<center><img src="https://www.codingninjas.com/blog/wp-content/uploads/2020/08/BLOG-23.png" style="height:300px;"></center>

```c++
#include <vector>
#include <iostream>
using namespace std;

vector<int> vec; // container

sort(vec.begin(), vec.end()); // iterator and algorithm

```

### Types of containers:
- **Simple Container**
  - Pair
- **Sequence Container**
  - Array
  - [Vector](1.%20Vector/README.md)
  - Deque
  - List
  - Forward list
- **Associative Container**
  - Map
  - Multimap
  - Set
  - Multiset
- **Unordered Container**
  - unordered Map
  - unordered Multimap
  - unordered Set
  - unordered Multiset
- **Adaptive Container**
  - Stack
  - Queue
  - Priority Queue

![](https://i.stack.imgur.com/nZR3T.png)
![](https://media.geeksforgeeks.org/wp-content/uploads/20191111161536/Screenshot-from-2019-11-11-16-13-18.png)