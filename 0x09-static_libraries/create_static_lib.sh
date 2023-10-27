#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into a corresponding .o file
for file in $c_files; do
    gcc -c "$file"
done

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm -f *.o

echo "Static library liball.a created from .c files."

