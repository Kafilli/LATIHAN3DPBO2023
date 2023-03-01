# import class
from human import mahasiswa
from human import dosen
from proses import proses
from prodi import prodi
from course import course

# instansiasi objek untuk mahasiswa
mhs1 = mahasiswa("001", "Fikri", "Cowo", "UPI",
                 "Fikri@email", "2107264", "FPMIPA")
mhs2 = mahasiswa("002", "Muhammad", "Cowo", "UPI",
                 "Muhammad@email", "2107265", "FPMIPA")

# instansiasi objek untuk dosen
dsn1 = dosen("003", "Rose", "Cewe", "UPI",
             "Rose@email", "1010101010", "S1", "Programming", "FPMIPA")

# instansiasi objek untuk course
matkul1 = course("Alpro")
matkul2 = course("Strukdat")
matkul3 = course("DPBO")

# instansiasi objek prodi
prodi = prodi("Ilkom", "123")

# memanggil method addmhs untuk menambah mhs ke dalam list
prodi.addmhs(mhs1)
prodi.addmhs(mhs2)

# memanggil method adddosen untuk menambah dosen ke dalam list
prodi.adddosen(dsn1)

# memanggil method addcourse untuk menambah matkul ke dalam list
prodi.addcourse(matkul1)
prodi.addcourse(matkul2)
prodi.addcourse(matkul3)

# memanggul method get untuk menampilkan semuanya
prodi.getlistmhs()
prodi.getlistdosen()
prodi.getlistcourse()
