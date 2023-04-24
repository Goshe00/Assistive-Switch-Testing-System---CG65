
 # Jig Design Guide
 
The locking system fixes the button-in-test on the system’s ‘bed’ to prevent movement of the button-in-test that will contribute to errors during testing. Specifically, as a probe is lowered down over different points of the button-in-test, it is crucial to have the button-in-test fixed so that measurements would remain accurate.
 
 ## Existing Design Justifications
 
 ### Printbed Adapter
 
The adapters create a space in which the jig can be placed on. Its design must be able to align with the edges of the printbed to ensure that the jig is centered. 

|||
|----------|---------|
|Individual adapter design|Combination of adapters|

This design uses a snap fit mechanism to attach the jig to the adapters.

|||
|----------|---------|
|Latches|
||
|Example of use|

 ### MMC60 Switch Jig
 
 ||
|----------|
|MMC60 Switch Jig Design|

### Interact Switch Jig

This design has two parts, the holder and the cylindrical snaps. The cylindrical snaps are inserted into the holes of the holder. These cylinders will snap to the Interact switch which already includes holes with the same radius  

 ||
|----------|
|MMC60 Switch Jig Design|

## Design Approach & Considerations

### Printbed Adapter

When designing the printbed adapter, we need to consider:
1. Edges are aligned to the edges of the printbed
2. Attaching the adapter to the printbed

Attaching the adapter to the printbed can be achieved in two ways:
1. Attaching magnets to the adapter. This requires the printbed to be magnetic, which usually is not 
2. Using binder clips to hold the sides. This requires the binder clips to not obstruct the printbed’s movement.

Attaching the adapter to the jigs can be achieved in a few ways, some examples are:
1. Using a lock key. However, this design is flimsy.
2. Using snap fits. This requires careful measurements to ensure a tight fit.

|||
|----------|---------|
|Individual key design|Individual latch design |
|||
|Example of use (Lock key)|Example of use (Snap)|



