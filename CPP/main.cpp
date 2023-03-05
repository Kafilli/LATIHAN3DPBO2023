#include "header.hh"

int main()
{
    // instansiasi mahasiswa
    mahasiswa mhs1 = mahasiswa("001", "Fikri", "Cowo", "UPI",
                               "Fikri@email", "2107264", "FPMIPA");
    mahasiswa mhs2 = mahasiswa("002", "Muhammad", "Cowo", "UPI",
                               "Muhammad@email", "2107265", "FPMIPA");

    // instansiasi dosen
    dosen dsn1 = dosen("003", "Rose", "Cewe", "UPI", "Rose@email",
                       "1010101010", "S1", "Programming", "MIPA");

    // instansiasi matkul
    matkul course1 = matkul("Alpro");
    matkul course2 = matkul("Strukdat");
    matkul course3 = matkul("DPBO");

    // instansiasi prodi
    prodi programstudi = prodi("Ilkom", "123", mhs1, dsn1, course1);
    programstudi.setmahasiswa(mhs2);
    programstudi.setmatkul(course2);
    programstudi.setmatkul(course3);

    // mengeluarkan output
    programstudi.output();

    return 0;
}