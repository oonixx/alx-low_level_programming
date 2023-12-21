#!/usr/bin/python3
"""Defines the island perimeter measuring function."""


def island_perimeter(grid):
    """Return perimiter of the island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): The list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for index in range(height):
        for ji in range(width):
            if grid[index][ji] == 1:
                size += 1
                if (ji > 0 and grid[index][ji - 1] == 1):
                    edges += 1
                if (index > 0 and grid[index - 1][ji] == 1):
                    edges += 1
    return size * 4 - edges * 2
