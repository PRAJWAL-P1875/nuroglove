#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

// data pin to digital pin 11

void setup() {

    if (!driver.init()) {
        Serial.println("Initialization failed");
        while (1);
    }
    Serial.begin(9600);
    Serial.println("Receiver Ready");
}

void loop() {
    uint8_t buf[RH_ASK_MAX_MESSAGE_LEN];
    uint8_t buflen = sizeof(buf);

    if (driver.recv(buf, &buflen)) { 
        buf[buflen] = '\0';
        Serial.print("Message Received: ");
        Serial.println((char *)buf);
    }
}

//reciver code