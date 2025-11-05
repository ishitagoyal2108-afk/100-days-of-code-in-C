def length_of_longest_substring_without_repeating_characters(s: str) -> int:
    """
    Calculates the length of the longest substring without repeating characters.

    Args:
        s: The input string.

    Returns:
        The length of the longest substring without repeating characters.
    """
    if not s:
        return 0

    max_length = 0
    start = 0
    char_index_map = {}  # Stores the last seen index of each character

    for end in range(len(s)):
        char = s[end]
        if char in char_index_map and char_index_map[char] >= start:
            # If the character is already in the current window,
            # move the start of the window to the position after its last occurrence.
            start = char_index_map[char] + 1
        
        # Update the last seen index of the current character
        char_index_map[char] = end
        
        # Calculate the current substring length and update max_length if necessary
        max_length = max(max_length, end - start + 1)

    return max_length

if __name__ == "__main__":
    input_string = input("Enter a string: ")
    result = length_of_longest_substring_without_repeating_characters(input_string)
    print(f"The length of the longest substring without repeating characters is: {result}")
