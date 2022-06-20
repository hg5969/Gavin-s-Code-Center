list1 = ['be','be','is','not','or','question','that','the','to','to']
print("Original list:",list1)
def remove_duplicates(sorted_list):
    sorted_list = sorted(set(sorted_list))
    print("List after removing duplicates:",sorted_list)
remove_duplicates(list1)

