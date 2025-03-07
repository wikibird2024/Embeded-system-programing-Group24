void setup() {
    Serial.begin(115200);
    while (!Serial);  // Chờ Serial sẵn sàng
    Serial.println("ESP32 da ket noi thanh cong!");
}

void loop() {
    Serial.println("ESP32 van dang hoat dong...");
    delay(2000);  // Gửi dữ liệu mỗi 2 giây
}
