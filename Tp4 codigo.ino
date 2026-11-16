// C++ code
//
#define MSG_LUZ "El nivel de luz actual es: "
#define MSG_TEMP " y la temperatura actual: "
#define UNIDAD_TEMP " ºc"

const int PIN_SENSOR_LUZ = A0;
const int PIN_SENSOR_TEMP = A1;
const int PIN_LED_ROJO = 9;
const int PIN_LED_VERDE = 10;
const int PIN_LED_AZUL = 11;

void setup()
{
  pinMode(PIN_LED_ROJO, OUTPUT);
  pinMode(PIN_LED_VERDE, OUTPUT);
  pinMode(PIN_LED_AZUL, OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int lecturaLDR = analogRead(PIN_SENSOR_LUZ);
  int lecturaTMP = analogRead(PIN_SENSOR_TEMP);
  
  
  float voltaje = lecturaTMP * (5.0 / 1023.0);
  float temperatura = (voltaje - 0.5) * 100.0;
  
  int porcentajeLuz = map(lecturaLDR, 1023, 0, 0, 100);
  porcentajeLuz = constrain(porcentajeLuz, 0, 100);
  
  Serial.print(MSG_LUZ);
  Serial.print(porcentajeLuz);
  Serial.println("%");
  
  Serial.print(MSG_TEMP);
  Serial.print(temperatura);
  Serial.println(UNIDAD_TEMP);
  
  Serial.println("--------------------------------------");
  
  if (porcentajeLuz >=30 && porcentajeLuz <= 70)
  {
    if (temperatura > 90)
    {
      digitalWrite(PIN_LED_ROJO, HIGH);
      digitalWrite(PIN_LED_VERDE, LOW);
      digitalWrite(PIN_LED_AZUL, LOW);
    }
    else if (temperatura < 18)
    {
      digitalWrite(PIN_LED_ROJO, LOW);
      digitalWrite(PIN_LED_VERDE, LOW);
      digitalWrite(PIN_LED_AZUL, HIGH);
    }
    else if (temperatura >= 18 && temperatura <= 90)
    {
      digitalWrite(PIN_LED_ROJO, LOW);
      digitalWrite(PIN_LED_VERDE, HIGH);
      digitalWrite(PIN_LED_AZUL, LOW);
    }
  }
  else
  {
    digitalWrite(PIN_LED_ROJO, LOW);
    digitalWrite(PIN_LED_VERDE, LOW);
    digitalWrite(PIN_LED_AZUL, LOW);
  }
  delay(1000);
}
