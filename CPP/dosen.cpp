#include "header.hh"

dosen::dosen() : sivitas()
{
    nip = "";
    lastedu = "";
    keahlian = "";
    fakultas = "";
}

dosen::dosen(string nik, string nama, string kelamin, string universitas, string email, string nip, string lastedu, string keahlian, string fakultas) : sivitas(nik, nama, kelamin, universitas, email)
{
    this->nip = nip;
    this->lastedu = lastedu;
    this->keahlian = keahlian;
    this->fakultas = fakultas;
}

void dosen::setnip(string nip)
{
    this->nip = nip;
}
void dosen::setlastedu(string lastedu)
{
    this->lastedu = lastedu;
}
void dosen::setkeahlian(string keahlian)
{
    this->keahlian = keahlian;
}
void dosen::setfakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string dosen::getnip()
{
    return this->nip;
}
string dosen::getlastedu()
{
    return this->lastedu;
}
string dosen::getkeahlian()
{
    return this->keahlian;
}
string dosen::getfakultas()
{
    return this->fakultas;
}

dosen::~dosen()
{
}