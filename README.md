<!--- 
Open Source Assistive Technology: GitHub Readme Template
 --->

<!---
INSTRUCTIONS
This is a markdown template for creating the README.md file in a GitHub repository. This file is rendered and displayed automatically when someone visits the repository.

This document includes helper text that will not be displayed when rendered. Any text between the less-than sign + exclamation mark + three hyphen-minus (<!---) and matching three hyphen-minus + greater-than sign will not be displayed. This helper text can be deleted once the corresponding section is completed.

 --->
 
 <!--- 
TITLE
Should match the name of the GitHub repository. Choose something descriptive rather than whimsical. 
 --->
 # Assistive Switch Testing System - CG65

<!--- 
SUMMARY
A brief summary of the project. What it does, who it is for, how much it costs.
 --->
We are from UBC ECE Capstone Group CG65 and our project is to build a cost-effective test system for engineers to test the assistive switch for Neil Squire's Program Makers Making Change. The testing system is made from modifying a commercially available 3D printer, low cost electrical components, 3D printed parts and specially designed user interface.

<!--- 
PHOTO

 --->
![Image Description](Photos/Device_Photo.jpg)

<!--- 
## More info at
 - [Makers Making Change Forum Thread](TBD) 
 - [Makers Making Change Project Page](TBD)
 --->


## Getting Started
<!--- 
Include an overall idea of what major steps are required to build the device.
 --->

### 1. Order the 3D printer
Our testing system will be assembled on a 3D printer. For our project, we've chosen the Ender 3 V2 from [3D Printing Canada](https://3dprintingcanada.com/products/creality-ender-3-v2) since it is CSA and ETL safety certified. So far, this testing system has been implemented on an Ender 3 V2 and you can acquire the same model from any available store.

### 2. Order and assemble the activation circuit
The activation circuit will be used to receive and send signals from the load cell and switch to a computer.

All of the files and documentation can be found in the [/Hardware/PCB](/Hardware/PCB) folder.

### 3. Order and assemble the force sensor

The force sensor includes the load cell and its adapter. It will be used to send signals to the PCB during a testing routine.

All of the documentation can be found in the [/Hardware/Sensor](/Hardware/Sensor) folder. Individual print files of the adapter can be found in [/Hardware/Adapters and_Jigs/Load Cell Adapter](/Hardware/Adapters_and_Jigs/Load_Cell_Adapter) folder. The code to configure the microcontroller can be found in [/Software/ESP](/Software/ESP)

### 4. Install and setup Neoprint, our testing system's user interface

Neoprint is a Python program specifically for this testing system that enables the user to set up, run test routines and generate data. 

All of the build documentation and files can be found in the [/Software/Neoprint](/Software/Neoprint) folder. 

### 5. Assemble the force sensor, activation circuit and Neoprint

After assembling and setting up each of the subcomponents, they can be assembled together to build the testing system.

User guides of each subcomponents can be found in their respective folders. 

### 6. Assemble the switch 

The testing procedure starts by deciding which switch is needed to be tested. For this project, we have implemented a testing procedure for the MMC60 switch. 

### 7. Print and assemble the switch adapter

In order for the switch to be fixed on the printbed, an adapter is needed to hold the switch so that it does not move or rotate during testing.

All individual print files and documentation of MMC60 switch and Interact switch can be found in [/Hardware/Adapters and Jigs/MMC60 Jig](/Hardware/Adapters_and_Jigs/MMC60_Jig) folder and [/Hardware/Adapters and Jigs/MMC60 Jig](/Hardware/Adapters_and_Jigs/Interact_Switch_Jig) folder.

### 8. Run testing routine

Now that the testing system is assembled and a switch to test has been chosen, you are ready to run a test!

The detailed testing routine instructions can be found at [/Software/Neoprint](/Software/Neoprint).

## Files
<!---
FILES
This section includes all the information and files required to build and modify the device, including documentation, design files, and build files. 
--->

### Documentation
<!---
DOCUMENTATION

