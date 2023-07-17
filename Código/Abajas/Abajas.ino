#define medio 3
#define alto 4
#define baixo 2
float som = A0;
float valor_som = 0.0;

void setup()
{
  
  Serial.begin(9600);
  pinMode(som,INPUT);
  pinMode(medio,OUTPUT);
  pinMode(alto,OUTPUT);
  pinMode(baixo,OUTPUT);
  
}void loop(){
  
  valor_som = analogRead(A0);
  Serial.print("Valor atual do som e:");
  Serial.println(valor_som);
  if ( valor_som < 300){
    
    Serial.println("Som esta baixo");
    digitalWrite(baixo,HIGH);
    digitalWrite(medio,LOW);
    digitalWrite(alto,LOW);
    
  }else if ( 700 < valor_som ){
    
    Serial.println("Som esta alto");
    digitalWrite(alto,HIGH);
    digitalWrite(baixo,LOW);
    digitalWrite(medio,LOW);

    
   }else{
    
  	  Serial.println("Som esta medio");
    digitalWrite(medio,HIGH);
    digitalWrite(baixo,LOW);
    digitalWrite(alto,LOW);
    
   }
  
  delay(500);
  
}