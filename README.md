# LATIHAN 3 DPBO 2023

## Janji
 Saya Muhammad Fikri Kafilli NIM 2107264 mengerjakan Latihan 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

## Deskripsi Tugas
Buatlah program berbasis OOP menggunakan bahasa pemrograman C++ dan Python  yang mengimplementasikan konsep inheritance, composition, dan array of object pada kelas-kelas tersebut:
* Mahasiswa: NIM, nama, jenis_kelamin, fakultas
* Human: NIK, nama, jenis_kelamin
* SivitasAkademik: asal_universitas, email_edu
* Dosen: NIP, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian
* Course: nama_matakuliah
* Program Studi: nama_prodi, kode, course

## Desain Program
Desain Program dibagi menjadi 6 class yaitu human, sivitas, mahasiswa, dosen, course, dan prodi. Mahasiswa dan Dosen merupakan child dari sivitas dan sivitas adalah child dari human. Alasan dari design tersebut adalah karena mahasiswa dan dosen adalah objek yang sama dengan sivitas dan sivitas adalah objek yang sama dengan human. Ketiga class tersebut bisa saling berhubungan inheritance karena tiap class merupakan objek yang sama yaitu manusia, memiliki atribut yang sama, dan ada atribut tambahan untuk setiap childnya. Untuk program studi mmeiliki atau has a course, dosen, dan mahasiswa karena course, dosen, dan mahasiswa adalah bagian dari prodi.

Desain Algoritma Menggunakan uml





1. Human

  Terdapat 3 atribut dan juga method Setter dan Getter untuk tiap atribut
  * NIK (`string`)
  * Nama (`string`)
  * Kelamin (`string`) 

  
2. Sivitas (child dari class Human)

  Terdapat 2 atribut  juga method setter dan getter untuk tiap atribut
  * Universitas (`string`)
  * email (`string`)
 
3. Mahasiswa (child dari class sivitas)

  Terdapat 2 atribut dan juga method setter dan getter untuk tiap atribut
  * NIM (`string`)
  * Fakultas (`string`)

4. Dosen (child dari class sivitas)

  Terdapat 4 atribut dan juga method setter dan getter untuk tiap atribut
  * NIP (`string`)
  * LastEdu (Pendidikan Terakhir) (`string`)
  * Keahlian (`string`)
  * Fakultas (`string`)

5. Course 
  Terdapat 1 atribut dan setter dan getter
  * Nama_Matakuliah (`string`)

6. Prodi (Mengcomposite dosen, mahasiswa, dan course)
  Terdapat 5 atribut dan juga
  
 ## Alur Program
 
1. User diminta memasukkan datanya
2. Data dimasukkan ke dalam list 
3. Data ditampilkan 
 
 ## Dokumentasi





