# Solve Me First

**Difficulty:** Easy  
**Topics:** N/A  
**HackerRank URL:** [Solve Me First](https://www.hackerrank.com/challenges/solve-me-first/problem)

## Problem Description

Complete the function  to compute the sum of two integers.

**Example** **

Return .

Function Description**

Complete the  function with the following parameters:

* : the first value

* : the second value

Returns **
- : the sum of  and

Constraints**

**Sample Input**

```
a = 2
b = 3

```

**Sample Output**

```
5

```

**Explanation**

.

## Examples



## Constraints



## Solution

```cpp
// HackerRank Problem: Solve Me First
// Link: https://www.hackerrank.com/challenges/solve-me-first/problem
// Difficulty: Easy
// Language: cpp

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    int sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;
    return 0;
}

```

---
<div align="center">

**🔄 Synced with [CommitSync](https://www.google.com/search?q=CommitSync+extension)**

*Automatically organized and synced by CommitSync.*

</div>
