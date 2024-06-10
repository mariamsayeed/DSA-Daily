*Steps to apply quick sort algorithm:*
1. Choose a pivot element from the array. It can be 1st element of the array, last element of the array, median or any random element of the array. And place it at it's correct place
2. Rearrange elements in the array so that all elements less than the pivot are to its left and all elements greater than the pivot are to its right. After this step, the pivot is in its correct position
3.  Apply the above steps recursively to the sub-array of elements with smaller values and separately to the sub-array of elements with greater values


>The main intention of this process is to place the pivot, after each recursion call, at its final position, where the pivot should be in the final sorted array

# TIME COMPLEXITY:
 O(NLOGN)
# SPACE COMPLEXITY:
 O(1)+O(N) auxiliary stack space