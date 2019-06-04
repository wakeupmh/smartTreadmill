# smartTreadmill :iphone:

## Context of project :mortar_board:
With the technological beginning in the industry, the tendencies tend to appear more and more, aiding the productive process in the companies. "To automate and separate the process of separating and counting parts in an intelligent company, it is able to make decisions about the type of material."
In view of the amount of human errors and increase in the time of production caused by the human operator, it was decided to create an automated treadmill which will maintain the quality and reliability of the parts separation and reduce the separation time between metallic parts and parts made of polymers in up to 70% of human time.

## Materials :memo:
* Arduino Uno R3;
* Bluetooth module HC-05;
* Wheel + Tire + 3 to 6V DC Motor with Robotic Reduction;
* Inductive Proximity Sensor LJ12a3-4z;
* Reflective Optical IR Sensor TCRT5000;
* Micro Servo Motor Tower Pro 9g MG90S 360º;

## The Circuit :construction:
This circuit was made in [TinkerCad](https://www.tinkercad.com/).

![Circuit](https://i.imgur.com/ArFgTun.jpg)

## How it works? :triangular_ruler::wrench:
When we made a connection between the Arduino Uno R3 and the Smartphone through the serial Bluetooth HC-05 we got a wireless connection. As an output, the design will have an inductive proximity sensor LJ12a3-4Z that will classify the part, where it is made of metal the servo motor will allocate it in a container A, and if the part is made of polymer the servo motor will put it in a container B, in this way will be given the separation of the parts.
In turn, IR contactor TCRT5000 will make the sum of the metallic materials passed by the presence sensor PIR, after calculation the result of the number of the amount of parts will be sent again by the Bluetooth module of the Arduino to the Smartphone.
![](https://i.imgur.com/XnkJULb.jpg)

[You can see this working here](https://gfycat.com/caninetartamphiuma):beers:
