#include <Preferences.h>

Preferences pref;

const char* ssid = "Your_SSID";
const char* pswd = "PassWord";

void setup() {
  Serial.begin(115200);
  
  pref.begin("wifiCredentials", false); //started preferences with wifiCredentials namespace

  pref.putString("ssid", ssid);  // saving value to ssid key
  pref.putString("pswd", pswd); // saving value to paws key

  Serial.println("Network Credentials Saved");
  pref.end();
}

void loop() {

}
