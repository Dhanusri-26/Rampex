def count_uppercase_characters(input_string):
    count = 0
    for char in input_string:
        if char.isupper():
            count += 1
    return count


input_string = input("Enter a string: ")  # e.g., "aPPle"
uppercase_count = count_uppercase_characters(input_string)
print("Number of uppercase characters:", uppercase_count)
