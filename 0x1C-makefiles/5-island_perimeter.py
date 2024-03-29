#!/usr/bin/python3
"""Returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid

    Args:
        grid (List[List[int]]): A 2D list representing the island.
            0 represents a water zone, and 1 represents a land zone.

    Return:
        int: The Perimeter(p) of the Island

    Requirements:
        grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water
        there is one island (or nothing).
        The island doesn’t have “lakes”
        Prototype: def island_perimeter(grid):
    """
    p = 0

    # Iterate through the rows and columns of grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                p += 4

                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2

                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2

    return (p)
