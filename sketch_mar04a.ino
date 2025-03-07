#include <Wire.h>
#include <MPU6050_tockn.h>

MPU6050 mpu(Wire);

void setup() {
    Serial.begin(115200);
    Wire.begin(21, 22);

    Serial.println("Khởi động MPU6050...");
    mpu.begin();
    mpu.calcGyroOffsets(true);
    Serial.println("MPU6050 sẵn sàng.");
}

void loop() {
    mpu.update();

    Serial.print("Gia tốc (g): ");
    Serial.print(mpu.getAccX()); Serial.print(", ");
    Serial.print(mpu.getAccY()); Serial.print(", ");
    Serial.println(mpu.getAccZ());

    Serial.print("Gyro (°/s): ");
    Serial.print(mpu.getGyroX()); Serial.print(", ");
    Serial.print(mpu.getGyroY()); Serial.print(", ");
    Serial.println(mpu.getGyroZ());

    Serial.println("---------------------");
    delay(500);
}
