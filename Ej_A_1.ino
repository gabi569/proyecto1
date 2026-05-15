// C++ code
//
void setup()
{
  pinMode( 3 , OUTPUT );
  pinMode( 4 , OUTPUT );
  pinMode( 5 , OUTPUT );
  pinMode( 6 , OUTPUT );
  pinMode( 11 , OUTPUT );
  pinMode( 10 , OUTPUT );
  pinMode( 9 , OUTPUT );
  pinMode( 7 , OUTPUT );

}

void loop()
{
  digitalWrite( 2 , HIGH );
  digitalWrite( 3 , LOW );
  digitalWrite( 4 , HIGH );
  delay( 100 );
  digitalWrite( 5 , HIGH );
  digitalWrite( 4 , LOW );
  digitalWrite( 2 , LOW );
  delay( 500 );
  
  digitalWrite( 7 , HIGH );
  analogWrite( 6 , 50 );
  
  analogWrite( 10 , 50 );
  analogWrite( 9 , 50 );
}