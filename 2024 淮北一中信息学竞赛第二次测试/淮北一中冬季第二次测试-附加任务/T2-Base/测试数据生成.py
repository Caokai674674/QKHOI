import random

bit = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
       'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
bits = ['1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
opts = [1,2,5]
s = 10000
nbs = 1000


def task():
    nb = ""
    na = ""
    ns = random.randint(1, 10)
    n = random.randint(1, nbs)
    for i in range(ns):
        if i == 0:
            nb += random.choice(bits)
        else:
            nb += random.choice(bit)
    print(nb)
    print(n)
    for i in range(n):
        opt = random.choice(opts)
        if (opt == 5):
            nt = random.randint(1, 10)
            for j in range(nt):
                if j == 0:
                    na += random.choice(bits)
                else:
                    na += random.choice(bit)
            print(str(opt) + " " + na)
            na = ""
        if (opt == 3 or opt == 4):
            print(str(opt) + " " + str(random.randint(1, s)))
        if (opt == 1 or opt == 2):
            print(opt)


import sys

for case in range(1, 21):
    savedStdout = sys.stdout
    print_log = open("base_" + str(case) + ".in", "w")
    sys.stdout = print_log
    t = random.randint(2, 15)
    print(t)
    for i in range(t):
        task()
    sys.stdout.close()
