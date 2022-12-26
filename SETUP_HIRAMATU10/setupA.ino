void setupA(){
   Serial.begin(115200);
    pinMode(13,OUTPUT);
    WiFi.softAP(ssid,pass);
    delay(100);
    WiFi.softAPConfig(ip,ip,subnet);
    IPAddress myIP = WiFi.softAPIP();   
    server.begin();
    Serial.print("SSID: ");
    Serial.println(ssid);
    Serial.print("AP IP address: ");
    Serial.println(myIP);
    Serial.println("Server start!");
    WiFi.mode(WIFI_AP_STA);
    WiFi.disconnect();
    Serial.print("Wi-Fi Channel: ");
    Serial.println(WiFi.channel());
    server.begin();
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send(200, "text/plain", "I am HIRAMATU02 desu");
  });
    AsyncElegantOTA.begin(&server);    // Start ElegantOTA
    //server.begin();
    Serial.println("HTTP server started");
    AsyncElegantOTA.loop();
}
