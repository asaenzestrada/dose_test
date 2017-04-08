const int gasPIN = A0;
const int Referencia = 500;
const int led = 13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int aire = analogRead(gasPIN));
if(aire>Referencia){
  digitalWrite(led,HIGH);
  delay(200);
  Serial.println(aire);
delay(1000);
digitalWrite(led,LOW);

  }

}
