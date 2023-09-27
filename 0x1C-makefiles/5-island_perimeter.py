#!/usr/bin/python3
"""Defines a function that returns the perimeter of the island."""


def island_perimeter(grid):
    """Returns the perimiter of an island.
    Args:
        grid (list): A list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for d in range(height):
        for j in range(width):
            if grid[d][j] == 1:
                size += 1
                if (j > 0 and grid[d][j - 1] == 1):
                    edges += 1
                if (d > 0 and grid[d - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
