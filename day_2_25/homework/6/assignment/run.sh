#!/bin/bash

# CD to the assignment directory
cd ./assignment

# make the project
make

# CD to the upper level directory
cd ..

# Run the assignment
./assignment/flawed-program  $(python -c 'print("BUFFER & CODE HERE")')

