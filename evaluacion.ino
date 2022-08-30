/**********************************************************************^

Botón anti pánico

Se trata de un dispositivo que al presionar un pulsador, un led deberá parpadear cada
200ms y un buzzer emitirá un sonido con la misma cadencia. Estas alarmas deberán
permanecer activa durante 10 segundos.
Se deberá conectar el pulsador en el pin 2 y el buzzer en el pin 3.
Tambien se deberán crear variables para los pines y los tiempos como asi tambien utilizar
el condicional if y el ciclo for.

************************************************************************/

int pulsador = 2; 
int buzzer = 3;
int led = 13;
int tiempo_led = 200;
int tiempo_buzzer = 10000;
int estado_Pul = 0;

void setup(){
  Serial.begin(9600);
  pinMode(pulsador,INPUT);//Mencinamos y confifuramos los pines
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
 }

void loop(){
  estado_Pul = digitalRead(pulsador);
  Serial.println(estado_Pul);
   if(estado_Pul == 1){
    for(int x = 0; x <= 25; x++){
   digitalWrite(led, HIGH);
    digitalWrite(buzzer,HIGH); 
   delay(tiempo_led);
   digitalWrite(led, LOW);
   digitalWrite(buzzer,LOW);
   delay(tiempo_led);
    }
   }
}
