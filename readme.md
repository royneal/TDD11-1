# Week 4 Test Driven Development - PID Controller
[![Build Status](https://travis-ci.org/rdumont36/TDD11.svg?branch=master)](https://travis-ci.org/rdumont36/TDD11)
[![Coverage Status](https://coveralls.io/repos/github/rdumont36/TDD11/badge.svg?branch=master)](https://coveralls.io/github/rdumont36/TDD11?branch=master)
---

## Authors

Part 1: @rdumont36 Solo (Group of 3)
Part 2: @royneal Driver 
	@shivaang12 Navigator 

## UML Diagram

[Available online as an image](https://drive.google.com/file/d/101eZGlcmx3B5cjUZktztFfm26cpdheR4/view?usp=sharing)

## Building and Running Tests
```
git clone --recursive https://github.com/rdumont36/TDD11.git
cd TDD11
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
```

## TODO (Discussion Notes)
```
implementing positive and negative test cases is a good 
practice that can often improve the chance of catching problems. 

test cases here cover the basics, however one convergence test with velocity step up will pass easily with dt being deterministicly set to 0.1 . in a proper implementation where dt is read from system time and varies between runs having a single step test is not adequate.

i suggest the addition of a step down test,  as a negative test to your test case.

i suggest the additon of a pulse test, where both step tests are combined to step up then step down with out reaching steady state in between. steady state would be returning to the initial setpoint without diverging.

i suggest testing the implementation for negative inputs as well, often sensors like digital compasses or IMUs read out positive and negative values. 
thus implementing the above step tests in a negative direction will provide with the extra
corner cases needed for full coverage.  
 
```
