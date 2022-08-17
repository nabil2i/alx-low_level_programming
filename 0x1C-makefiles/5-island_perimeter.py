#!/usr/bin/python3
"""calculate the perimeter of an island in a grid."""


def count_water_neighbors(grid, i, j):
    """Returns the number of water neighbors a cell has in a grid."""

    neighbors = 0

    if i <= 0 or not grid[i - 1][j]:
        neighbors += 1
    if j <= 0 or not grid[i][j - 1]:
        neighbors += 1
    if j >= len(grid[i]) - 1 or not grid[i][j + 1]:
        neighbors += 1
    if i >= len(grid) - 1 or not grid[i + 1][j]:
        neighbors += 1

    return neighbors


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += count_water_neighbors(grid, i, j)

    return perimeter
