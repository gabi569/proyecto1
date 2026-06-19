// C++ code
//
void setup()
{
  pinMode( 0 , OUTPUT);
  pinMode( 1 , OUTPUT);
  pinMode( 2 , OUTPUT);
  pinMode( 3 , OUTPUT);
  pinMode( 4 , OUTPUT);
  pinMode( 5 , OUTPUT);
}

void loop()
{
  digitalWrite( 3 , HIGH );//rojo
  delay(500);
  digitalWrite( 3 , LOW );
  digitalWrite( 2 , HIGH );//cian
  digitalWrite( 1 , HIGH );
  delay(500); 
  digitalWrite( 1 , LOW);
  digitalWrite( 2 , LOW);
  delay(500);
  digitalWrite( 4 , HIGH );//verde
  delay(500);
  digitalWrite( 4 , LOW );
  delay(500);
  digitalWrite( 0 , HIGH );//magenta
  digitalWrite( 1 , HIGH );
  delay(500);
  digitalWrite( 0 , LOW );
  digitalWrite( 1 , LOW );
  delay(500);
  digitalWrite( 5 , HIGH );//azul
  delay(500);
  digitalWrite( 5 , LOW );
  delay(500);
  digitalWrite( 0 , HIGH );
  digitalWrite( 1 , HIGH );
  digitalWrite( 2 , HIGH );
  delay(500);
  digitalWrite( 0 , LOW );
  digitalWrite( 1 , LOW );
  digitalWrite( 2 , LOW );
  delay(500);
  digitalWrite( 3 , HIGH );//amarilllo
  digitalWrite( 4 , HIGH );
  delay(500);
  digitalWrite( 3 , LOW );
  digitalWrite( 4 , LOW );
  delay(500);
  
}
