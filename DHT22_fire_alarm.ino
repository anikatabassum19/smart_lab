#include <DHT.h>

#define DHTPIN D2        // DHT22 data pin is connected to D2
#define DHTTYPE DHT22     // DHT22 sensor type
#define LED_PIN D0        // Digital pin for the LED
#define TEMP_THRESHOLD 45 // Temperature threshold for triggering the alarm

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  delay(2000);  // Delay for 2 seconds (DHT22 sampling rate is 2 seconds)

  float temperature = dht.readTemperature();
  float humidity = dht.readHumidity();

  if (!isnan(temperature) && !isnan(humidity)) {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.print(" °C, Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");

    if (temperature > TEMP_THRESHOLD) {
      // Fire alarm condition - Blink the LED and print "Fire"
      blinkLED();
      Serial.println("Fire");
    }
  } else {
    Serial.println("Failed to read temperature and humidity from DHT sensor!");
  }
}

void blinkLED() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
  }
}
