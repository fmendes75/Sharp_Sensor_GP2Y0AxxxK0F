<<<<<<< HEAD
Sharp_Sensor_GP2Y0AxxxK0F
=========================
<img src="https://d3i6fms1cm1j0i.cloudfront.net/github-wiki/images/snowplow-logo-large.png"
 alt="Snowplow logo" title="Snowplow" align="right" />
 
Scope
=====

This repo containe Arduino scketches for GP2Y0AxxxK0F Sharp sensors testing.
- SHARP - GP2Y0AH01K0F - SENSOR, DISTANCE
http://www.farnell.com/datasheets/37489.pdf
- SHARP - GP2Y0A21YK0F - SENSOR, DISTANCE, ANALOGUE
http://www.farnell.com/datasheets/1657845.pdf

Arduino Programs
=======
# Sharp_Sensor_GP2Y0AxxxK0F
<img src="https://github.com/fmendes75/Sharp_Sensor_GP2Y0AxxxK0F/blob/master/documentation/Sharp_Sensor_GP2Y0AH01K0F.jpg"
 alt="GP2Y0AH01K0F" title="GP2Y0AH01K0F" align="right" />
 
# Scope

This repo containe Arduino scketches for GP2Y0AxxxK0F Sharp sensors testing.
- SHARP - GP2Y0AH01K0F - SENSOR, DISTANCE

http://www.farnell.com/datasheets/37489.pdf
- SHARP - GP2Y0A21YK0F - SENSOR, DISTANCE, ANALOGUE

http://www.farnell.com/datasheets/1657845.pdf


## Arduino Programs
>>>>>>> FETCH_HEAD
----------------
- Sharp_Sensor_Test_GP2Y0AxxxK0F
This program reads an ADC pin and outputs for the terminal, the vaues of: Decimal measure(0-1023); Voltage value(mV); and the convertion for distance(4.5-6mm).

<<<<<<< HEAD
=======
### Output
The formated data could easily be copy/pasted to excel.
```
-------------------
  Sensor readings
-------------------
0..1023	mV	mm	
255	1.25	5.39	
263	1.28	5.36	
266	1.30	5.34	
271	1.32	5.32
```
### Features
- #define N_MESURES    4    //Average buffer len; recomended between[1..4]
- #define SENSOR       1    //1-GP2Y0AH01K0F; 2-GP2Y0A21YKOF (NOT IMPLEMENTED YET)
 - Not-Implemented yet  GP2Y0A21YKOF
- #define TRIGGER      2    //1-Auto; 2-Externel trigger(PIN 7)
 - Use of a push-button to make the reading.
- #define LOOP_DELAY  500   //[0..1000]ms 

### Author
https://github.com/fmendes75
>>>>>>> FETCH_HEAD

