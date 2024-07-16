
 int sens=5;
 int result=0;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode (sens , INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
 result=digitalRead(sens);
 // Ahora, no queremos que el programa imprima directamente numeros ( 0 o 1), sino que nos diga si es blanco o negro //
 // Usamos el "if" ( condicion ) //
 if (result == 0){
   Serial.println ("Blanco"); // lo que esta entre comillas el arduino lo toma como un valor absoluto //
 }
 else {
   Serial.println ("Negro");
 }
}
