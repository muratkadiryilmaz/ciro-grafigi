# 📊 12 Aylık Ciro Grafiği (C)

📅 **Tarih:** 07.12.2025    
🔗 **GitHub:** [github.com/muratkadiryilmaz/ciro-grafigi](https://github.com/muratkadiryilmaz/ciro-grafigi) 

📄 **12 aylık ciro verilerini yatay ve dikey ASCII grafik olarak gösteren C programı.** 

---

## 🎯 Proje İçeriği
Bu proje, bir şirketin 12 aylık ciro verilerini 1K ile 10K arasında **rastgele üreterek**,  
bunları hem **yatay** hem de **dikey** grafikler halinde terminalde gösterir.

Projede amaç C dilinde: 
- Diziler (`array`) | Döngüler (`for`) | Koşullu ifadeler (`if`)
- Rastgele sayı üretimi (`rand()` ve `srand(time(NULL))`)
konularını uygulamalı şekilde öğrenmektir.

---

## ⚙️ Nasıl Çalışır
1. Program 12 elemanlı bir `int` dizisi oluşturur.  
   Her eleman bir ayın cirosunu (1–10K arası) temsil eder.  
2. `srand(time(NULL));` ile rastgelelik başlatılır.  
3. `rand() % 10 + 1;` ifadesiyle 1–10 arası rastgele ciro değerleri üretilir.  
4. Değerler ekrana yazdırılır.  
5. Ardından, iki farklı şekilde grafik oluşturulur:  
   - **Yatay Grafik:** Her satır bir ayı temsil eder, yıldız sayısı ciro değerine göre değişir.  
   - **Dikey Grafik:** Her sütun bir ayı temsil eder, yıldız yüksekliği ciro değerine göre belirlenir.  
6. Program sonunda ay numaraları hizalı şekilde yazdırılır. 

---

## 🧠 Özellikler
- 12 elemanlı `int` dizisi (her biri 1–10K arası ciro)
- Rastgele veri üretimi: `rand()` ve `srand(time(NULL))`
- Dikey ve yatay ASCII grafik çıktısı
- Kolay okunabilir kod yapısı

---

## 💻 Kullanılan Teknolojiler
- **C Programlama Dili**  
- **stdio.h** — Ekran çıktısı (`printf`)  
- **stdlib.h** — Rastgele sayı üretimi (`rand`, `srand`)  
- **time.h** — Zaman tabanlı rastgelelik (`time(NULL)`) 

---

## 📂 Dosya Yapısı
ciro-grafigi/
- ├── ciro_yatay.c
- ├── ciro_dikey.c
- └── README.md
  
---

# 🌍 English Version

## 📊 12-Month Revenue Chart (C)

📅 **Date:** 07.12.2025  
🔗 **GitHub:** github.com/muratkadiryilmaz/ciro-grafigi  

📄 **A C program that displays 12 months of revenue data as horizontal and vertical ASCII charts.**

## 🎯 Project Overview

This project generates a company’s 12-month revenue data randomly between 1K and 10K,
and displays it in both horizontal and vertical chart formats in the terminal.

The goal of the project is to practice the following C programming concepts:
- Arrays (array) | Loops (for) | Conditional statements (if)
- Random number generation (rand() and srand(time(NULL))

## ⚙️ How It Works

1. The program creates an int array with 12 elements.
Each element represents the revenue for one month (1–10K).

2. Randomness is initialized using srand(time(NULL));.

3. Revenues are generated using rand() % 10 + 1; (values between 1–10).

4.The values are printed to the screen.

5. Then, two types of charts are displayed:
- H6. orizontal Chart: Each row represents one month; the number of stars corresponds to revenue size.
- Vertical Chart: Each column represents one month; the height of stars corresponds to revenue size.

6. At the end, month numbers are printed in alignment.

## 🧠 Features

- 12-element int array (each between 1–10K)
- Random data generation: rand() and srand(time(NULL))
- Both vertical and horizontal ASCII visualizations
- Clean and easy-to-read C code structure

## 💻 Technologies Used

**C Programming Language**
**stdio.h** — Output to console (printf)
**stdlib.h **— Random number generation (rand, srand)
**time.h** — Time-based randomness (time(NULL))

---

## 📂 File Structure
ciro-grafigi/
- ├── ciro_yatay.c
- ├── ciro_dikey.c
- └── README.md




