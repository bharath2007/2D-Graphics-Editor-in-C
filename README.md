# 2D Graphics Editor in C

## Overview

This project is a simple menu-driven 2D graphics editor developed in C. It uses a two-dimensional character array to represent a drawing canvas and supports basic operations on graphical objects.

The editor uses:

- `*` for drawing objects
- `_` for empty spaces

## Features

- Draw Rectangle
- Draw Line
- Draw Triangle
- Draw Circle
- Add objects to the picture
- Delete objects from the picture
- Modify objects in the picture
- Display the picture

## Concepts Used

- Arrays
- Functions
- Loops
- Conditional Statements
- Character Graphics
- Basic Geometry

## Functions Implemented

| Function | Purpose |
|------------|---------|
| initialize() | Creates an empty canvas |
| display() | Displays the picture |
| rectangle() | Draws a rectangle |
| line() | Draws a line |
| triangle() | Draws a triangle |
| circle() | Draws a circle |
| deleteRectangle() | Removes a rectangle from the picture |

## Requirements

- GCC Compiler
- VS Code (optional)

## Compilation

```bash
gcc filename.c -o graphics
```

If math functions are used:

```bash
gcc filename.c -o graphics -lm
```

## Execution

Windows:

```bash
graphics.exe
```

Linux:

```bash
./graphics
```

## Sample Menu

```
1. Draw Rectangle
2. Draw Line
3. Draw Triangle
4. Draw Circle
5. Delete Rectangle
6. Display Picture
7. Exit
```

## Applications

- Understanding 2D graphics fundamentals
- Learning character-based graphics
- Educational and laboratory purposes
- Practicing arrays and functions in C

## Author

Bharath A  
B.Tech Computer Science and Information Technology  
REVA University
