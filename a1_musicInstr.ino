/**
 * Project 1 - Physical Input / Musical Instrument: Dancing Puppets
 */

// Array to store values read from photoresistor 
int values[2]; 

// Pins for LED lights 
int LED1 = 13; 
int LED2 = 12;

/**
 * Function to set up output pins for LED lights and open Serial port to send sensor data to Pure Data 
 */
void setup(){
  // Initializing the LED light pins to be output pins
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  // Opening serial port 
  Serial.begin(9600);
 
}

/**
 * Loop function to read user input and send input read to Pure Data 
 */
void loop(){
  // Turning on LED on each finger puppet 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);

  // For loop to read and store the two photoresistor input values each time from analog pins in array and send the values to Pure Data through serial port 
  for (int i = 0; i< 2; i++){
    values[i] = analogRead(i); 
    Serial.print(values[i]);
    Serial.print(" ");
  } 
  Serial.println();
  
  delay(10);
}
