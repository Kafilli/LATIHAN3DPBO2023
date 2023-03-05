#include "header.hh"

human::human()
{
    nik = "";
    nama = "";
    kelamin = "";
}

human::human(string nik, string nama, string kelamin)
{
    this->nik = nik;
    this->nama = nama;
    this->kelamin = kelamin;
}

void human::setnik(string nik)
{
    this->nik = nik;
}
void human::setnama(string nama)
{
    this->nama = nama;
}
void human::setkelamin(string kelamin)
{
    this->kelamin = kelamin;
}

string human::getnik()
{
    return this->nik;
}
string human::getnama()
{
    return this->nama;
}
string human::getkelamin()
{
    return this->kelamin;
}

human::~human()
{
}