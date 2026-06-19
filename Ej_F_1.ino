const int buzzerPin = 0;
const int botonPin = 1;

void setup()
{
  pinMode( buzzerPin , OUTPUT );
  pinMode( botonPin , OUTPUT );
}

void loop()
{
  int estadoBoton = digitalRead(botonPin);
  
  if (estadoBoton = HIGH)
  {
    tone(buzzerPin,800);
    delay(500);
    tone(buzzerPin,300);
    delay(500);
  } else {
    noTone( buzzerPin );
  }
}
