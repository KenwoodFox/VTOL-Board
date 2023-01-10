/**
 * @file main.cpp
 * @author Joe
 * @brief Source code for VTOL Board
 */

// Libs
#include <Arduino.h>

// Headers
#include "boardPins.h"

void setup()
{
    // Setup serial
    delay(200);
    Serial.begin(115200);
    Serial.println(MOTD);

    // // Configure Pins
    pinMode(STAT_LED, OUTPUT);
}

void loop()
{
    delay(500);
}
