def generate_table(alphabet):
    table = []
    for i in range(len(alphabet)):
        row = []
        for j in range(len(alphabet)):
            row.append(alphabet[(i+j) % len(alphabet)])
        table.append(row)
    return table

def vigenere_cipher(text, key, mode='encrypt'):
    alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    table = generate_table(alphabet)
    result = ''
    key_index = 0
    for i in range(len(text)):
        if text[i].isspace():
            result += text[i]
        else:
            x = alphabet.find(text[i].upper())
            y = alphabet.find(key[key_index % len(key)].upper())
            if mode == 'encrypt':
                result += table[x][y]
            else:
                result += alphabet[table[y].index(text[i].upper())]
            key_index += 1
    return result

# Contoh penggunaan
plaintext = input("Masukkan plaintext: ")
key = input("Masukkan key: ")

ciphertext = vigenere_cipher(plaintext, key)
print("Ciphertext:", ciphertext)

decrypted_text = vigenere_cipher(ciphertext, key, mode='decrypt')
print("Decrypted text:", decrypted_text)

print("\n@Created By Muhamad Fadhli Akbar - Praktikan Keamanan Komputer 2024")