#define medio 3
#define alto 4
#define baixo 2
float som;
float max_v = 5.0;
float min_v = 0.0;
float max_s = 86.0;
float min_s = 58.0;

void setup()
{
  
  Serial.begin(9600);
  pinMode(som,INPUT);
  pinMode(medio,OUTPUT);
  pinMode(alto,OUTPUT);
  pinMode(baixo,OUTPUT);
  
}void loop(){
  
  som = (analogRead(A0)*5)/1023;
  som = map(som,max_v,min_v,max_s,min_s);
  Serial.print("Valor atual do som e:");
  Serial.println(som);
  
  Serial.println(som);
 if (som > 72.0){
    digitalWrite(alto,HIGH);
    digitalWrite(baixo,LOW);
    digitalWrite(medio, HIGH);
  }
  else if (som < 40.0){
    digitalWrite(baixo,HIGH);
    digitalWrite(alto,LOW);
    digitalWrite(medio, LOW);
  }
  else{
    digitalWrite(baixo,LOW);
    digitalWrite(alto,LOW);
    digitalWrite(medio, HIGH);
  }
  delay(500);
}