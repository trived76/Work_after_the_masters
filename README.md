# Work_after_the_masters
This repository contains my work after I finished all the courses of masters.

## (Arduino_with_Python_Pyserial)[https://github.com/trived76/Work_after_the_masters/tree/master/Arduino_with_Python_Pyserial]: 

This folder has five different files. The work was carried as a part of the KPMG Ideation Challenge 2019. My team, (Paramount AI)[https://mobilesyrup.com/2019/05/23/students-from-university-toronto-win-kpmg-worldwide-ai-innovation-challenge/] won the AI challenge by competing with eight other countries. Our idea was mainly focused on developing the automated waste segregation solution with computer vision and mechatronics. There are two different codes that were developed. The first one was in Python (deep learning image classifier) and the second one was in Arduino (for glowing different LEDs). This is how it works: we designed a bin in which one object is thrown at once and a button is pushed, Arduino receives an input from the push button that something has come in the bin. Arduino code then sends the signal to Python code and tells it to start the camera to capture an image. Once the image is captured, it is then fed to the deep learning classifier. Classifier then gives output in terms of three different waste categories, namely, recyclables, garbage and organics. At the end, Python code again sends signal back to the Arduino and a respective LED is glown.

### Description about files:
