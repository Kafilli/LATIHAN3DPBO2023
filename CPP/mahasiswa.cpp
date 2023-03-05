#include "header.hh"

mahasiswa::mahasiswa() : sivitas()
{
    nim = "";
    fakultas = "";
}

mahasiswa::mahasiswa(string nik, string nama, string kelamin, string universitas, string email, string nim, string fakultas) : sivitas(nik, nama, kelamin, universitas, email)
{
    this->nim = nim;
    this->fakultas = fakultas;
}

void mahasiswa::setnim(string nim)
{
    this->nim = nim;
}
void mahasiswa::setfakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string mahasiswa::getfakultas()
{
    return this->fakultas;
}
string mahasiswa::getnim()
{
    return this->nim;
}

mahasiswa::~mahasiswa()
{
}