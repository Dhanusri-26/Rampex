def rotate_string(s, n):
    n = n % len(s)  # To handle rotations greater than string length
    return s[n:] + s[:n]

# Input
n = int(input("Enter number of rotations: "))
s = input("Enter the string: ")

# Output
rotated = rotate_string(s, n)
print("Rotated string:", rotated)
