// Smart Irrigation System using Arduino
// Based on Temperature, Soil Moisture, Humidity & Rain

// Due to unavailibility of sensors in Tinkercad:

// Humidity is imitated using potentiometer
// Rain is denoted using just a switch
// Water pump is replicated using a DC motor

// Library to use LCD screen
#include <Adafruit_LiquidCrystal.h>

// initialzing LCD object
Adafruit_LiquidCrystal lcd(0);

// defining pins for different inputs & outputs
const int moistureIN = A1;
const int tempIN = A2;
const int humidityIN = A3;
const int rainIN = 2;
const int pumpOUT = 4;
const int buzzerOUT = 8;
const int greenLED = 12;
const int redLED = 13;

// initializing variables for holding values
int moisture = 0;
int temp = 0;
int humidity = 0;
int rain = 0; // zero showing no rain
float voltage = 0;
float tempInCelsius = 0;
float humidityInPercentage = 0;

const int moistureUpperBound = 800; // denoting optimum soil moisture
const int moistureLowerBound = 200; // denoting less soil moisture
const int tempUpperBound = 30;      // denoting very hot day, hence more soil dry out
const int humidityUpperBound = 70;  // denoting high humidity, so less soil moisture loss
const int humidityLowerBound = 20;  // denoting low humidity, so high soil moisture loss

void setup()
{
}

void loop()
{
}
