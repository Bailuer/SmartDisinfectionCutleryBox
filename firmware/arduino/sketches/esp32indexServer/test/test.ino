#include <WiFi.h>
#include <FS.h>
#include <ESPAsyncWebSrv.h>

#include "secrets.h"

// 记得修改 **** 的内容
AsyncWebServer server(80);  // 默认的端口
void setup()
{
  Serial.begin(115200);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(1000);
    Serial.println("Connecting to WiFi..");
  }
  Serial.println(WiFi.localIP());
  server.on("/hello", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/plain", "Hello World");
  });
  server.begin(); // 开启服务器
}
void loop()
{
}
