
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
7. Enter the x coordinate of the desired test position [6]
8. Enter the y coordinate of the desired test position [7]
9. Press Generate [8] 
10. Press TESTBY [9]
11. Wait for the test to complete and view results on the bottom right [10]


### Multi Test-point Mode 

![Screenshot 2023-04-25 223902](https://user-images.githubusercontent.com/71236899/234486090-99c3a89c-2b4a-490a-85df-ec8cf5d8afd8.png)

1. Run main_window.py
2. Select "Multi-point test"
3. Select the port connected to the 3D-printer [1] (see Device Manager > Ports)
4. Select a baud rate of 115200 [2] and press Connect
5. Select the port connected to the microcontroller [3] (see Device Manager > Ports)
6. Select a baud rate of 115200 [4]  and press Connect 
7. Choose to either generate points in rings or scattered points [6]
8. Select the number of rings or the number of points depending on the option selected in step 8 [7]
9. Press "Generate" [8]
10. Press "TESTBY" [9]
