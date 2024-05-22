import sys
import random

sys.stdout = open("testcase.txt", "w")

if __name__ == "__main__":
  t=1000
  print(t)
  for _ in range(t):
    n=random.randint(2,1000)
    q=5
    print(n,q)
    for __ in range(n):
       print(random.randint(-100,-100),end=" ")
    for __ in range(q):
      print(random.randrange(1, n, 2),end=" ")

    print()