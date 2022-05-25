import csv
import requests
from alive_progress import alive_bar


with open("books.csv", encoding="UTF-8") as file:
    num_files = sum(1 for _ in file)
    file.seek(0)
    with alive_bar(num_files, title="VLibrary Images") as bar:
        for row in csv.DictReader(file, fieldnames=["title", "author", "rating", "cateogry", "thumbnail"]):
            try:
                image = requests.get(row["thumbnail"]).content
                with open("Images/" + row["title"] + ".jpg", "wb") as f:
                    f.write(image)
            except: pass
            bar()

