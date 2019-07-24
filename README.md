# MUR Electric: Simulation 2019
Welcome to our simulation repository! Here we have models of each of our car's subsystems, built in Simulink. The purpose of this is to generate a modularised model of our car, which is helpful both in predicting performance and designing control systems.

## Repository Structure
- Each subsystem has its own simulink library file. Different versions of the same subsystem can exist in the same file.
- Subsystems can then be dragged into a new model where required.
- Where possible, use the Simscape package to model physical/electrical phenomena.
