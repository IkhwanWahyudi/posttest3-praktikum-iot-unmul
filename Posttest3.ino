#include <ThingSpeak.h>
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <DHT.h>

#define DHTPIN D5
#define DHTTYPE DHT11
#define LED_RED D1
#define LED_YELLOW D2
#define LED_GREEN D3
const int BUZZER_PIN = D7;

DHT dht(DHTPIN, DHTTYPE);

unsigned long CHANNEL_ID = 2471709;
const char *ssid = "wifi.id";
const char *password = "nanti aja";
const char *thingSpeakApiKey = "MI3WRWCD5OE092UE";
WiFiClient client;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  ThingSpeak.begin(client);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("WiFi connected");
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  Serial.print("Temperature: ");
  Serial.println(temperature);

  // Kontrol LED berdasarkan suhu
  if (temperature < 30) {
    digitalWrite(LED_GREEN, HIGH); // Hijau
    digitalWrite(LED_YELLOW, LOW); // Hijau
    digitalWrite(LED_RED, LOW); // Hijau
    noTone(BUZZER_PIN);
  } else if (temperature >= 30 && temperature <= 36) {
    digitalWrite(LED_GREEN, LOW); // Hijau
    digitalWrite(LED_YELLOW, HIGH); // Kuning
    digitalWrite(LED_RED, LOW); // Hijau
    noTone(BUZZER_PIN);
  } else {
    digitalWrite(LED_GREEN, LOW); // Hijau
    digitalWrite(LED_YELLOW, LOW); // Kuning
    digitalWrite(LED_RED, HIGH); // Merah
    tone(BUZZER_PIN, 500);
  }

  // Kirim data suhu ke ThingSpeak
  ThingSpeak.setField(1, temperature);
  ThingSpeak.writeFields(CHANNEL_ID, thingSpeakApiKey);

  delay(15000); // Delay 0.5 detik antara pembacaan suhu
}
