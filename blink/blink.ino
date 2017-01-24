
int time_delay = 100;
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //smart hack to auto-assign the on-board LED
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_delay);                      
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(time_delay);                       
}
