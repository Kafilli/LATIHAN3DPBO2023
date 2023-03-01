#class course sebagai mata kuliah
class course:
    #atribut private
    __namamatkul = ""
    # constructor
    def __init__(self, namamatkul):
        self.__namamatkul = namamatkul
    #setter dan getter
    def setnamamatkul(self, namamatkul):
        self.__namamatkul = namamatkul

    def getnamamatkul(self):
        return self.__namamatkul
