// C++ code
//

int tilt = 2;
int led  = 3;

void setup()
{
  pinMode(tilt, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{

  int val = digitalRead(tilt);
  if(val == 1){
  
    digitalWrite(led,HIGH);
    delay(100);
  }
  else{
  
        digitalWrite(led,LOW);
        delay(100);

  }

}