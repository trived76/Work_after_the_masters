# Work_after_the_masters
This repository contains my work in AI and programming after I finished all the courses of masters. Thank you for stopping by, I appreciate your time.

## [My_coding](): 

I am an AI enthusiast and an aspiring Machine Learning Engineer. However, until I get a job in this field, I decided to code some thing (in Python) every week! It is for my practice and understanding. Thus, everyweek I will update this folder with a new code. Currently, it is under progress. If you are an interviewer/recruiter, you can visit my learning and coding experiences from this folder.

## [Arduino_with_Python_Pyserial](https://github.com/trived76/Work_after_the_masters/tree/master/Arduino_with_Python_Pyserial): 

This folder has five different files. The work was carried as a part of the KPMG Ideation Challenge 2019. My team, [Paramount AI](https://mobilesyrup.com/2019/05/23/students-from-university-toronto-win-kpmg-worldwide-ai-innovation-challenge/) won the AI challenge by competing with eight other countries. Our idea was mainly focused on developing the automated waste segregation solution with computer vision and mechatronics. There are two different codes that were developed. The first one was in Python (deep learning image classifier) and the second one was in Arduino (for glowing different LEDs). This is how it works: we designed a bin in which one object is thrown at once and a button is pushed, Arduino receives an input from the push button that something has come in the bin. Arduino code then sends the signal to Python code and tells it to start the camera to capture an image. Once the image is captured, it is then fed to the deep learning classifier. Classifier then gives output in terms of three different waste categories, namely, recyclables, garbage and organics. At the end, Python code again sends signal back to the Arduino and a respective LED is glown.

### Description about files:

1) [Our_Architecture_Model_1904_50+10Epochs.h5](https://github.com/trived76/Work_after_the_masters/blob/master/Arduino_with_Python_Pyserial/Our_Architecture_Model_1904_50%2B10Epochs.h5):
This file contains the neural network architecture and pre-trained weights that was trained for 60 Epochs. It is a Keras file. It will be used in .ipynb file of Python.

2) [Connection.ipynb](https://github.com/trived76/Work_after_the_masters/blob/master/Arduino_with_Python_Pyserial/Connection.ipynb):
This is a Jupyter notebook (.ipynb) file for the Python code. This code contains the main part for model inference. It uses the .h5 weight file, which is shown in the first point. The code also uses the PySerial library to read input from the Arduino and to write the output to the Arduino.

3) [sketch_apr23a.ino](https://github.com/trived76/Work_after_the_masters/blob/master/Arduino_with_Python_Pyserial/sketch_apr23a.ino):
Arduino code to read the input from the Push Button and give the output to the Python code when an object comes in the bin. It is also respoonsibe to glow the LED when an inference is made from the Python code. Pin numbers may differ from the circuit connection, which is discussed in the next point. Sorry about that.

4) [Arduino1_Circuit.pdf](https://github.com/trived76/Work_after_the_masters/blob/master/Arduino_with_Python_Pyserial/Arduino_Circuit.pdf):
In this PDF, a complete circuit connection (which is very simple!) is illustrated. This is the circuit which we studied in the high-school program.

5) [Arduino_BOM.html] (https://github.com/trived76/Work_after_the_masters/blob/master/Arduino_with_Python_Pyserial/Arduino_BOM.html): 
It contains Bill Of Material (BOM). It is to list down all the electronic componenets that are used to build our RoboBin.
