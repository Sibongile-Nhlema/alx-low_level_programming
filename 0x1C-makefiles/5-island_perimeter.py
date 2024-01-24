#!/usr/bin/python3
''' Module for the island_perimeter '''


def island_perimeter(grid):
    '''
    The function calculates the perimeter of an island.
    0- represents a water zone
    1- represents a land zone
    One cell is a square with side length 1
    Grid cells are connected horizontally/vertically (not diagonally)
    Grid is rectangular, width and height don’t exceed 100

    Args:
        grid: lists of lists
    Return:
        perimeter of the island
    '''
    perimeter = 0

    # iterate through each list
    for i in range(len(grid)):
        # iterate through each item in the inner list
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # check surrounding cells
                # top
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # bottom
                if i == len(grid)-1 or grid[i+1][j] == 0:
                    perimeter += 1
                # left
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # right
                if j == len(grid[i])-1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter
