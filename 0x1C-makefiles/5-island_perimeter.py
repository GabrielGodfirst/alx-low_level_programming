#!/usr/bin/python3

"""
This module provides a function to calculate the perimeter of an island
in a grid.

The grid represents an island where:
- 0 represents a water zone
- 1 represents a land zone
- Each cell is a square with side length 1
- Grid cells are connected horizontally/vertically (not diagonally)
- Grid is rectangular, width and height don’t exceed 100
- Grid is completely surrounded by water, and there is one island (or nothing)
- The island doesn’t have “lakes” (water inside that isn’t connected to the
  water around the island)
"""


def island_perimeter(grid):

    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid: A list of list of integers representing the island grid.

    Returns:
    - The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
