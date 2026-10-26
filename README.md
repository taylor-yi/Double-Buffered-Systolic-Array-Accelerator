Overview:

This is a scalable 3x3 double buffered systolic array accelerator. Inputs are 4-bit unsigned, and the outputs are 10-bit unsigned. This unit accelerates matrix multiplications in hardware by holding weights in registers and allowing activations to flow over. This implementation utilizes 2 register slots holding weights which enables a preload structure, wherein a secondary set of weights may be loaded during the computation on the first set of weights. This advantage allows for matrix multiplications to be processed back to back with zero delay, by removing the need to wait for the first set to process and the number of cycles to load a second set of weights. 

Block Diagram:
![System Architecutre]