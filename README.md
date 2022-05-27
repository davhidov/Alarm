# Alarm
Arduino project for guard

# Materials
1.Arduino UNO
2. 220 ohm resistor
4.LCD display
5. IR motion sensor
6. Piezo element
7. Connecting wires
 
# Scheme

![изображение](https://user-images.githubusercontent.com/62353818/170720362-2c0e2ab0-981f-4b47-a577-b68ab6abd645.png)

# How it work
The motion sensor has two states: it sees or does not see a moving object.
That is 1 or 0.
 If the sensor sees movement the piezo element turns on and the LCD screen shows that everything is not in order. Also on the screen there are sensor readings.
 After a few seconds if there is no movement the piezoelectric element turns off.

