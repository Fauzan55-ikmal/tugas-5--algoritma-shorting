# Tugas 5: Implementasi Algoritma Quick Sort

Repositori ini berisi implementasi algoritma **Quick Sort** menggunakan bahasa pemrograman C++ dengan sistem _build_ **CMake**. Proyek ini disusun untuk memenuhi tugas mata kuliah Algoritma dan Pemrograman.

## 📌 Deskripsi Tugas

Program ini menerima input berupa array dinamis dari pengguna, menampilkan data sebelum diurutkan, melakukan proses pengurutan dengan algoritma Quick Sort, dan menampilkan hasil akhir yang telah terurut secara _ascending_ (dari kecil ke besar).

### Spesifikasi Algoritma

- **Skema Partisi**: Hoare Partition System (menggunakan elemen pertama `data[awal]` sebagai _pivot_).
- **Struktur Data**: Array berbasis indeks 1 (`1` sampai `n`) sesuai dengan rancangan dari dosen pengampu.
- **Kompleksitas Waktu**:
  - _Best & Average Case_: $O(n \log n)$
  - _Worst Case_: $O(n^2)$

---

## 📂 Struktur Proyek

Proyek ini menggunakan pemisahan modular antara deklarasi fungsi (_header_) dan implementasi (_source code_):

```text
tugas-5-algoritma-sorting/
├── CMakeLists.txt          # Konfigurasi Build System CMake
├── README.md               # Dokumentasi Proyek
├── include/
│   └── sorting.h           # Deklarasi Fungsi Prototype
└── src/
    ├── main.cpp            # Driver Program (Input/Output & Control Flow)
    └── sorting.cpp         # Implementasi Logika Quick Sort & Partisi

🛠️ Cara Menjalankan Program
Masuk ke direktori build, lakukan konfigurasi, lalu jalankan:

1. cd build

2. cmake -G "MinGW Makefiles" ..

3. cmake --build .

4. ./tugas_sorting
```
