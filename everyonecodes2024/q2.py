with open('input/q2b.txt', 'r') as file:
    lines = [line.strip() for line in file.readlines()]
    
# ------------------ part 1

# words = lines[0]
# # list_words = words.split(",")
# list_words = ['LOR', 'LL', 'SI', 'OR', 'RC', 'PA', 'EC']
# # somehow was causing issues because "EC\n" had a newline after
# print(list_words)
# # for w in words:
# #     list_words.append(w)

# text = lines[2]

# # basically just count occurences - sliding window since they are the same length?
# count = 0
# for i in range(0, len(text) - 3):
    
#     if text[i:i+3] in list_words:
#         count += 1
        
# print(count)
# for i in range(0, len(text) - 2):
#     print(text[i:i+2])
#     if text[i:i+2] in list_words:
#         count += 1
    
# print(count)

# ------------------ part 2

words = lines[0]
list_words = words.split(",")
# list_words = ['LOR', 'LL', 'SI', 'OR', 'RC', 'PA', 'EC']
# somehow was causing issues because "EC\n" had a newline after
# print(list_words)
# for w in words:
#     list_words.append(w)

text = lines[2:]
print(text)

# basically just count occurences - sliding window since they are the same length?
count = 0
for i in range(0, len(text) - 3):
    
    if text[i:i+3] in list_words:
        count += 1
        
print(count)
for i in range(0, len(text) - 2):
    # print(text[i:i+2])
    if text[i:i+2] in list_words:
        count += 1
    
print(count)