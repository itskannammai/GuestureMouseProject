#include <Wire.h>
#include <MPU6050.h>
#include <Mouse.h>
MPU6050 mpu;
const int leftClickPin = 2; // Left-click switch
const int rightClickPin = 3; // Right-click switch
int16_t ax, ay, az;
int16_t gx, gy, gz;
void setup() {
Wire.begin();
mpu.initialize();
pinMode(leftClickPin, INPUT_PULLUP);
pinMode(rightClickPin, INPUT_PULLUP);
// Start mouse control (works with Arduino Leonardo/Pro Micro)
Mouse.begin();
}
void loop() {
// Read sensor data
mpu.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);
// Map accelerometer data to screen movement
int moveX = map(ax, -17000, 17000, -10, 10);
int moveY = map(ay, -17000, 17000, -10, 10);
// Move cursor
Mouse.move(moveX, -moveY, 0);
// Left click
if (digitalRead(leftClickPin) == LOW) {
Mouse.press(MOUSE_LEFT);
} else {
Mouse.release(MOUSE_LEFT);
}
// Right click
if (digitalRead(rightClickPin) == LOW) {
Mouse.press(MOUSE_RIGHT);
} else {
Mouse.release(MOUSE_RIGHT);
}
delay(20); // Small delay for stability
}
