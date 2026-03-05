# Unions

## What is a `Union`
- user defined datatype
- a collection of elements or variables that are kind of being held in the region in the memory

from AI


Union in C is a user-defined data type very similar to struct, but with one key difference:

All members of a union share the same memory location.

This means:

The size of a union is equal to the size of its largest member (not the sum of all members like in a struct).
Only one member can hold a meaningful value at a time.
When you write to one member, you overwrite the data of all other members.