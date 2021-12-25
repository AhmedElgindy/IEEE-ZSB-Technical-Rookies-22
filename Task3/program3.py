import random
import string

letters = string.ascii_lowercase
c = "".join(random.choice(letters) for i in range(2)) 

letters = string.ascii_uppercase
b = "".join(random.choice(letters) for i in range(4)) 

letters = string.digits
a = "".join(random.choice(letters) for i in range(2)) 

d = "".join(random.choice(['@', '#', '$','%', 
'&']) for i in range(2)) 

print(c+b+a+d)