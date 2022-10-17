void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{
long tecladoA5=0;
tecladoA5 =analogRead(A5);
  if(tecladoA5 == 205){
       digitalWrite(2, HIGH);
  }else{
   digitalWrite(2, LOW); 
  }
  if(tecladoA5 == 256){
       digitalWrite(3, HIGH);
  }else{
   digitalWrite(3, LOW); 
  }
  if(tecladoA5 == 341){
       digitalWrite(4, HIGH);
  }else{
   digitalWrite(4, LOW); 
  }
  if(tecladoA5 == 511){
       digitalWrite(5, HIGH);
  }else{
   digitalWrite(5, LOW); 
  }
  if(tecladoA5 == 1023){
       digitalWrite(6, HIGH);
  }else{
   digitalWrite(6, LOW); 
  }
  
Serial.println(tecladoA5);
delay(100);
}
