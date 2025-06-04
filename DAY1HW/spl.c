def count_special_characters(s):
    count = 0
    for char in s:
        if not char.isalnum():  # not a letter or digit
            count += 1
    return count

# Input
s = input("Enter the string: ")

# Output
special_count = count_special_characters(s)
print("Number of special characters:", special_count)
