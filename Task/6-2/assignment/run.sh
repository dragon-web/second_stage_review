#!/bin/bash

# CD to the assignment directory
cd ./assignment

# make the project
make

# CD to the upper level directory
cd ..

# Run the assignment
./assignment/problem_6  $(python -c 'print("BUFFER & CODE HERE")')

