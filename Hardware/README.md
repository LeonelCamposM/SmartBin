# SmartBin Hardware 

## Overview
This section will demonstrate the construction process for electronics and structural materials.

## First Iterarion 

## Circuit design 
I will begin by connecting the servo to the Xiao ESP32-C3 MCU using a breadboard, and then linking the servo to laser-cut pieces.
<br>
[wokwi design](https://wokwi.com/projects/397272562672190465)
<br>
 <Img src="Imgs/Base_circuit.png" alt="circuit" width="400"/><br>

## Materials
To build the Object Classifier, I'll need the following hardware components. Visual references for each part are provided below.
<table>
<tr>
    <td>
        <Img src="Imgs/BreadBoard.png" alt="Breadboard" width="200"/><br>
        <strong>Breadboard</strong>
    </td>
    <td>
        <Img src="Imgs/Usb.jpg" alt="USB Micro-B Breakout Board" width="200"/><br>
        <strong>USB Micro-B Breakout Board</strong>
    </td>
</tr>
<tr>
    <td>
        <Img src="Imgs/Microcontroller.jpg" alt="Microcontroller" width="100"/><br>
        <strong>Xiao esp32 c3</strong>
    </td>    <td>
        <Img src="Imgs/MG996R.jpg" alt="Microcontroller" width="200"/><br>
        <strong>Metal servo motor</strong>
    </td>
</tr>
<tr>
    <td>
        <Img src="Imgs/JumperWires.png" alt="Track Sensor" width="200"/><br>
        <strong>Jumper Wires</strong>
    </td>
</tr>
</table>


## Circuit result
This circuit successfully changes the angle of the servo motor.
<br>
<Img src="Imgs/Mcu_servo_photo.jpeg" alt="circuit" width="400"><br>

## Laser cut design
I will use laser cutting because it's cheap and fast, perfect for 2D prototyping.

## Laser designed parts
These parts are supposed to hold the servo and use servo movement to classify in 2 categories.
<Img src="LaserCut/ServoMount.svg" alt="circuit" width="400"><br>

## Laser parts result
In this initial attempt, I successfully used the servo motor as a classifier, but the space designed to hold the servo with screws is too small. It will need slight adjustment.
<br>
<Img src="Imgs/First_it_laser_cut.jpeg" alt="circuit" width="400"><br>

## Second Iterarion 
In this iteration, the laser-cut parts needed for the classification part of the system were completed, and the servo mount now fits in this attempt.
<br>
[LaserCutDesign.stl](Design/LaserCut/LaserClassifier.stl)
<br>
<Img src="Imgs/Second_it_laser_cut.jpeg" alt="circuit" width="400"><br>
