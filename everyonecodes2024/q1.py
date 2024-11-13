with open('input/q1c.txt', 'r') as file:
    enemies = file.read()

# ------------------ part 1

# potions = 0
# for e in enemies:
#     if (e == "B"):
#         potions += 1
#     elif (e == "C"):
#         potions += 3

# print(potions)
    
# ------------------ part 2

# list comprehension
# groups = [enemies[i:i+2] for i in range(0, len(enemies), 2)]

# potions = 0
# attacks = {
#     "A" : 0,
#     "B" : 1,
#     "C" : 3,
#     "D" : 5,
#     "x" : 0
# }

# for i, g in enumerate(groups):
#     if (g[0] != 'x') and (g[1] != 'x'):
#         potions += 2
#     potions += attacks[g[0]]
#     potions += attacks[g[1]]

#     print(i, g, potions)

# ------------------ part 3
groups = [enemies[i:i+3] for i in range(0, len(enemies), 3)]

potions = 0
attacks = {
    "A" : 0,
    "B" : 1,
    "C" : 3,
    "D" : 5,
    "x" : 0
}

for i, g in enumerate(groups):
    count = 0
    for char in g:
        if char != "x":
            count += 1
    if (count == 2):
        potions += 2
    elif (count == 3):
        potions += 6
    potions += attacks[g[0]]
    potions += attacks[g[1]]
    potions += attacks[g[2]]


print(potions)