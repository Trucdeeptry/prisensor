# 🚀 HỆ THỐNG IOT PHÁT HIỆN CHUYỂN ĐỘNG & ĐIỀU KHIỂN THIẾT BỊ TỪ XA

## 📌 Giới thiệu

Trong bối cảnh **Internet of Things (IoT)** ngày càng phát triển mạnh mẽ, việc ứng dụng IoT vào giám sát và điều khiển thiết bị thông minh đang trở thành xu hướng tất yếu. Đề tài này tập trung xây dựng một **mô hình IoT đơn giản nhưng trực quan**, cho phép **phát hiện chuyển động** và **điều khiển thiết bị điện từ xa thông qua Internet**.

Hệ thống sử dụng **ESP8266 (NodeMCU)** làm bộ điều khiển trung tâm, kết hợp với **cảm biến chuyển động PIR** để phát hiện sự hiện diện của con người. Trạng thái thiết bị được **hiển thị và điều khiển thông qua nền tảng IoT**, giúp người dùng dễ dàng giám sát mọi lúc, mọi nơi.

---

## 🎯 Mục tiêu đề tài

* Xây dựng mô hình IoT hoạt động ổn định, chi phí thấp
* Phát hiện chuyển động bằng cảm biến PIR
* Điều khiển thiết bị điện (mô phỏng bằng LED) thông qua ESP8266
* Hiển thị trạng thái hệ thống theo thời gian thực
* Làm quen với lập trình vi điều khiển và nền tảng IoT

---

## 🧠 Ý tưởng & nguyên lý hoạt động

1. Cảm biến PIR liên tục giám sát môi trường
2. Khi phát hiện chuyển động → PIR xuất tín hiệu HIGH
3. ESP8266 đọc tín hiệu từ PIR và xử lý
4. LED (mô phỏng thiết bị điện) được bật/tắt tương ứng
5. Trạng thái được gửi lên nền tảng IoT để hiển thị và điều khiển từ xa

👉 Mô hình có thể mở rộng cho:

* Đèn cầu thang thông minh
* Hệ thống chống trộm
* Nhà thông minh (Smart Home)

---

## 🧩 Phần cứng sử dụng

| Thiết bị          | Mô tả                                 |
| ----------------- | ------------------------------------- |
| ESP8266 NodeMCU   | Vi điều khiển trung tâm, kết nối WiFi |
| PIR Motion Sensor | Phát hiện chuyển động                 |
| LED               | Mô phỏng thiết bị điện                |
| Breadboard        | Lắp mạch thử nghiệm                   |
| Dây jumper        | Kết nối linh kiện                     |

---

## 🔌 Sơ đồ kết nối

| Cảm biến / Thiết bị | ESP8266 |
| ------------------- | ------- |
| PIR VCC             | 3V3     |
| PIR GND             | GND     |
| PIR OUT             | D5      |
| LED Anode (+)       | D1      |
| LED Cathode (–)     | GND     |

⚠️ Lưu ý: ESP8266 hoạt động ở **3.3V**, không sử dụng 5V để tránh hư hỏng.

---

## 💻 Phần mềm & công nghệ

* Ngôn ngữ lập trình: **C/C++ (Arduino Framework)**
* Vi điều khiển: **ESP8266 NodeMCU**
* Mô phỏng mạch: **Wokwi Simulator**
* Nền tảng IoT: **Blynk IoT** *(có thể mở rộng)*

---

## 🧪 Kết quả đạt được

* Hệ thống phát hiện chuyển động chính xác
* LED bật khi có chuyển động, tắt khi không có chuyển động
* Serial Monitor hiển thị trạng thái rõ ràng
* Mô hình hoạt động ổn định trên mô phỏng

---

## 📈 Hướng phát triển

* Kết nối Blynk để điều khiển từ smartphone
* Gửi thông báo khi phát hiện chuyển động
* Thay LED bằng relay để điều khiển thiết bị thực
* Kết hợp thêm cảm biến nhiệt độ, độ ẩm
* Lưu dữ liệu lên cloud phục vụ phân tích

---

## 🏁 Kết luận

Đề tài đã xây dựng thành công một **mô hình IoT phát hiện chuyển động** sử dụng ESP8266 với chi phí thấp, dễ triển khai và có tính ứng dụng cao. Đây là nền tảng tốt để tiếp tục phát triển các hệ thống **nhà thông minh và an ninh thông minh** trong thực tế.

---

✨ *"From simple ideas to smart solutions"* ✨

---

## 👨‍💻 Thông tin nhóm thực hiện

* Môn học: Internet of Things (IoT)
* Vi điều khiển: ESP8266 NodeMCU
* Năm học: 2024 – 2025
