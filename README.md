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
├── ciro_yatay.c
├── ciro_dikey.c
└── README.md




