#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    int single_element_array[] = {5};
    int mixed_array[] = {-10, -5, 0, 5, 10};
    int duplicate_array[] = {1, 1, 2, 2, 3, 3};
    int positive_array[] = {1, 2, 3, 4, 5};
    int negative_array[] = {-5, -4, -3, -2, -1};
    int mixed_all_array[] = {-3, -2, -1, 0, 1, 2, 3};
    int single_element_array2[] = {5};

    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Expected: Found 8 at index: 8\n");
    printf("Found %d at index: %d\n", 8, advanced_binary(array, size, 8));

    printf("Expected: Found 5 at index: 3\n");
    printf("Found %d at index: %d\n", 5, advanced_binary(array, size, 5));

    printf("Expected: Found 999 at index: -1\n");
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));

    size = 1;
    printf("Expected: Found 5 at index: 0\n");
    printf("Found %d at index: %d\n", 5, advanced_binary(single_element_array, size, 5));

    size = sizeof(mixed_array) / sizeof(mixed_array[0]);
    printf("Expected: Found -5 at index: 1\n");
    printf("Found %d at index: %d\n", -5, advanced_binary(mixed_array, size, -5));

    size = sizeof(duplicate_array) / sizeof(duplicate_array[0]);
    printf("Expected: Found 2 at index: 2\n");
    printf("Found %d at index: %d\n", 2, advanced_binary(duplicate_array, size, 2));

    size = sizeof(positive_array) / sizeof(positive_array[0]);
    printf("Expected: Found 3 at index: 2\n");
    printf("Found %d at index: %d\n", 3, advanced_binary(positive_array, size, 3));

    size = sizeof(negative_array) / sizeof(negative_array[0]);
    printf("Expected: Found -3 at index: 2\n");
    printf("Found %d at index: %d\n", -3, advanced_binary(negative_array, size, -3));

    size = sizeof(mixed_all_array) / sizeof(mixed_all_array[0]);
    printf("Expected: Found 2 at index: 5\n");
    printf("Found %d at index: %d\n", 2, advanced_binary(mixed_all_array, size, 2));

    size = 1;
    printf("Expected: Found 5 at index: 0\n");
    printf("Found %d at index: %d\n", 5, advanced_binary(single_element_array2, size, 5));

    printf("Expected: Found -2147483648 at index: 0\n");
    printf("Found %d at index: %d\n", INT_MIN, advanced_binary(negative_array, size, INT_MIN));

    printf("Expected: Found 2147483647 at index: -1\n");
    printf("Found %d at index: %d\n", INT_MAX, advanced_binary(positive_array, size, INT_MAX));

    printf("Expected: Found -6 at index: -1\n");
    printf("Found %d at index: %d\n", -6, advanced_binary(mixed_all_array, size, -6));

    printf("Expected: Found 4 at index: -1\n");
    printf("Found %d at index: %d\n", 4, advanced_binary(mixed_all_array, size, 4));

    printf("Expected: Found 100 at index: -1\n");
    printf("Found %d at index: %d\n", 100, advanced_binary(mixed_all_array, size, 100));

    printf("Expected: Found -100 at index: -1\n");
    printf("Found %d at index: %d\n", -100, advanced_binary(mixed_all_array, size, -100));

    printf("Expected: Found -3 at index: 0\n");
    printf("Found %d at index: %d\n", -3, advanced_binary(mixed_all_array, size, -3));

    printf("Expected: Found 3 at index: 6\n");
    printf("Found %d at index: %d\n", 3, advanced_binary(mixed_all_array, size, 3));

    printf("Expected: Found 5 at index: 3\n");
    printf("Found %d at index: %d\n", 5, advanced_binary(array, size, 5));

    return (EXIT_SUCCESS);
}

