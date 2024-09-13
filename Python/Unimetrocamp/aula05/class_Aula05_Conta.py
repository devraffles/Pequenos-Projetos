import random

class ContaBancaria:
    def __init__(self, nome_Titular):
        self.nome_Titular = nome_Titular
        self.num_Conta = random.randrange(0, 1000)
        self.saldo = 0

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

    def Deposito (self, deposito):
        self.saldo += deposito
        print(f"{self.nome_Titular} depositou {deposito}, e seu saldo ficou {self.saldo}")

    def Saque (self, saque):
        if saque > self.saldo and saque < 0:
            print(f"{self.nome_Titular} Seu saldo é de {self.saldo}, portanto não é possivel fazer esse saque de {saque}")
            return

        self.saldo -= saque
        print(f"{self.nome_Titular} sacou {saque}, e seu saldo ficou {self.saldo}")