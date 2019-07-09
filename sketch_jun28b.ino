int randNumber;
int led =6;
void setup() {
pinMode(led, OUTPUT);
 Serial.begin(9600);


}

void loop() {

  randNumber = random(0,250);

 analogWrite(led, randNumber); 
 Serial.println(randNumber);
 delay(1000);


}
