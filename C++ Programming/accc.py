from zipfile import ZipFile

with ZipFile("C:\Users\mkara\Downloads\hexo.zip") as zip_file:
    test_file = zip_file.read("acc.py").decode("utf-8")

test_file[:30]