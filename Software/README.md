
# README

# NeoPrint

## Testing Routine 

After setting up the hardware...

### Single Test-point Mode 

![Screenshot 2023-04-25 220034](https://user-images.githubusercontent.com/71236899/234475631-8e87a7fc-d609-49de-a77c-fccd606e1edc.png)

1. Run main_window.py
2. Select "Single-point test"
3. Select the port connected to the 3D-printer [1] (see Device Manager > Ports)
4. Select a baud rate of 115200 [2] and press Connect
5. Select the port connected to the microcontroller [3] (see Device Manager > Ports)
6. Select a baud rate of 115200 [4]  and press Connect 
7. Select the button profile for the button-under-test [5]
8. Enter the x coordinate of the desired test position [6]
9. Enter the y coordinate of the desired test position [7]
10. Press Generate [8] 
11. Press TESTBY [9]
12. Wait for the test to complete and view results on the bottom right [10]


### Multi Test-point Mode 
1. Run main_window.py
2. Select "Multi-point test"
3. Select the button profile of the button-under-test [1]
4. Select the port connected to the 3D-printer [2] (see Device Manager > Ports)
5. Select any baud rate [3] 
6. "Connect" to the 3D-printer [4] 
7. Select the port connected to the ESP-32 microcontroller [5]
8. Select any baud rate [6]
9. "Connect" to the microcontroller [7]
