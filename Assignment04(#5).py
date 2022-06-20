file = open("books.txt","r")
file = file.readlines()

for books in file:
    books = books.strip()
    book, author = books.split(",")
    print(author + " ['" + book + "']")



