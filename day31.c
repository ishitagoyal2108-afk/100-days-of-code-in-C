def linear_search(arr, target):
    """
    Searches for a target element in an array using linear search.

    Args:
        arr: The list or array to search within.
        target: The element to search for.

    Returns:
        The index of the target element if found, otherwise -1.
    """
    for i in range(len(arr)):
        if arr[i] == target:
            return i  # Return the index if the target is found
    return -1  # Return -1 if the target is not found

# Example usage:
my_array = [4, 2, 7, 1, 9, 5]
search_target = 7
result = linear_search(my_array, search_target)

if result != -1:
    print(f"Element {search_target} found at index {result}")
else:
    print(f"Element {search_target} not found in the array")

search_target_not_found = 10
result_not_found = linear_search(my_array, search_target_not_found)
if result_not_found != -1:
    print(f"Element {search_target_not_found} found at index {result_not_found}")
else:
    print(f"Element {search_target_not_found} not found in the array")
