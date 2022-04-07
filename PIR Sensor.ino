// C++ code
//
int pir = 2;
int led = 3;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int i = digitalRead(pir);
  Serial.print(i);
  if(i==1){
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
 
    
  }
  else{
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
}