class prodi:
    # atribut private
    __namaprodi = ""
    __listmhs = []
    __listdosen = []
    __listcourse = []

    # constructor
    def __init__(self, namaprodi):
        self.__namaprodi = namaprodi

    def setnamaprodi(self, prodi):
        self.__namaprodi = prodi

    def getnamaprodi(self):
        return self.__namaprodi

    def addmhs(self, mhs):
        self.__listmhs.append(mhs)

    def getlistmhs(self):
        print(f"Mahasiswa pada prodi {self.__namaprodi} :")
        i = 1
        for mhs in self.__listmhs:
            print(f"{i}. {mhs.getnama()}")
            i = i + 1

    def adddosen(self, dosen: object):
        self.__listdosen.append(dosen)

    def getlistdosen(self):
        print(f"Dosen pada prodi {self.__namaprodi} :")
        i = 1
        for dosen in self.__listdosen:
            print(f"{i}. {dosen.getnama()}")
            i = i + 1

    def addcourse(self, course):
        self.__listcourse.append(course)

    def getlistcourse(self):
        print(f"Matkul pada prodi {self.__namaprodi} :")
        i = 1
        for course in self.__listcourse:
            print(f"{i}. {course.getnamamatkul()}")
            i = i + 1
