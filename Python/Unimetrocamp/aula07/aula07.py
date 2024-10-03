class Animal:
    def __init__(self, peso, tamanho, habitat = "terrestre", qtdDentes = 20):
        self.peso = peso
        self.tamanho = tamanho
        self.habitat = habitat
        self.qtdDentes = qtdDentes

    def getPeso(self):
        return self.peso

    def setPeso(self, peso):
        self.peso = peso

    def getTamanho(self):
        return self.tamanho

    def setTamanho(self, tamanho):
        self.tamanho = tamanho

    def getHabitat(self):
        return self.habitat

    def setHabitat(self, habitat):
        self.habitat = habitat

    def getQtdDentes(self):
        return self.qtdDentes

    def setQtdDentes(self, qtdDentes):
        self.qtdDentes = qtdDentes

class Cachorro (Animal):
    def __init__(self, peso, tamanho, habitat, qtdDentes, qtdPatas, tipoRacao):
        super().__init__(peso, tamanho, habitat, qtdDentes)
        self.qtdPatas = qtdPatas
        self.tipoRacao = tipoRacao
    
    def getQtdPatas(self):
        return self.qtdPatas

    def setQtdPatas(self, qtdPatas):
        self.qtdPatas = qtdPatas
    
    def getQtdPatas(self):
        return self.tipoRacao

    def setQtdPatas(self, tipoRacao):
        self.tipoRacao = tipoRacao

c1 = Cachorro(40, 1.20, "terrestre", 35, 4, "Gold")
c2 = Cachorro(10, 0.80, "terrestre", 15, 4 , "labrador")

print(c1.getPeso())
