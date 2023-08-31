#!/usr/bin/python3
"""Defines the perimeter measuring function of the island"""

def island_perimeter(grid):
    """return the perimeter of the island

    The grid represents water by 0 and land by 1.

    Args:
        grid (lists): A list of integers representing the island.
    Returns:
        The perimeter of the island described in grid."""
    width = len(grid[0])
    height = len(grid)
    egdes = 0
    size = 0
    
    for i in range(height):
        for l in range(width):
            if grid[i][l] ==1:
                size += 1:
                if (l > 0 and grid[i][l - 1] ==1):
                    edges += 1
                if (i > 0 and grid[i - 1][l] ==1):
                    edges += 1
    return size * 4 - edges * 2
