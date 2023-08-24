#!/usr/bin/python3
"""defines a function for calculating the size of an island."""


def island_perimeter(grid):
    """The island's perimeter should be returned.
    In the grid, land is represented by 1, and water by 0.
    Args:
        grid (list): a list of lists depicting islands as lists of integers.
    Returns:
        the island's grid-described perimeter.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2