#include <Nokia_LCD.h>

// https://platis.solutions logo with vertically oriented bytes.
// The bitmap was generated via the `LCD Assistant` utility.
const unsigned char logo[504] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3c, 0x18, 0x3e, 0x07, 0xc0, 0x78, 0x3f, 0xdf, 0xf8, 
  0x00, 0xff, 0x18, 0xff, 0x0f, 0xe1, 0xfe, 0x3f, 0xdf, 0xf8, 
  0x00, 0xc3, 0x18, 0xc3, 0x98, 0x71, 0x86, 0x30, 0x01, 0x80, 
  0x01, 0x81, 0x99, 0x81, 0x18, 0x33, 0x03, 0x30, 0x01, 0x80, 
  0x01, 0x81, 0x99, 0x80, 0x1e, 0x03, 0x03, 0x30, 0x01, 0x80, 
  0x01, 0x81, 0x99, 0x80, 0x0f, 0xc3, 0x03, 0x3f, 0x81, 0x80, 
  0x01, 0x81, 0x99, 0x80, 0x03, 0xe3, 0x03, 0x3f, 0x81, 0x80, 
  0x01, 0x81, 0x99, 0x80, 0x00, 0x73, 0x03, 0x30, 0x01, 0x80, 
  0x01, 0x81, 0x99, 0x81, 0x18, 0x33, 0x03, 0x30, 0x01, 0x80, 
  0x00, 0xc3, 0x18, 0xc3, 0x9c, 0x71, 0x86, 0x30, 0x01, 0x80, 
  0x00, 0xff, 0x18, 0xff, 0x0f, 0xe1, 0xfe, 0x30, 0x01, 0x80, 
  0x00, 0x3c, 0x18, 0x3e, 0x07, 0xc0, 0x78, 0x30, 0x01, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x71, 0xff, 0x44, 0x44, 0x78, 0xf0, 0x00, 
  0x00, 0x00, 0x24, 0x89, 0x04, 0x44, 0x4a, 0x44, 0x80, 0x00, 
  0x00, 0x00, 0x20, 0x89, 0x04, 0x2a, 0x8a, 0x44, 0x80, 0x00, 
  0x00, 0x00, 0x1c, 0x89, 0xe4, 0x2a, 0x8a, 0x78, 0xf0, 0x00, 
  0x00, 0x0c, 0x04, 0x89, 0x04, 0x2a, 0x8e, 0x48, 0x86, 0x00, 
  0x00, 0x00, 0x24, 0x89, 0x04, 0x11, 0x11, 0x48, 0x80, 0x00, 
  0x00, 0x00, 0x18, 0x71, 0x04, 0x11, 0x11, 0x44, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

Nokia_LCD lcd(14 /* CLK */, 12 /* DIN */, 13 /* DC */, 15 /* CE */, 2 /* RST */);
int ROW = 8;

void Nokia5110_setup() {
  Serial.print("setting screen 5110");
  
  // Initialize the screen
  lcd.begin();
  // Set the contrast
  lcd.setContrast(50);  // Good values are usualy between 40 and 60
  // Clear the screen by filling it with black pixels
  lcd.clear(true);
  delay(2000);
  // Draw the logo on your screen
  lcd.draw(logo, sizeof(logo) / sizeof(logo[0]), true);
  delay(1000);
  lcd.setContrast(60);  // Good values are usualy between 40 and 60
}

void Nokia5110_print(const char* ssid, const char* ip, const char* message) {
  lcd.clear();
  char ipInfo[84];
  sprintf(ipInfo,"IP:%s", ip);
  lcd.setCursor(0,1*ROW) ; // line 1
  lcd.print(ipInfo);

  char ssidInfo[84];
  sprintf(ssidInfo,"  SSID:%s", ssid);
  lcd.setCursor(0,2*ROW); // line 2
  lcd.print(ssidInfo);

  lcd.setCursor(0,3*ROW); // line 3
  lcd.print("test");
}
