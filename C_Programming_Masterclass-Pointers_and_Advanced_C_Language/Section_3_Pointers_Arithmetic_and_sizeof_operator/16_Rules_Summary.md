# Rules - Summary

## Pointer Arithmetic - Rules

1. Addition of `address` and `integer`

- `new_address = previous_address + integer`

- `new_address = previous_address + integer*sizeof(type)`

2. Subtraction of `address` and `integer`

- `new_address = previous_address - integer`

- `new_address = previous_address - integer*sizeof(type)`

3. `Address` - `Address` = `Integer`

- how far they are located from each other in the real memory
- basically distance?

AI


C assumes that if you are subtracting pointers, you are trying to find out how many "slots" in an array separate them, not how many raw bytes.


3. Real-World Use: Finding String Length
4. 
This is exactly how functions like strlen() work under the hood. 
They find the address of the start of the string and the address of the null terminator , then subtract them to find the count of characters.


```c
char name[] = "C-Pointer";
char *start = &name[0];
char *end = &name[9]; // The \0 character

printf("Length: %td\n", end - start); // Output: 9
```