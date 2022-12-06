# C - Bit Manipulation
Basic to intermediate tasks to help understand how to manipulate bits and use bitwise operators
___
## 0-binary\_to\_uint.c
A function that converts a binary number to an unsigned int. <br> Where b is pointing to a string of 0 and 1 chars <br> Return: the converted number, or 0 if:
* There is one or more chars in the string b that is not 0 or 1
* b is NULL
## 1-print\_binary.c
A function that prints the binary representation of a number.
* You are not allowed to use arrays
* You are not allowed to use malloc
* You are not allowed to use the % or / operators
## 2-get\_bit.c
A function that returns the value of a bit at a given index
* where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured
## 3-set\_bit.c
A function that sets the value of a bit to 1 at a given index.
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred
## 4-clear\_bit.c
A function that sets the value of a bit to 0 at a given index.
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred
## 5-flip\_bits.c
A function that returns the number of bits you would need to flip to get from one number to another
* You are not allowed to use the % or / operators
## 100-get\_endianness.c
A function that checks the endianness.
* Returns: 0 if big endian, 1 if little endian
