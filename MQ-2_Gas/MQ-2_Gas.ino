const int gasPIN = A0;
const int Referencia = 400;
const int led = 13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int aire = analogRead(A0);
Serial.println("Sensor"); Serial.println(aire);
delay(1000);
if(aire>Referencia){
  digitalWrite(led,HIGH);
  delay(50);
  Serial.println("GAS ABIERTO"); Serial.println(aire);
delay(1000);
digitalWrite(led,LOW);

  }

  else if(aire<Referencia)
  {
    digitalWrite(led,LOW);
    
    }

}
