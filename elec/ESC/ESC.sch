EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 2
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATmega:ATmega8A-AU U?
U 1 1 5E277B3E
P 2300 2600
F 0 "U?" H 2300 4181 50  0000 C CNN
F 1 "ATmega8A-AU" H 2300 4090 50  0000 C CNN
F 2 "Package_QFP:TQFP-32_7x7mm_P0.8mm" H 2300 2600 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/Microchip%208bit%20mcu%20AVR%20ATmega8A%20data%20sheet%2040001974A.pdf" H 2300 2600 50  0001 C CNN
	1    2300 2600
	1    0    0    -1  
$EndComp
$Sheet
S 8650 1100 1150 550 
U 5E2C13AE
F0 "Bridges" 50
F1 "Bridges.sch" 50
$EndSheet
Text HLabel 3050 3400 2    50   Output ~ 0
MOS_HS_A
Text HLabel 3050 1700 2    50   Output ~ 0
MOS_LS_A
Text HLabel 3050 3300 2    50   Output ~ 0
MOS_HS_B
Text HLabel 3050 1600 2    50   Output ~ 0
MOS_LS_B
Text HLabel 3050 3200 2    50   Output ~ 0
MOS_HS_C
Text HLabel 3050 1500 2    50   Output ~ 0
MOS_LS_C
Wire Wire Line
	2900 1500 3050 1500
Wire Wire Line
	2900 1600 3050 1600
Wire Wire Line
	2900 1700 3050 1700
Wire Wire Line
	2900 3200 3050 3200
Wire Wire Line
	2900 3300 3050 3300
Wire Wire Line
	2900 3400 3050 3400
Text Notes 3000 4100 0    50   ~ 0
PHASE_A = point blanc sur circuit
$EndSCHEMATC
