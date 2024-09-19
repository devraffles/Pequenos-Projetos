import random


class ContaBancaria:
    def __init__(self, nome_Titular):
        self.nome_Titular = nome_Titular
        self.num_Conta = random.randrange(0, 1000)
        self.parcela = 0.0
        self.saldo = 0.0

    def getNum_Conta (self):
        return self.num_Conta

    def setNum_Conta (self, num_Conta):
        self.num_Conta = num_Conta

    def getNome_Titular (self):
        return self.nome_Titular

    def setNome_Titular (self, nome_Titular):
        self.nome_Titular = nome_Titular

    def getSaldo (self):
        return self.saldo

    def setSaldo (self, saldo):
        self.saldo = saldo

    def getParcela (self):
        return self.parcela

    def setParcela (self, parcela):
        self.parcela = parcela
        
    @staticmethod
    def Deposito (self, deposito, nome):
        self.saldo += deposito
        print(f"{nome} depositou {deposito}, e seu saldo ficou {self.saldo}")

    def Saque (self, saque):
        if (self.saldo < 0):
            print(f"{self.nome_Titular} Seu saldo é de {self.saldo}, portanto é insuficiente para o saque de {saque}")
            return 0
        if (saque <= 0):
            print(f"{self.nome_Titular} não é possivel de fazer esse saque {saque}")
            return 0
        if (saque > self.saldo):
            print(f"{self.nome_Titular} Seu saldo é de {self.saldo}, portanto não é possivel fazer esse saque de {saque}")
            return 0

        self.saldo -= saque
        print(f"{self.nome_Titular} sacou {saque}, e seu saldo ficou {self.saldo}")