# Weighted Quick-Union with Path Compression in C++

## Summary
Weighted Quick-Union with Path Compression (WQUPC) is my
implementation of a
[disjoint-set data structure](https://en.wikipedia.org/wiki/Disjoint-set_data_structure)
in C++.

## Rationale
I wrote this after taking the [Coursera Algorithms
1](https://www.coursera.org/learn/algorithms-part1/home/welcome) class
from Princeton University.  The class is done in Java, so for fun I decided to write up an implementation in C++.

I thoroughly enjoyed the class and would recommend it to anyone
wanting to brush up on their algorithm skills.

## Design
This is a mini-library consisting of a single class `WQUPC`.  It uses
GNU Autotools and provides a pkg-config file for client ease of use.

The tiny test suite uses
[Google Test](https://github.com/google/googletest).  Make sure you
have the proper include and library paths in CXXFLAGS and LDFLAGS,
respectively.

## Differences with Coursera Java Implementation
Professor Sedgewick uses the method name `union`, which of course is a [keyword](http://en.cppreference.com/w/cpp/keyword/union) in C++.  I therefore opted to use the name `join` instead.

## Colophon
Produced with the [greatest editor in history](https://en.wikipedia.org/wiki/Emacs).

Double-space  
Post full stop  
Proper and Correct  
Just ask your Pop  
\- Burma Shave  
