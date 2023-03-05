#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class human
{
private:
    string nik;
    string nama;
    string kelamin;

public:
    human();
    human(string nik, string nama, string kelamin);
    // getter dan setter
    string getnik();
    string getnama();
    string getkelamin();

    void setnik(string nik);
    void setnama(string nama);
    void setkelamin(string kelamin);
    ~human();
};

class sivitas : public human
{
private:
    string universitas;
    string email;

public:
    sivitas();
    sivitas(string nik, string nama, string kelamin, string universitas, string email);
    // setter dan getter
    string getuniversitas();
    string getemail();

    void setuniversitas(string universitas);
    void setemail(string email);
    ~sivitas();
};

class mahasiswa : public sivitas
{
private:
    string nim;
    string fakultas;

public:
    mahasiswa();
    mahasiswa(string nik, string nama, string kelamin, string universitas, string email, string nim, string fakultas);

    string getnim();
    string getfakultas();

    void setnim(string nim);
    void setfakultas(string fakultas);
    ~mahasiswa();
};

class dosen : public sivitas
{
private:
    string nip;
    string lastedu;
    string keahlian;
    string fakultas;

public:
    dosen();
    dosen(string nik, string nama, string kelamin, string universitas, string email, string nip, string lastedu, string keahlian, string fakultas);
    string getnip();
    string getlastedu();
    string getkeahlian();
    string getfakultas();

    void setnip(string nip);
    void setlastedu(string lastedu);
    void setkeahlian(string keahlian);
    void setfakultas(string fakultas);

    ~dosen();
};

class matkul
{
private:
    string namamatkul;

public:
    matkul();
    matkul(string namamatkul);

    string getmatkul();

    void setmatkul(string matkul);
    ~matkul();
};

class prodi
{
private:
    list<mahasiswa> mmahasiswa;
    list<dosen> ddosen;
    list<matkul> mmatkul;
    string namaprodi;
    string kodeprodi;

public:
    prodi();
    prodi(string namaprodi, string kodeprodi, mahasiswa mmahasiswa, dosen ddosen, matkul mmatkul);

    list<mahasiswa> getmahasiswa();
    list<dosen> getdosen();
    list<matkul> getmatkul();
    string getnamaprodi();
    string getkodeprodi();

    void setmahasiswa(mahasiswa mmahasiswa);
    void setdosen(dosen ddosen);
    void setmatkul(matkul mmatkul);
    void setnamaprodi(string namaprodi);
    void setkodeprodi(string kodeprodi);
    void output();
    ~prodi();
};