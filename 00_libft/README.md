<h1 align="center">
	🧰 libft
</h1>

<p align="center">
	<b><i>YOUR VERY FIRST OWN LIBRARY</i></b><br>
</p>

<h3 align="center">
	<a href="#%EF%B8%8F-about">About</a>
	<span> · </span>
	<a href="#%EF%B8%8F-usage">Usage</a>
	<span> · </span>
	<a href="#-testing">Testing</a>
</h3>

---

## 💡 About the project

> _The aim of this project is to code a C library regrouping usual functions that you'll be allowed to use in all your other projects._

	Programming in C can be very tedious when you don't have access to the very useful standard functions.
	This project gives you the opportunity to rewrite those functions to understand them and learn to use them.
	The library will help you for your future projects in C. Through this project, you have the opportunity
	to extend your list of functions in your own way!

For more detailed information, look at the [**subject of this project**](https://github.com/Surfi89/42cursus/tree/main/Subject%20PDFs).

**NOTE:** To be successful with moulinette on this project I had to put all the files in the same directory.
I have just put them in folders and modified the Makefile to have a better organized repository. 
Also, I didn't do the bonus questions :)

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/libft/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/libft/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strlen.c)				- find length of string.
* [`ft_strchr`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strnstr`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strnstr.c)			- locate a substring in a string (size-bounded).
* [`ft_strncmp`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strncmp.c) 			- compare strings (size-bounded).
* [`ft_strdup`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_itoa`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_strmapi.c)			- create new string from modifying string with specified function.
* [`ft_striteri`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_striteri.c)			- 
* [`ft_putchar_fd`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](https://github.com/amnasyedaamirr/42AbuDhabi-Cursus/blob/main/00_libft/ft_putnbr_fd.c)		- output integer to given file.

## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` or `cc`compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

To compile the library, go to its path and run:

For all mandatory functions:

```shell
$ make
```
or 

```shell
$ make all
```

**2. Cleaning all binary (.o) and executable files (.a)**

To clean all files generated while doing a make, go to the path and run:

```shell
$ make fclean
```

**3. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

## 📋 Testing

You can use any of this third party testers to test the project


* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)

## 📚 Grade

<img width="150" alt="100" src="https://user-images.githubusercontent.com/53398372/177986120-99ef711f-befd-43a2-aa5b-2ff536c6b576.png">
