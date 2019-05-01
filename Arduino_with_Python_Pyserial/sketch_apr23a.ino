#define sensor A0

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, INPUT);
  Serial.begin(9600);
}

void loop()
{
//  float volts = analogRead(sensor)*0.0048828125;
//  int distance = 13*pow(volts,-1);
  
//  if (digitalRead(13) == LOW || distance > 10)
  if (digitalRead(13) == LOW)
  {
    int distance=10;
    Serial.println(distance);
    if(Serial.available())
   {
     int category = Serial.read();
     if (category == 0)
     {
       digitalWrite(2,HIGH);
       digitalWrite(6,LOW);
       digitalWrite(10,LOW);
     }
     else if (category == 1)
     {
       digitalWrite(2,LOW);
       digitalWrite(6,HIGH);
       digitalWrite(10,LOW);
     }
     else if (category == 2)
     {
       digitalWrite(2,LOW);
       digitalWrite(6,LOW);
       digitalWrite(10,HIGH);
     }
    }
  }
//  else if (distance > 10)
//  {
//    Serial.println(distance);
//    delay(10);
//    
//    if(Serial.available())
//     {
//     int category = Serial.read();
//     if (category == 0)
//     {
//       digitalWrite(2,HIGH);
//       digitalWrite(6,LOW);
//       digitalWrite(10,LOW);
//     }
//     else if (category == 1)
//     {
//       digitalWrite(2,LOW);
//       digitalWrite(6,HIGH);
//       digitalWrite(10,LOW);
//     }
//     else if (category == 2)
//     {
//       digitalWrite(2,LOW);
//       digitalWrite(6,LOW);
//       digitalWrite(10,HIGH);
//     }
//     delay(500);
//    }
//  }
}
