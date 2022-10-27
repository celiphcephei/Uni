x = "Holawenas"
for o in x[1::2]:
    x = x.replace(o,"D")
for i in x[::2]:
    x = x.replace(i, "X")

print(x)