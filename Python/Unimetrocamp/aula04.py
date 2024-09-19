class Player:
    def __init__(self, nome):
        self.nome = nome
        self.x = 0
        self.y = 0

    def getNome(self):
        return self.nome
    
    def setNome(self, nome):
        self.nome = nome

    def getX(self):
        return self.nome
    
    def setX(self, x):
        self.x = x
    
    def getY(self):
        return self.y
    
    def setY(self, y):
        self.y = y

    def Pular(self):
        self.y += 1
        print(f"Player {self.getNome()} pulou: {(self.x, self.y)}")

    def Agachar(self):
        self.y -= 1
        print(f"Player {self.getNome()} agachou: {(self.x, self.y)}")

    def andarEsquerda(self):
        self.x -= 1
        print(f"Player {self.getNome()} andou para esquerda: {(self.x, self.y)}")

    def andarDireita(self):
        self.x += 1
        print(f"Player {self.getNome()} andou para direita: {(self.x, self.y)}")

p = Player("Rafael")
p2 = Player("Pele")

p.Agachar()
p.Pular()
p.andarDireita()
p.andarEsquerda()