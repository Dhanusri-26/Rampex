def display_as_password(user_input):
    masked = '*' * len(user_input)
    return masked

# Accept input from the user
original_input = input("Enter your password: ")

# Display password format
print("Password format:", display_as_password(original_input))

# The original string is still stored if needed
# print("Original string (not shown to user):", original_input)
