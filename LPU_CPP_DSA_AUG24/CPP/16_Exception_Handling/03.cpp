/*
1. -> exception -> base class for all exceptions in cpp
rarely used directly, but other exception types inherit from this class

2. -> runtime_error -> for the errors that occur at runtime like user input 0 for denominator

3. -> logic_error -> for logical errors in programs like invalid arguments

4. -> out_of_range -> Thrown when accessing elements outside a valid range of a container

5. -> bad_alloc ->throws when the program fails to allocate memory e.g new operator fails like not enough memory to create large objects
e.g -> if a game tries to load too many objects and it runs out of memory

6. -> bad_cast -> Throws when type cast fails
*/