def replace_vowels_with_asterisks(s):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in s:
        if char in vowels:
            result += '*'
        else:
            result += char
    return result

# Input
s = input("Enter a string: ")

# Output
print("Output:", replace_vowels_with_asterisks(s))
