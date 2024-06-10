##Divide and Merge Algorithm
*Steps to apply merge sort:*
1. Divide: The list is split into two rougly equal halves sublists, one containing the elements before the middle index and other containing elements from the middle 
index. Splitting is done till the array size becomes one
2. Merge: In this step, we recursively apply the Merge Sort algorithm to each of the two sublists we created in the previous step. This means we merge the sublists starting from bottom to top in a sorted manner
3. Combine: Once all the sublists are sorted, we start merging them. This is done in pairs, with each pair of sublists being merged into a single sorted list. This merging process is repeated until there is only one list left, which is the sorted version of the original unsorted list.
# TIME COMPLEXITY:
O(NLOGN)
# SPACE COMPLEXITY:
O(N)