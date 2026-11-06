// C++ code
// el tone y notone no se vieron hasta el tp 6

#define r 6
#define b 5
#define g 9
#define buzz 3
#define btn 4
#define pot A4
#define valR A0
#define valG A1
#define valB A2

void setup()
{
  pinMode( r , OUTPUT);
  pinMode( g , OUTPUT);
  pinMode( b , OUTPUT);
  pinMode( buzz , OUTPUT);
  pinMode( btn , INPUT_PULLUP);
  pinMode( pot , INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  

  int valorPotTiempo = analogRead(pot);
  int tiempoMs = map(valorPotTiempo, 0, 1023, 0, 3000);
  float tiempoSeg = tiempoMs / 1000.0;

  int lecturaR = analogRead(valR);
  int lecturaG = analogRead(valG);
  int lecturaB = analogRead(valB);
  
  int valR = map(lecturaR, 0, 1023, 0, 255);
  int valG = map(lecturaG, 0, 1023, 0, 255);
  int valB = map(lecturaB, 0, 1023, 0, 255);
  
  Serial.print("Tiempo: ");
  Serial.print(tiempoSeg, 1);
  Serial.print(" s");
  Serial.print(" R:");
  Serial.print(valR);
  Serial.print(" G:");
  Serial.print(valG);
  Serial.print(" B:");
  Serial.print(valB);
  
  //valR ; valG ; valB 
  
 
  bool boton = digitalRead(btn);
  
  if (boton)
  {
   Serial.print(" tiempo: ");
   Serial.print( tiempoMs );
   Serial.print(" s / t ");
   
   analogWrite(buzz, 1200);
   delay(100);
   analogWrite(buzz , 0);
   analogWrite( r , valR );
   analogWrite( b , 0 );
   analogWrite( g , 0 );   
   delay(tiempoMs);
   
   analogWrite(buzz , 1500);
   delay(100);
   analogWrite(buzz , 0);
   analogWrite( r , valR );
   analogWrite( b , valB );
   analogWrite( g , 0 );   
   delay(tiempoMs);
   
   analogWrite(buzz , 1000);
   delay(100);
   analogWrite(buzz , 0);
   analogWrite( r , 0 );
   analogWrite( b , 0 );
   analogWrite( g , valG);
   delay(tiempoMs);
   
   Serial.println();
  }
  else
  {
    digitalWrite( r , LOW );
    digitalWrite( b , LOW );
    digitalWrite( g , LOW );
    analogWrite(buzz, 0);

  }
}
