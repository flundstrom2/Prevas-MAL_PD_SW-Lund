/*
 Print Hello World on Serial Console
*/

#define ARDUINO_MAIN
#include "Arduino.h"

int main() {
    init();

    delay(1);

#if defined(USBCON)
    USBDevice.attach();
#endif

    // initialize serial:
    Serial.begin(115200);

    for (;;) {
        Serial.print("Hello World\r\n");
	delay(5000);
	if (serialEventRun) serialEventRun();
    }

    return 0;
}
