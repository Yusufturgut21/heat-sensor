int lm35pin= A0;
int led=8;
#define buzzer 9

int zaman = 100;
int okunan_deger = 0;
float sicaklik_gerilim = 0;
float sicaklik=0;


void setup() {
 pinMode(led,OUTPUT);
 pinMode(buzzer,OUTPUT);     
}

void loop() {
 okunan_deger = analogRead(lm35pin);
 sicaklik_gerilim=(5000.0 /1023.0) * okunan_deger;
 sicaklik = sicaklik_gerilim / 10.0;

 if(sicaklik >=-10)
 {
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(zaman);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(zaman);
 }
}

