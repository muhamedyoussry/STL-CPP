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


| Simple Container |  Sequence Container   | Associative Container | Unordered Container | Adaptive Container |
| :--------------: | :-------------------: | :-------------------: | :-----------------: | :----------------: |
|       Pair       |         Array         |          Map          |    Unordered Map    |       Stack        |
|                  | [Vector](1.%20Vector) |       Multimap        | Unordered Multimap  |       Queue        |
|                  |  [Deque](2.%20Deque)  |          Set          |    Unordered Set    |   Priority Queue   |
|                  |         List          |       Multiset        | Unordered Multiset  |                    |
|                  |     Forward List      |                       |                     |                    |

----

1. I used [Geeks for Geeks](https://www.geeksforgeeks.org/the-c-standard-template-library-stl/) as a supporting material to study this topic.
2. I studied from Adel Nasim Youtube Channel from [STL Library playlist](https://www.youtube.com/playlist?list=PLCInYL3l2AainAE4Xq2kdNGDfG0bys2xp)