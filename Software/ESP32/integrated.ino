int P_SWITCH = 4; // digital pin
float grams_force;

#include "HX711.h"

double calibration_factor = 3030; // Tested on scale for validation/verification
double current_time;
double prev_time;
double rate;
double creep;

//double count;
//long randNumber; //used for testing

#define DOUT  25
#define CLK  26
#define FS 500
//#define zero -57598
// creep 0.000036 g / ms
HX711 scale;

void setup() {
  // put your setup code here, to run once:
  pinMode(P_SWITCH, INPUT);
  //Serial.begin(9600);
  Serial.begin(115200); // May need to run at a faster baud rate if the data is inaccurate (Only did static force tests, rather than dynamic as the probe is moving type of test)


//comment if no electronics

  scale.begin(DOUT, CLK);
  
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0


  current_time = 0;
  prev_time = 0;
  creep = 0.05*500.0 *(1/3.0)*(1/60.0)*(1/1000.0)*10; // %FS / 3min * 1min/60s = creep in g /10ms

  //count = 0; //only used as dummy data


}

void loop() {
  // put your main code here, to run repeatedly:

  //randNumber = random(0,100);
  //grams_force = 2; //randNumber; //use if no electronics
  grams_force = scale.get_units(); //comment out if no electronics
  current_time = millis();
  if (current_time - prev_time >= 10) {
    prev_time = millis();
    grams_force -= creep;
  }
/* FORMAT of data sent to GUI
* Button's activation status: "0" OR "1"
* semicolon: ";"
* measured force: [float]
* semicolon: ";"
* measured distance: (float)
* semiconlon: ";"
* position: (char)
*/


  Serial.print(digitalRead(P_SWITCH)); //comment out if there's not electronics connected

  Serial.print(";");
  
  //Serial.print(" Grams-Force: ");
  Serial.print(grams_force, 1);

/*
  Serial.print(";");

  //Serial.print(" Distance: ");
  randNumber = random(1,11);

  Serial.println();
*/
//  count += 0.1;

//  delay(1000);
  Serial.println();
}
