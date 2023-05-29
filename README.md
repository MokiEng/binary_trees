# Binary Trees in C

This repository contains a simple implementation of binary trees in the C programming language. It provides functions to create, traverse, and manipulate binary trees.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A binary tree is a data structure that consists of nodes, where each node has at most two children: a left child and a right child. It forms a hierarchical structure that allows efficient searching, insertion, and deletion operations.

This implementation provides the basic functionalities for working with binary trees. It includes functions to create a new tree, insert nodes, search for values, and traverse the tree using pre-order, in-order, and post-order traversal techniques.

## Features

- Creation of an empty binary tree
- Insertion of nodes with a specified value
- Searching for a value in the tree
- Pre-order, in-order, and post-order traversal
- Deletion of nodes
- Memory management to avoid memory leaks

## Usage

To use the binary tree implementation in your C project, follow these steps:

1. Clone this repository or download the source code.
2. Include the `binary_tree.h` header file in your C program.
3. Compile your program with the `binary_tree.c` source file.

```c
#include "binary_tree.h"

int main() {
    // Create a new binary tree
    struct Node* root = NULL;

    // Insert nodes
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);

    // Perform operations on the tree

    return 0;
}
```

Refer to the function definitions and comments in `binary_tree.c` for detailed information on each function and its usage.

## Examples

This repository includes an `examples` directory with sample programs that demonstrate the usage of the binary tree implementation. You can compile and run these examples to see the binary tree functionalities in action.

To compile an example program, use the following command:

```
gcc examples/example.c binary_tree.c -o example
```

Then, run the executable:

```
./example
```

## Contributing

Contributions to this repository are welcome! If you find any issues, have suggestions for improvements, or want to add new features, feel free to submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code according to your needs.

