result = input("Enter the result string: ")
input_str = input("Enter the input string: ")

key = list(input_str)

for i in range(len(result)):
    if not(input_str[i].isalpha()):
        continue
    key[i] = chr((ord(result[i]) - ord(input_str[i]) + 26) % 26 + ord('A'))

print("Decrypted key:", "".join(key))