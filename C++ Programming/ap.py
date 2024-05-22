from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
import binascii

key = b"YELLOW SUBMARINE"
ciphertext_hex = "38b3eff8f23976024bc68d2a24b7b3502b6b350d2b51774848d"
ciphertext = binascii.unhexlify(ciphertext_hex)

cipher = AES.new(key, AES.MODE_ECB)
plaintext = unpad(cipher.decrypt(ciphertext), AES.block_size)

print(plaintext.decode('utf-8'))

