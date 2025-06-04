def search_character_in_string(char, string):
    if char in string:
        return "present"
    else:
        return "not present"


char = input("Enter a character to search: ")
string = input("Enter the string: ")


char = char[0]  

result = search_character_in_string(char, string)
print(result)
