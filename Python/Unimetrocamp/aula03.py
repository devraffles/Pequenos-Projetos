class Aluno:
    def __init__(self, nome, idade, peso, altura):
        self.nome = nome
        self.idade = idade
        self.peso = peso
        self.altura = altura

    def getNome(self):
        return self.nome
    
    def setNome(self, nome):
        self.nome = nome

    def getIdade(self):
        return self.idade
    
    def setIdade(self, idade):
        self.idade = idade

    def getPeso(self):
        return self.peso
    
    def setPeso(self, peso):
        self.idade = peso

    def getAltura(self):
        return self.altura
    
    def setAltura(self, altura):
        self.idade = altura
    
    def getImc(self):
        imc = self.peso / (self.altura * self.altura)
        return imc
    
    def getTodosValores(self):
        return (self.nome, self.idade, self.peso, self.altura)
        
#---------------------------------------------------------------------------------------#        

nome = str(input("Digite o seu nome: "))
idade = int(input("Digite o seu idade: "))
peso = float(input("Digite o seu peso: "))
altura = float(input("Digite o seu altura: "))

aluno = Aluno(nome, idade, peso, altura)

dados = aluno.getTodosValores()

print("---------------------")
print("Dados")
print("---------------------")

print(dados)

print("---------------------")
print("Calculo IMC")
print("---------------------")
print(aluno.getImc())
print("---------------------")