# Requirements
## Introduction
#### Title: Performance evaluation of Transmission Lines using ABCD Parameters in Power System.
This project helps to determine the efficiency and regulation of different transmission lines(short,medium,long) using ABCD parameters
# Research
## Objectives:
- Performance evaluation of Transmission Lines short transmission system
- Performance evaluation of Transmission Lines for Medium transmission system using Nominal pi Model
- Performance evaluation of Transmission Lines for Medium transmission system using Nominal T Model
- Performance evaluation of Transmission Lines Long transmission system assuming resistance of the system as zero
## Explaination:
Transmission line are nothing but a long conductors laid either over head or underground to carry bulk power from generating station to consumer area.For Transmission lines it takes more time for calculating the sending end voltage to finally get the efficiency manually.This project helps the customer to re-design their transmission system with higher efficiency by simply puting their design values in this project and taking out the efficiency.
## Cost and Features and Timeline
- Previously the computation is done manually.
- Now the system is computing the values,by providing the input values.
- Provides the efficiency and voltage regulation values
# Defining Our System
#### Input to the various transmission systems are explained below
#### Small Transmission Line 
- Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
- Input 2-> Recieving end Voltage(Enter in Kilo volts)
- Input 3-> Resistance of Short Transmission Line(Enter in Ohms)
- Input 4-> Inductive Reactance(Enter in ohms)
- Input 5-> Power factor(0<pf<1)
#### Medium Transmission Line(Nominal Pi model)
- Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
- Input 2-> Recieving end Voltage(Enter in Kilo volts)
- Input 3-> Resistance of Medium Transmission Line(Enter in Ohms)
- Input 4-> Inductive Reactance(Enter in ohms)
- Input 5-> Capacitive suceptance(Enter in mho)
- Input 6-> Power factor(0<pf<1)
- Input 7-> Length of line(Enter in Km)
#### Medium Transmission Line(Nominal T model)
- Input 1-> Recieving enLong Transmission Line
- Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
- Input 2-> Recieving end Voltage(Enter in Kilo volts)
- Input 3-> Resistance  of Long Transmission Line(Enter in Ohms)
- Input 4-> Inductive Reactance(Enter in ohms)
- Input 5-> Capacitive suceptance(Enter in mho)
- Input 6-> Power factor(0<pf<1)
- Input 7-> Length of line(Enter in Km)Power(Enter in Mega/Kilo watts)
#### Long Transmission Line
- Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
- Input 2-> Recieving end Voltage(Enter in Kilo volts)
- Input 3-> Resistance  of Long Transmission Line(Enter in Ohms)
- Input 4-> Inductive Reactance(Enter in ohms)
- Input 5-> Capacitive suceptance(Enter in mho)
- Input 6-> Power factor(0<pf<1)
- Input 7-> Length of line(Enter in Km)
## SWOT ANALYSIS
![SWOT-Sample]()
# 4W's and 1'H
## Who:
- Transco and Distribution companies whose main focus on constructing Transmission lines
## What:
- Many Transmission Line are inefficient due to prolonged time for testing the efficiency of the transmission line manually.This project gives the oopurtunity to compute all the required parameters and deploy into real world with more efficiency
## When:
- With the increasing population demand for Electric power also increased exponentially.
- With the increase in power demand,increased the problem to design the efficient transmision system to reduce the power loss across india
## Where:
- This problem is surfaced in all states of Indi
## How:
- This project takes in all the design input values and yields out the Line parameters.
# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status |
| -- | -- | -- | -- |
HR01|User has a menu for selecting the type of transmission line|Technical|Implemented
HR02|	Requires the input from the user for Short transmission line|Technical|Implemented
HR03|	Requires the input from the user for Medium(Nominal Pi) transmission line|Technical|Implemented
HR04|	Requires the input from the user for Medium(Nominal T) transmission line|Technical|Implemented
HR05|	Requires the input from the user for Long transmission line|Technical|Implemented
## Low level Requirements:
| ID | Description |  HR ID  | Status |
| -- | -- | -- | -- |
LR01|	Small menu should be created for the user to interact.A switch case statement to get the option for the user to select the type of transmission line.|HR01|Implemented
LR02|		A function to calculate the complex addition.And magnitude of complex number is required to compute the function shortLine|HR02|Implemented
LR03|		A function to calculate the complex addition.And magnitude of complex number and complex multiplication function is required to compute the function MediumPiLine|HR03|Implemented
LR04|		A function to calculate the complex addition.And magnitude of complex number and complex multiplication function is required to compute the function MediumTLine|HR04|Implemented
LR05|	Requires all the complex number arthimetic functions HR05.|HR05|Implemented

