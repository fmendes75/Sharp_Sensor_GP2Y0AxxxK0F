// SHARP sensor GP2Y0AH01K0F
// Readings between 4.5mm and 6mm 

//PARAMETERS
#define N_MESURES 4       //Average buffer len; recomended between[1..4]
#define SENSOR   1        //1-GP2Y0AH01K0F; 2-GP2Y0A 
#define trigger  1        //1-Auto; 2-Externel trigger(PIN 13)
#define loop_delay  500   //[0..1000]ms 


int distancePin;
int average;
double d_distance;
double d_aux, d_aux2;
int a_measures[N_MESURES];

void setup() {
  Serial.begin(9600);
    
  pinMode(distancePin, INPUT);
  analogReference(DEFAULT);
  
  Serial.println("-------------------");
  Serial.println("  Sensor readings");
  Serial.println("-------------------");
  
  Serial.print("0..1023");
  Serial.print("\t");  
  Serial.print("mV");
  Serial.print("\t");  
  Serial.print("mm");
  Serial.println("\t"); 
}

void loop() {
  int i;
  float sum;
  float voltage;
  float adc_reading;
  
  // Average to eliminate noise
  if(N_MESURES == 1){
    adc_reading = analogRead(distancePin);
  }else{  
    sum = 0;
    for (int i=0; i<N_MESURES;i++){
      adc_reading = analogRead(distancePin);
      sum = sum + adc_reading;
    }
    adc_reading = (int)sum/N_MESURES;
  }
  //Convert 0..1023 value into 0..5v
  voltage = map(adc_reading, 0, 1023, 0, 5000);
  voltage  = voltage/1000;
  d_distance = (-1)*(voltage - 7.5)/1.16;

  Serial.print(adc_reading, 0);  
  Serial.print("\t");  
  Serial.print(voltage, 2); 
  Serial.print("\t");  
  Serial.print(d_distance, 2);   
  Serial.println("\t");  
 
  delay(1000); //make it readable
}
