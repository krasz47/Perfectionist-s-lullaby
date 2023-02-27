# Perfectionist-s-lullaby
An esolang? (not a clue) but it's a stupidly complicated language I decided to develop for a programming challenge just to mess with people and it actually seems to work pretty well! Kinda. The name is such as it's pretty much obligatory to write messages letter by letter as reordering and rearranging pieces in the stack is extremely unefficient


------
### What is it?
It's a silly language that works based on a stack (like an array), that initially holds a single elemnt of which the value = 0000 0000 (1 binary byte)

### The Commands
The language features 8 operations
1. + :  Increments the value of the last element by 1.
2. - :  Decrements the value of the last element by 1.
3. ^ :  Moves the first element to the top of the stack and moves each other element down.
4. ? :  Switches the first and the last element of the stack with each other.
5. * :  Duplicates the last element and puts it at the end of the stack.
6. | :  Inverts each bit in the last element (The 1s complement).
7. ~ :  Switches the first 4 bits of a byte with its last 4 bits (e.g. 1001 0110 becomes 0110 1001).
8. . :  Prints out every stack element's value in ASCII, from left to right
