def insert_into_sorted_array(arr, element):
    # Find the insertion point
    insertion_index = 0
    while insertion_index < len(arr) and arr[insertion_index] < element:
        insertion_index += 1

    # Shift elements to the right
    arr.append(None)  # Extend the array to make space for the new element
    for i in range(len(arr) - 1, insertion_index, -1):
        arr[i] = arr[i - 1]

    # Insert the element
    arr[insertion_index] = element
    return arr

# Example usage:
my_array = [1, 3, 5, 7, 9]
new_element = 4
updated_array = insert_into_sorted_array(my_array, new_element)
print(updated_array)
