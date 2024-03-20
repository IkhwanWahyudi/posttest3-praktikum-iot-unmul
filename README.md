<center><h1>POSTTEST3 - PRAKTIKUM - IOT - UNMUL - 2024</h1></center>

<strong>Kelompok 8 B1 2021:</strong>
1. 2109106066 - Moh Ikhwan Wahyudi
2. 2109106077 - Pranata Eka Pramudya
3. 2109106098 - Irfan Arman Hidayat

  <h2>Rangkaian LED, Piezzo Buzzer, dan DHT11 dengan website sebagai monitoring value</h2>

<strong>Deskripsi:</strong>
  Proyek ini bertujuan untuk membuat sebuah sistem IoT yang menggunakan mikrokontroler ESP8266 untuk mengontrol suhu dengan menggunakan sebuah LED dan Pizzeo Buzzer,yang mengambil data dari sensor DHT11, dan mengintegrasikan semua informasi ini ke dalam dashboard ThingSpeak yang akan ditampilkan di web server menggunakan html,css dan javascript(untuk fetch data). Pada proyek ini, hasil deteksi dari sensor DHT11 akan dikonversikan menjadi Celsius, Fahrenheit, dan Kelvin, dan ditampilkan juga pada webserver dan serial monitor.Webserver ini digunakan untuk memonitoring sensor suhu dari DHT11 berdasarkan data dari ThingSpeak.


<strong>Cara Kerja Alat:</strong>
  Pada proyek ini, DHT11 digunakan untuk mengambil atau mengukur suhu di sekitar. Setelah nilai suhu didapatkan, program akan memeriksa apakah suhu berada di bawah 30°C. Jika ya, lampu hijau akan menyala, sementara lampu merah dan kuning akan dimatikan, dan piezo buzzer akan diam. Jika suhu berada dalam rentang 30°C hingga 36°C, lampu kuning akan menyala, sementara lampu merah dan hijau akan dimatikan, dan piezo buzzer akan diam. Jika suhu berada di atas 36°C, lampu merah akan menyala, sementara lampu kuning dan hijau akan dimatikan, dan piezo buzzer akan berbunyi. Setelah DHT11 membaca suhu, nilai suhu akan dikirimkan ke ThingSpeak melalui API. Kemudian, website akan mengambil nilai suhu yang dikirimkan melalui API ThingSpeak untuk ditampilkan.

<strong>Pembagian Tugas</strong>
1. Moh. Ikhwan Wahyudi   : Membuat struktur coding dan membuat website yang mengambil data dari ThingSpeak.
2. Pranata Eka Pramudya  : Menyusun rangkaian komponen LED, Button, Piezzo Buzzer dan NodeMCU
3. Irfan Arman Hidayat   : Membuat codingan di arduino ide untuk mengirim data dari esp8266 ke ThingSpeak

<strong>Komponen yang digunakan:</strong>
1. ESP8266
2. Kabel Jumper
3. Piezzo Buzzer
4. DHT11
5. LED
6. Resistor
7. Breadboard
8. Kabel MicroUSB

<strong>Design Schematic:</strong>
![Posttest3](https://github.com/IkhwanWahyudi/posttest3-praktikum-iot-unmul/assets/113562288/d0022955-cdfe-494b-b210-b631efad67a6)

<strong>Our Schematic:</strong>
![Posttest3 - Rangkaian](https://github.com/IkhwanWahyudi/posttest3-praktikum-iot-unmul/assets/113562288/d5d15472-259f-49d3-b218-1c4303b9ef63)
