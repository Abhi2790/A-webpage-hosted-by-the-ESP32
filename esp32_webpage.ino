#include <WiFi.h>
#include <WebServer.h>

// Replace with your WiFi credentials
const char* ssid     = "iQOO13";
const char* password = "abhishek000";

// Create a web server on port 80
WebServer server(80);

void handleRoot() {
  server.send(200, "text/html", "<h1>Hello, World from ESP32 by Abhishek kumar</h1>");
}

void setup() {
  Serial.begin(115200);
  delay(1000);

  // Connect to WiFi
  Serial.println("Connecting to WiFi...");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nWiFi connected!");
  Serial.print("ESP32 IP Address: ");
  Serial.println(WiFi.localIP());

  // Define web server routes
  server.on("/", handleRoot);

  // Start server
  server.begin();
  Serial.println("Web server started.");
}

void loop() {
  // Handle client requests
  server.handleClient();
}
