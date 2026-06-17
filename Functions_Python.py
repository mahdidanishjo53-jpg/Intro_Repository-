# 1. Execute the round form of all the numbers below.

import math
import random

x = 24.23432
result = round(x, 2)
print("The rounded value is: ", result)

y = 12.21
resulty = round(y)
print(resulty)
r = 32.12321
resultr = round(r,1)
print(resultr)
z = 90.23121
resultz = round(z,4)
print(resultz)
a = 23.21321
resulta = round(a,5)
print(resulta)
u = 89.34223
resultu = round(u)
print(resultu)
p = 21.123212
resultp = round(p,4)
print(resultp)
h = 90.3243243
resulth = round(h, 3)
print("The ultimate value is: ", resulth)

# 2. Execute the absolute form all the negative numbers.
i = -2
absi = abs(i)
print(absi)
o = -21
abso = abs(o)
print(abso)
p = -12
absp = abs(p)
print(absp)
j = - 10
absj = abs(j)
print(absj)
b = - 19
absb = abs(b)
print(absb)
# 3. Execute the power value of all the numbers below.

q = 4
rq = pow(q, 3)
print(f"The q value is: ", rq)
w = 7
rw = pow(w, 2)
print(rw)

t = 9
rt = pow(t,2)
print(rt)
r = 10
rr = pow(r, 5)
print(rr)
s = 12
rs = pow(s, 3)
print(rs)
n = 8
rn = pow(n, 2)
print(rn)
k = 3
rk = pow(k, 4)
print(rk)

for i in range(10):
    x = random.random()
    print(x)

t = [1,2,3]
x = random.choice(t)
print(x)