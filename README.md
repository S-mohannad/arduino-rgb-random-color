# 🎲 RGB LED Random Color

> **Arduino Project #07** — LED RGB يغير لونه بشكل عشوائي كل ثانية تلقائياً

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Level](https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge)](https://github.com/S-mohannad)

---

## 📋 Description

LED RGB يولّد قيم عشوائية لكل قناة لون (R, G, B) بين 0 و255 كل ثانية — مما ينتج ملايين الألوان المختلفة بشكل تلقائي لا يمكن التنبؤ به.

---

## 🔌 Circuit

```
Arduino UNO
┌─────────────────┐
│             9 ●─┼──[220Ω]──🟢 RGB Green pin
│            10 ●─┼──[220Ω]──🔵 RGB Blue pin
│            11 ●─┼──[220Ω]──🔴 RGB Red pin
│           GND ●─┼──────────⚫ RGB Common Cathode (-)
└─────────────────┘
```

- 🌈 RGB LED من نوع **Common Cathode**
- مقاومة 220Ω لكل pin
- Pin 9 → أخضر | Pin 10 → أزرق | Pin 11 → أحمر

---

## 💡 Concepts Used

- `random(min, max)` — توليد أرقام عشوائية بين قيمتين
- `analogWrite()` — التحكم في شدة كل لون عبر PWM (0-255)
- **RGB Color Mixing** — خلط الألوان الثلاثة للحصول على أي لون
- **المتغيرات المحلية** — `RV`, `GV`, `BV` تُحسب من جديد في كل دورة
- `delay(1000)` — الانتظار ثانية بين كل لون وآخر

---

## 📊 Behavior

| الدورة | RV | GV | BV | اللون الناتج |
|--------|----|----|-----|-------------|
| 1 | عشوائي | عشوائي | عشوائي | ؟ |
| 2 | عشوائي | عشوائي | عشوائي | ؟ |
| 3 | عشوائي | عشوائي | عشوائي | ؟ |
| ... | ∞ | ∞ | ∞ | 16,777,216 لون ممكن |

---

## 🔗 Code

```cpp
int B = 10;
int G = 9;
int R = 11;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  int GV = random(0, 255);
  int BV = random(0, 255);
  int RV = random(0, 255);

  analogWrite(G, GV);
  analogWrite(B, BV);
  analogWrite(R, RV);

  delay(1000);
}
```
## 🔧 How to Run

1. افتح **Arduino IDE**
2. وصّل الدائرة كما في الرسم
3. انسخ الكود والصقه
4. اختر **Board:** Arduino UNO
5. اختر **Port** الصحيح
6. اضغط ⬆️ **Upload**
7. شاهد الـ LED يغير لونه كل ثانية بشكل عشوائي

---

## 👨‍💻 Author

**S-mohannad** — [@S-mohannad](https://github.com/S-mohannad)
