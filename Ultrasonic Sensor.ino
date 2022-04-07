// C++ code
//
int trigPin = 3;
int echoPin = 2;

float duration;
float distance;

void setup()
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delay(200);
  
  digitalWrite(trigPin, HIGH);
  delay(200);
  digitalWrite(trigPin, LOW);
 
  
  duration = pulseIn(echoPin, HIGH);
  // Calculating Distance
  distance  =  duration * 0.034/2;
    
  Serial.print("Distance:");  
    Serial.print(distance);
    Serial.println(" cm ");  


  
  
  
}