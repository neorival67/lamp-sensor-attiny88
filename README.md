# Light-Activated Relay Control

This Arduino sketch demonstrates how to control a relay based on the light intensity detected by an LDR (Light Dependent Resistor). When the light intensity is below a certain threshold, the relay is turned off, and when it's above the threshold, the relay is turned on to control a light source.

## Pin Connections

- **ldrPin**: Digital pin 3 (connected to the LDR)
- **relayPin**: Digital pin 2 (connected to the relay)

## Constants

- **LIGHT_THRESHOLD**: Threshold value (light intensity) above which the relay is activated.

## Functions

### `setup()`

- Initializes serial communication at 115200 baud rate.
- Sets the `relayPin` as an output.

### `loop()`

- Reads the digital value from the LDR pin using `digitalRead(ldrPin)`.
- If the LDR value is LOW (indicating bright light), the relay is activated (`digitalWrite(relayPin, HIGH)`), turning on the light.
- If the LDR value is HIGH (indicating dark conditions), the relay is deactivated (`digitalWrite(relayPin, LOW)`), turning off the light.
- A delay of 9000 milliseconds (9 seconds) is added to the loop to prevent rapid toggling of the relay.

## Adjustments

- **LIGHT_THRESHOLD**: Adjust this value according to the desired light intensity threshold for activating/deactivating the relay.
