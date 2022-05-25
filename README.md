# VLibrary C++ practise project

## Download images
First install `requests` and `alive-progress` python3 libraries:
```bash
pip install requests alive-progress
```

To download the images, you need to move to foledr `Data` and type:
```
python3 download_images.py
```
This will download the images from the internet and save them in the folder `images`.
> Note: The images size is approx. 73MB.

## Execute app

Run:
```bash
cd build/
./VLibrary
```
or 
```bash
./VLibrary.sh # Build and run
```

###  Build instructions (optional)

Go to root folder and build the project typing:
```bash
cmake --build build/ --target VLibrary -j 9
```


