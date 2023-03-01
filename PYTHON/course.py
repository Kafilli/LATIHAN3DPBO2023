class course:
    __namamatkul = ""

    def __init__(self, namamatkul):
        self.__namamatkul = namamatkul

    def setnamamatkul(self, namamatkul):
        self.__namamatkul = namamatkul

    def getnamamatkul(self):
        return self.__namamatkul
