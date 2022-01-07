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


| Simple Container | Sequence Container              | Associative Container | Unordered Container | Adaptive Container |
| :----------------: | :-------------------------------: | :---------------------: | :-------------------:| :------------------: |
| Pair             | Array                           | Map                   | Unordered Map       | Stack              |
|                  | [Vector](1.%20Vector/README.md) | Multimap              | Unordered Multimap  | Queue              |
|                  | Deque                           | Set                   | Unordered Set       | Priority Queue     |
|                  | List                            | Multiset              | Unordered Multiset  |                    |
|                  | Forward List                    |                       |                     |                    |


![](https://i.stack.imgur.com/nZR3T.png)
![](https://media.geeksforgeeks.org/wp-content/uploads/20191111161536/Screenshot-from-2019-11-11-16-13-18.png)