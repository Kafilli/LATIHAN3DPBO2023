#include "header.hh"

matkul::matkul()
{
    namamatkul = "";
}

matkul::matkul(string namamatkul)
{
    this->namamatkul = namamatkul;
}

void matkul::setmatkul(string matkul)
{
    this->namamatkul = matkul;
}

string matkul::getmatkul()
{
    return this->namamatkul;
}

matkul::~matkul()
{
}