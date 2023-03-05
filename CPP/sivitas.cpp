#include "header.hh"

sivitas::sivitas() : human()
{
    universitas = "";
    email = "";
}

sivitas::sivitas(string nik, string nama, string gender, string universitas, string email) : human(nik, nama, gender)
{
    this->universitas = universitas;
    this->email = email;
}

void sivitas::setuniversitas(string universitas)
{
    this->universitas = universitas;
}
void sivitas::setemail(string email)
{
    this->email = email;
}

string sivitas::getemail()
{
    return this->email;
}
string sivitas::getuniversitas()
{
    return this->universitas;
}

sivitas::~sivitas()
{
}