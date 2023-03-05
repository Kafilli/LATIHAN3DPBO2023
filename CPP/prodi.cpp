#include "header.hh"

prodi::prodi()
{
    namaprodi = "";
    kodeprodi = "";
}

prodi::prodi(string namaprodi, string kodeprodi, mahasiswa mmahasiswa, dosen ddosen, matkul mmatkul)
{
    this->namaprodi = namaprodi;
    this->kodeprodi = kodeprodi;
    this->mmahasiswa.push_back(mmahasiswa);
    this->ddosen.push_back(ddosen);
    this->mmatkul.push_back(mmatkul);
}

void prodi::setnamaprodi(string namaprodi)
{
    this->namaprodi = namaprodi;
}
void prodi::setkodeprodi(string kodeprodi)
{
    this->kodeprodi = kodeprodi;
}

void prodi::setmahasiswa(mahasiswa mmahasiswa)
{
    this->mmahasiswa.push_back(mmahasiswa);
}
void prodi::setdosen(dosen ddosen)
{
    this->ddosen.push_back(ddosen);
}
void prodi::setmatkul(matkul mmatkul)
{
    this->mmatkul.push_back(mmatkul);
}

string prodi::getkodeprodi()
{
    return this->kodeprodi;
}
string prodi::getnamaprodi()
{
    return this->namaprodi;
}

list<mahasiswa> prodi::getmahasiswa()
{
    return this->mmahasiswa;
}
list<dosen> prodi::getdosen()
{
    return this->ddosen;
}
list<matkul> prodi::getmatkul()
{
    return this->mmatkul;
}

// prosedur untuk mengeluarkan semua output dari prodi, mahasiswa, dosen, dan matkul
void prodi::output()
{
    cout << "Dosen pada prodi " << getnamaprodi() << " " << getkodeprodi() << ": \n";
    int i = 1;
    list<dosen> listdosen = getdosen();
    for (list<dosen>::iterator it = (listdosen).begin(); it != (listdosen).end(); it++)
    {
        cout << (i) << ". " << it->getnama() << "\n";
        cout << "   " << it->getnip() << "\n";
        cout << "   " << it->getkeahlian() << "\n";
        cout << "   " << it->getkelamin() << "\n";
        i = i + 1;
    }

    cout << "Mahasiswa pada prodi " << getnamaprodi() << " " << getkodeprodi() << ": \n";
    i = 1;
    list<mahasiswa> listmhs = getmahasiswa();
    for (list<mahasiswa>::iterator it = (listmhs).begin(); it != (listmhs).end(); it++)
    {
        cout << (i) << ". " << it->getnama() << "\n";
        cout << "   " << it->getnim() << "\n";
        cout << "   " << it->getkelamin() << "\n";
        i = i + 1;
    }

    cout << "Matkul pada prodi " << getnamaprodi() << " " << getkodeprodi() << ": \n";
    i = 1;
    list<matkul> listmatkul = getmatkul();
    for (list<matkul>::iterator it = (listmatkul).begin(); it != (listmatkul).end(); it++)
    {
        cout << (i) << ". " << it->getmatkul() << "\n";
        i = i + 1;
    }
}

prodi::~prodi()
{
}