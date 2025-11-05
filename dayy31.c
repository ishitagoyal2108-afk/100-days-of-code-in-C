def reverse_array_in_place(arr):
    start = 0
    end = len(arr) - 1

    while start < end:
        # Swap elements at start and end pointers
        arr[start], arr[end] = arr[end], arr[start]

        # Move pointers towards the center
        start += 1
        end -= 1
    return arr

# Example usage:
my_array = [1, 2, 3, 4, 5]
reversed_array = reverse_array_in_place(my_array)
print(f"Reversed array: {reversed_array}") # Output: Reversed array: [5, 4, 3, 2, 1]
