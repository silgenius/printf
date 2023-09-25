# Custom printf() Function

This project aims to create a custom implementation of the `printf()` function in C. The goal is to replicate the basic functionality of the standard `printf()` while gaining a deeper understanding of variable argument lists and string formatting.

## Table of Contents

- [Project Overview](#project-overview)
- [Features](#features)
- [Usage](#usage)
- [Implementation Details](#implementation-details)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Authors

- Martin Olutade
- Nwamana Greatness

## Project Overview

In this project, we will be building our own version of the `printf()` function, which is responsible for formatted output in C. This will involve handling various format specifiers, such as `%d`, `%s`, `%c`, and more, as well as dealing with a variable number of arguments.

## Features

- [x] Basic format specifiers (%d, %s, %c, %f, etc.)
- [x] Variable argument handling
- [x] Error handling for incorrect format strings
- [x] Memory management for strings
- [ ] Additional format specifiers (optional)
- [ ] Optimization (optional)

## Usage

To use the custom `printf()` function, include the header file and link the corresponding source file in your project. Then, call the function with a format string and the respective arguments.

```c
#include "main.h"

int main() {
    int num = 42;
    char* str = "Hello, World!";
    
    custom_printf("Number: %d, String: %s\n", num, str);
    
    return 0;
}

