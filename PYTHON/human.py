# class human
class human:
    __nik = ""
    __nama = ""
    __kelamin = ""

    # constructor
    def __init__(self, nik="", nama="", kelamin=""):
        self.__nik = nik
        self.__nama = nama
        self.__kelamin = kelamin

    # setter dan getter
    def getnik(self):
        return self.__nik

    def getnama(self):
        return self.__nama

    def getkelamin(self):
        return self.__kelamin

    def setprodi(self, nik):
        self.__nik = nik

    def setnama(self, nama):
        self.__nama = nama

    def setkelamin(self, kelamin):
        self.__kelamin = kelamin

# class sivitas sebagai child dari human


class sivitas(human):
    __universitas = ""
    __email = ""

    # //constructor
    def __init__(self, nik, nama, kelamin, universitas, email):
        human.__init__(self, nik, nama, kelamin)
        self.__universitas = universitas
        self.__email = email
    # setter dan getter

    def getuniversitas(self):
        return self.__universitas

    def getemail(self):
        return self.__email

    def setuniversitas(self, universitas):
        self.__universitas = universitas

    def setemail(self, email):
        self.__email = email


# class mahasiswa yang merupakan child dar sivitas
class mahasiswa(sivitas):
    __nim = ""
    __fakultas = ""

    # //constructor
    def __init__(self, nik,  nama, kelamin, universitas, email, nim, fakultas):
        sivitas.__init__(self, nik, nama, kelamin, universitas, email)
        self.__nim = nim
        self.__fakultas = fakultas

    # setter dan getter
    def getnim(self):
        return self.__nim

    def getfakultas(self):
        return self.__fakultas

    def setfakultas(self, fakultas):
        self.__fakultas = fakultas

    def setnim(self, nim):
        self.__nim = nim


class dosen(sivitas):
    __nip = ""
    __lastedu = ""
    __keahlian = ""
    __fakultas = ""

    # constructor
    def __init__(self, nik, nama, kelamin, universitas, email, nip, lastedu, keahlian, fakultas):
        sivitas.__init__(self, nik, nama, kelamin, universitas, email)
        self.__nip = nip
        self.__lastedu = lastedu
        self.__keahlian = keahlian

    # setter dan getter
    def getnip(self):
        return self.__nip

    def setnip(self, nip):
        self.__nip = nip

    def getlastedu(self):
        return self.__lastedu

    def setlastedu(self, lastedu):
        self.__lastedu = lastedu

    def getkeahlian(self):
        return self.__keahlian

    def setkeahlian(self, keahlian):
        self.__keahlian = keahlian

    def getfakultas(self):
        return self.__fakultas

    def setfakultas(self, fakultas):
        self.__fakultas = fakultas
