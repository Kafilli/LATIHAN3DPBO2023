class prodi:
    # atribut private
    __namaprodi = ""
    __kodeprodi = ""
    __listmhs = []
    __listdosen = []
    __listcourse = []

    # constructor
    def __init__(self, namaprodi, kodeprodi):
        self.__namaprodi = namaprodi
        self.__kodeprodi = kodeprodi

    def setnamaprodi(self, prodi):
        self.__namaprodi = prodi

    def getnamaprodi(self):
        return self.__namaprodi

    def setkodeprodi(self, prodi):
        self.__kodeprodi = prodi

    def getkodeprodi(self):
        return self.__kodeprodi

    def addmhs(self, mhs):
        self.__listmhs.append(mhs)

    def getlistmhs(self):
        print(f"Mahasiswa pada prodi {self.__namaprodi} {self.__kodeprodi}:")
        i = 1
        for mhs in self.__listmhs:
            print(f"{i}. {mhs.getnama()}")
            i = i + 1

    def adddosen(self, dosen: object):
        self.__listdosen.append(dosen)

    def getlistdosen(self):
        print(f"Dosen pada prodi {self.__namaprodi} {self.__kodeprodi}:")
        i = 1
        for dosen in self.__listdosen:
            print(f"{i}. {dosen.getnama()}")
            i = i + 1

    def addcourse(self, course):
        self.__listcourse.append(course)

    def getlistcourse(self):
        print(f"Matkul pada prodi {self.__namaprodi} {self.__namaprodi}:")
        i = 1
        for course in self.__listcourse:
            print(f"{i}. {course.getnamamatkul()}")
            i = i + 1
