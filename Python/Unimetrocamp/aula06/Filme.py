class Filme:
    def __init__(self, nome, ano):
        self.nome = nome
        self.ano = ano
    
    def getNome (self):
        return self.nome

    def setNome (self, nome):
        self.nome = nome
    
    def getAno (self):
        return self.ano

    def setAno (self, ano):
        self.ano = ano
