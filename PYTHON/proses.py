from human import mahasiswa


class proses:
    # constructor
    def __init__(self, data):
        self.data = data

    # method menambah data
    def tambah(self, mhs, nik, nama, kelamin, universitas, email, nim, fakultas, prodi):
        temp = mahasiswa(nik, nama, kelamin, universitas,
                         email, nim, fakultas, prodi)
        mhs.append(temp)

    # method untuk menampilkan setiap data
    def tampil(self, mhs):
        j = 1
        for i in mhs:
            print("=================================")
            print("Data ke {}".format(j))
            print("nik : " + i.getnik())
            print("nama : " + i.getnama())
            print("kelamin : " + i.getkelamin())
            print("universitas : " + i.getuniversitas())
            print("prodi : " + i.getprodi())
            print("nim : " + i.getnim())
            print("fakultas : " + i.getfakultas())
            print("prodi : " + i.getprodi())
            j += 1
