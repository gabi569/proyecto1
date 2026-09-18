#include <Adafruit_NeoPixel.h>

#define PIN_LED 6
#define CANT_LEDS 12
#define POT A0
#define BOTON 2

Adafruit_NeoPixel ring(CANT_LEDS, PIN_LED);

int efecto = 0;
bool ultimoEstado = HIGH;

void setup()
{
  pinMode( BOTON , INPUT_PULLUP);
  ring.begin();
  ring.show();
  Serial.begin(9600);
}

void loop() {
  secuenciaColores();
  delay(1000);

  barridoIdaYVuelta();
  delay(1000);

  patronParesImparesAleatorios();
  delay(1000);
}

void secuenciaColores() {
  for (int i = 0; i < CANT_LEDS; i++) {
    ring.clear(); 
    
    if (i % 3 == 0) {
      ring.setPixelColor(i, ring.Color(255, 0, 0)); // Rojo
    } else if (i % 3 == 1) {
      ring.setPixelColor(i, ring.Color(0, 255, 0)); // Verde
    } else {
      ring.setPixelColor(i, ring.Color(0, 0, 255)); // Azul
    }
    
    ring.show();
    delay(500);
  }
  ring.clear();
  ring.show();
}

void barridoIdaYVuelta() {
  uint32_t colorBarrido = ring.Color(255, 100, 0); // Color naranja/amarillo para el barrido

  for (int i = 0; i < CANT_LEDS; i++) {
    ring.clear();
    ring.setPixelColor(i, colorBarrido);
    ring.show();
    delay(200); 
  }


  for (int i = CANT_LEDS - 1; i >= 0; i--) {
    ring.clear();
    ring.setPixelColor(i, colorBarrido);
    ring.show();
    delay(200);
  }
  ring.clear();
  ring.show();
}

void patronParesImparesAleatorios() {
 
  uint32_t colorPares = ring.Color(random(0, 256), random(0, 256), random(0, 256));
  uint32_t colorImpares = ring.Color(random(0, 256), random(0, 256), random(0, 256));

  ring.clear();
  for (int i = 0; i < CANT_LEDS; i++) {
    if (i % 2 == 0) {
      ring.setPixelColor(i, colorPares);
    }
  }
  ring.show();
  delay(500);

  ring.clear();
  ring.show();
  delay(100); 

  for (int i = 0; i < CANT_LEDS; i++) {
    if (i % 2 != 0) {
      ring.setPixelColor(i, colorImpares);
    }
  }
  ring.show();
  delay(500);

  ring.clear();
  ring.show();
}
