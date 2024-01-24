#!/usr/bin/python3
"""contains function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    perimeter = 0
    gridlength = len(grid) - 1
    gridwidth = len(grid[0]) - 1

    for s1, s2 in enumerate(grid):
        for j1, j2 in enumerate(s2):
            if j2 == 1:
                if s1 == 0 or grid[s1 - 1][j1] != 1:
                    perimeter += 1
                if j1 == 0 or grid[s1][j1 - 1] != 1:
                    perimeter += 1
                if j1 == gridwidth or grid[s1][j1 + 1] != 1:
                    perimeter += 1
                if s1 == gridlength or grid[s1 + 1][j1] != 1:
                    perimeter += 1

    return perimeter
