
#define buzzer 2 // PIN BUZZER
bool b = 0; // VARIABLE PARA IDENTIFICAR EL PULSO EN ALTO Y BAJO

void setup() {
pinMode(buzzer, OUTPUT);
Serial.begin(9600);
}
void loop() {
int lectura; //ALMACENAMIENTO DE VALOR LEIDO EN A0
lectura = analogRead(5); // LECTURA ANNALOGICA PIN A0 
Serial.println(lectura); // VALOR LEIDO ENVIADO AL SERIAL PLOTTER

// BUZZER SE ENCIENDE Y APAGA AL RITMO DE LOS PULSOS 
if(lectura > 500 && b==0) {digitalWrite(buzzer, HIGH); b = 1;}

if(lectura < 300 && b==1) {digitalWrite(buzzer, LOW); b=0; }

delay(2);
}
