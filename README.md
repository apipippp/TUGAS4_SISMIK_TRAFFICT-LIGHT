# Penerapan Kendali GPIO pada Traffic Light 4 Arah

## 👨‍💻 Penulis
* **Nama:** Afif Nur Rahman
* **NIM:** H1H024016
* **Mata Kuliah:** Sistem Mikrokontroler 

## 🛠️ Komponen yang Digunakan
* 1x Arduino Uno / 1x ESP32
* 12x LED (4 Merah, 4 Kuning, 4 Hijau)
* 12x Resistor (220 Ohm atau 330 Ohm)
* Kabel Jumper secukupnya

## 📌 Konfigurasi Pin GPIO

### Versi 1: Arduino Uno (Tugas Utama)
Sistem ini menggunakan pin digital Arduino dengan pemetaan sebagai berikut:
* **Utara:** Merah (2), Kuning (3), Hijau (4)
* **Timur:** Merah (8), Kuning (9), Hijau (10)
* **Selatan:** Merah (11), Kuning (12), Hijau (13)
* **Barat:** Merah (5), Kuning (6), Hijau (7)

### Versi 2: ESP32 (Eksplorasi Tambahan)
Sistem ini menggunakan pin GPIO ESP32 dengan pemetaan sebagai berikut:
* **Utara:** Merah (15), Kuning (2), Hijau (0)
* **Timur:** Merah (4), Kuning (16), Hijau (17)
* **Selatan:** Merah (5), Kuning (18), Hijau (19)
* **Barat:** Merah (21), Kuning (22), Hijau (23)

## ⏱️ Aturan & Timing Sistem
Sistem berjalan otomatis searah jarum jam (Utara -> Timur -> Selatan -> Barat -> ulangi) dengan spesifikasi waktu:
1. **Lampu Hijau:** Menyala selama 5 detik.
2. **Lampu Kuning:** Diberikan efek kedip 3 kali dan menyala selama 2 detik.
3. **Lampu Merah:** Menyala kembali setelah hijau selesai.
Kondisi default adalah semua lampu berwarna merah sebelum satu sisi aktif. Tidak boleh ada lebih dari satu sisi hijau yang menyala secara bersamaan untuk menghindari konflik antar simpang.

## 🚀 Link Simulasi
Kamu dapat melihat dan menjalankan simulasi rangkaian ini langsung melalui platform berikut:
* **Arduino Uno:** [Simulasi Tinkercad](https://www.tinkercad.com/things/bm6H8Ws8GV2-traffic-light-simpang).
* **ESP32:** [Simulasi Wokwi](https://wokwi.com/projects/459426832409931777).
