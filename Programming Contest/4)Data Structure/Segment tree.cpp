/*
# Pseudocode for building a segment tree

# Initialize the segment tree with a size large enough to hold all elements of the input array
function buildSegmentTree(tree, arr, node, start, end):
    if start == end:
        # Leaf node: store the element itself
        tree[node] = arr[start]
    else:
        # Recursive calls to build left and right subtrees
        mid = (start + end) / 2
        left_node = 2 * node
        right_node = 2 * node + 1

        buildSegmentTree(tree, arr, left_node, start, mid)
        buildSegmentTree(tree, arr, right_node, mid + 1, end)

        # Combine the results from the left and right subtrees (e.g., for sum, add the values)
        tree[node] = tree[left_node] + tree[right_node]

# Pseudocode for a range query operation (e.g., sum of elements in a range)
function query(tree, node, start, end, query_start, query_end):
    if query_start > end or query_end < start:
        # The query range is completely outside the current node's range
        return 0  # For sum operation, return 0

    if query_start <= start and query_end >= end:
        # The current node's range is completely inside the query range
        return tree[node]

    # The query range partially overlaps with the current node's range
    mid = (start + end) / 2
    left_node = 2 * node
    right_node = 2 * node + 1

    left_result = query(tree, left_node, start, mid, query_start, query_end)
    right_result = query(tree, right_node, mid + 1, end, query_start, query_end)

    # Combine the results from the left and right subtrees (e.g., for sum, add the values)
    return left_result + right_result
*/
#include<iostream>
using namespace std;
struct SegmentTree{
      int N1,N2;
      int minimumValue;
      struct SegmentTree *left;
      struct SegmentTree *right;
};
struct SegmentTree *root;

int main(){


    return 0;
}