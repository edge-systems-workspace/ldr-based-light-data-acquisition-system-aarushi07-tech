#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Light Intensity Monitoring using LDR
 * @author aarushi07-tech
 * @date 2026-02-20
 *
 * @details
 * Reads analog brightness data from LDR sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define LDR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading

void setup() {

    Serial.begin(9600);

    pinMode(DO_PIN, INPUT);


}

void loop() {
    int lightState = digitalRead(DO_PIN);

    if (lightState == HIGH)
        Serial.println("The light is NOT present");
    else
        Serial.println("The light is present");



}
