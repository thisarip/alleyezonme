# All Eyez On Me
Wearable device that allows visually impaired people to AUDIBLY detect objects around them as well as their proximity! Created for QHacks 2023.
## What it does
Think "virtual vision stick on steroids"!  It is a wearable device that AUDIBLY provides visually impaired people with information on the objects in front of them as well as their proximity.
## How we built it
We used computer vision from Python and OpenCV (Real-Time-Object-Detection-With-OpenCV found at: https://github.com/Surya-Murali/Real-Time-Object-Detection-With-OpenCV) to recognize objects such as "chair" and "person" and then we used an Arduino to interface with an ultrasonic sensor to receive distance data in REAL TIME.  On top of that, the sensor was mounted on a servo motor, connected to a joystick so the user can control where the sensor scans in their field of vision.
## Challenges we ran into
The biggest challenge we ran into was integrating the ultrasonic sensor data from the Arduino with the OpenCV live object detection data.  This is because we had to grab data from the Arduino (the code is in C++) and use it in our OpenCV program (written in Python).  We solved this by using PySerial and calling our friends Phoebe Simon Ryan and Olivia from the Anti Anti Masker Mask project for help!
## Accomplishments that we're proud of
Using hardware and computer vision for the first time!
## What we learned
How to interface with hardware, work as a team, and be flexible (we changed our idea and mechanisms like 5 times).
## What's next for All Eyez On Me
Refine our design so it's more STYLISH :D
