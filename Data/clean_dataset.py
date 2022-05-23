import csv

with open("booksdataset.csv", encoding="UTF-8") as file:
    booksfile = open("books.csv", "w", encoding="UTF-8")
    categoriesfile = open("categories.csv", "w", encoding="UTF-8")

    categories = {}

    for row in csv.DictReader(file):
        category = row["categories"].split(",")[0].capitalize()
        if category is not None:
            categories[category] = "fiction" in category.casefold() and "nonfiction" not in category.casefold()
            booksfile.write(row["title"].replace(","," ").replace("\"", "") + "," + row["authors"].split(";")[0].replace(","," ").replace("\"", "") + "," + row["average_rating"] + "," + category + "," + row["thumbnail"] + "\n")
        

    for category in categories:
        categoriesfile.write(category + "," + str(categories[category]) + "\n")

    booksfile.close()
    categoriesfile.close()

# Check dataset integrity

with open("books.csv", encoding="UTF-8") as file:
    while True:
        line = file.readline()
        if not line:
            break
        if (len(line.split(",")) != 5):
            print(line)
            
with open("categories.csv", encoding="UTF-8") as file:
    while True:
        line = file.readline()
        if not line:
            break
        if (len(line.split(",")) != 2):
            print(line)

        