const int rojo = 9;
const int PIR = 8;
const int led = 13;

int movimiento= 0;

void setup() {
 Serial.begin(9600);
 pinMode(rojo,OUTPUT);
 pinMode(led,OUTPUT);
 pinMode(PIR,INPUT);
 Serial.println("PIR:");
 Serial.println("  ");
}

void loop() {
  // put your main code here, to run repeatedly:

movimiento = digitalRead(PIR);
delay(250);

if(movimiento == HIGH){
  Serial.print(movimiento); Serial.print(" : "); Serial.println("Movimiento true");
  digitalWrite(led,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  delay(200);
  movimiento = 0;
  }

  else {
    Serial.println(movimiento); Serial.print(" : "); Serial.println("No hay movimiento"); 
    digitalWrite(rojo,HIGH);
  }

}

  
    
    

