# Practice with Pointers

In C, pointers are an essential data type which allow us to pass data *by
reference*, rather than *by value*. This enables us to write functions that
alter the parameters they are given.


## String Functions

One common use for pointers is iterating through arrays. Recall that in C,
Strings are arrays of characters. 

For this activity, you will use pointers to implement the following String
manipulation functions:

* `my_strcat(s, t)`: A function that concatenates the string `t` to the end of `s`
* `my_strend(s, t)`: A function that returns 1 if the string `t` occurs
 and the end of the string `s`, and zero otherwise
* `my_strncpy(s, t, n)`: A function that copies at most the first `n` characters
of `t` to `s`

Note that all of these are real String manipulation functions in C, and they're
all incredibly insecure! So you will implement these as a learning exercise, but
don't use them in real life.

## Deliverables

**Executable Name:** string_funcs

* String Functions: You must implement your String functions in `string_funcs.c`
* Test: You should test to make sure your implementations work! No assert tests
 necessary, but modify `test.c` to print the results of your functions.
* Makefile: You must create a makefile that includes targets for `string_funcs`
 and `clean`

### Example Code

This exercise comes from Chapter 5 of Kernighan & Ritchie, which you read for
class. Your starter code includes the book array- and pointer-based
implementation for `strcpy(s, t)`, to get you started with manipulating strings.

The pointer implementation of `strcpy` has two versions: the explicit version
(uncommented) and simplified version (commented out). For a challenge, write
simplified solutions for each of your functions!