--->
| Document | Version | Link |
|----------|---------|------|
| Design Specifications| 1.0 | [ProjectTitle_Design_Specifications](/Documentation//Working_Files/ProjectTitle_Design_Rationale_v0.1.pdf) |
| Design Rationale     | 1.0 | [ProjectTitle_Design_Rationale](/Documentation/ProjectTitle_Design_Rationale_v0.1.pdf) |
| Bill of Materials    | 1.0 | [ProjectTitle_BOM](/Documentation/ProjectTitle_BOM_v0.1.xlsx) |
| Assembly Guide       | 1.0 | [ProjectTitle_Instructions](/Documentation/ProjectTitle_Assembly_Guide_v0.1.pdf) |
| Maker Checklist      | 1.0 | [ProjectTitle_Checklist](/Documentation/ProjectTitle_Maker_Checklist_v0.1.pdf) |
| User Quick Guide          | 1.0 | [ProjectTitle_Quick_Guide](/Documentation/ProjectTitle_Quick_Guide_v0.1.pdf)           |
| Changelog            | 1.0 | [ProjectTitle_Changelog](/Documentation/ProjectTitle_Changelog_v0.1.pdf)               |

### Design Files
<!---
DESIGN FILES
If possible, include a copy of original design files to facilitate easy editing and customization.
--->
 - [CAD Files](/Design_Files/CAD)
 - [PCB Files](/Design_Files/PCB)

### Build Files
<!---
BUILD FILES
This section i
--->
 - [3D Printing Files](/Build_Files/3D_Printing)
 - [Custom PCB Files](/Build_Files/Custom_PCB)
 - [V1.0 3MF](/Build_Files/3D_Printing/ProductTitle_v1.0.3mf)

## License
<!---
LICENSE
Choose an appropriate license. We recommend an open-source hardware compatible license.
--->
Everything needed or used to design, make, test, or prepare the (todo: Project Title) is licensed under the CERN 2.0 Weakly Reciprocal license <https://ohwr.org/project/cernohl/wikis/Documents/CERN-OHL-version-2> (CERN-OHL-W).

Accompanying material such as instruction manuals, videos, and other copyrightable works that are useful but not necessary to design, make, test, or prepare the (todo: Project Title) are published under a Creative Commons Attribution-ShareAlike 4.0 license <https://creativecommons.org/licenses/by-sa/4.0/> (CC BY-SA 4.0).

## Attribution
<!---
ATTRIBUTION
Include any information related to the development of the design. This may include who identified the initial challenge, who contributed to the design
--->

The documentation template was created by Makers Making Change and is used under a CC BY-SA 4.0 license. It is available at the following link: https://github.com/makersmakingchange/OpenAT-Template




## About Makers Making Change
<img src="https://www.makersmakingchange.com/wp-content/uploads/logo/mmc_logo.svg" width="500" alt="Makers Making Change Logo">

Makers Making Change is an initiative of [Neil Squire](https://www.neilsquire.ca/), a Canadian non-profit that uses technology, knowledge, and passion to empower people with disabilities.

We are committed to cultivating a network of volunteer makers who support people with disabilities in their communities through cost effective assistive technology. Check out our library of free, open-source assistive technologies.

 - Website: [www.MakersMakingChange.com](https://www.makersmakingchange.com/)
 - [GitHub](https://github.com/makersmakingchange)
 - [Thingiverse](https://www.thingiverse.com/makersmakingchange/about)
 - Twitter: [@makermakechange](https://twitter.com/makermakechange)
 - Instagram: [@makersmakingchange](https://www.instagram.com/makersmakingchange)

### Contacts
For technical questions, to get involved, or to share your experience we encourage you to visit [MMC Forum](https://forum.makersmakingchange.com) or contact info@makersmakingchange.com

## About UBC ECE Capstone CG65

We are a group of five Electrical Engineering students that are enrolled in the UBC ECE Capstone program. Our capstone group includes:

1. Daniel Wu, developer of NeoPrint and testing routine
2. Karat Wannissorn, assisted in documenting and developing NeoPrint
3. Henry Bryant, designed button activation circuit and force sensor
4. Sean Fu, assisted in researching force sensor alternatives
5. Shadeed Lagani, designed 3D models and researched locking jigs 

### Contacts
For technical questions, contact ubcece65neilsquire@gmail.com


