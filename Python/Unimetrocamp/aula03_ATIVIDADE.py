class Aluno:
    def __init__(self, nome):
        self.nome = nome

    p1 = 0
    p2 = 0
    trabalho = 0

    def getNome(self):
        return self.nome
    
    def setNome(self, nome):
        self.nome = nome

    def getP1(self):
        return self.p1
    
    def setP1(self, p1):
        self.p1 = p1

    def getP2(self):
        return self.p2
    
    def setP2(self, p2):
        self.p2 = p2

    def getTrabalho(self):
        return self.trabalho
    
    def setTrabalho(self, trabalho):
        self.trabalho = trabalho

    def getMedia(self):
        media = (self.p1 + self.p2 + self.trabalho) / 3 
        return media
    
    def getValoresAlunos(self):
        return (self.nome, self.p1, self.p2, self.trabalho, self.getMedia())
    
#---------------------------------------------------------------------------------------#

aluno = Aluno("Rafael")
aluno2 = Aluno("Pele")
aluno3 = Aluno("Luca")

#---------------------------------------------------------------------------------------#

aluno.setP1(10)
aluno2.setP1(7)
aluno3.setP1(6)

#---------------------------------------------------------------------------------------#

aluno.setP2(6)
aluno2.setP2(8)
aluno3.setP2(5)

#---------------------------------------------------------------------------------------#

aluno.setTrabalho(4)
aluno2.setTrabalho(3)
aluno3.setTrabalho(4)

#---------------------------------------------------------------------------------------#

aluno.getMedia()
aluno2.getMedia()
aluno3.getMedia()

#---------------------------------------------------------------------------------------#

print("#=============#RELATORIO#=============#")
print("|  NOME  ||  MÉDIA  |")
print("---------------------")
print(f"|{aluno.getNome()}|{aluno.getMedia()}")
print("---------------------")
print(f"|{aluno2.getNome()}|{aluno2.getMedia()}")
print("---------------------")
print(f"|{aluno3.getNome()}|{aluno3.getMedia()}")
print("---------------------")

#---------------------------------------------------------------------------------------#

print("#=============#RELATORIO#=============#")
print("|  DADOS  |")
print("---------------------")
print(f"|  {aluno.getValoresAlunos()}  |")
print("---------------------")
print(f"|  {aluno2.getValoresAlunos()}  |")
print("---------------------")
print(f"|  {aluno3.getValoresAlunos()}  |")
print("---------------------")

#---------------------------------------------------------------------------------------#