class Bank:
    def __init__(self, nome):
        self.nome = nome
        self.contasBancarias = []

    def getNome (self):
        return self.nome

    def setNum_Conta (self, nome):
        self.nome = nome

    def getContasBancarias (self):
        return self.contasBancarias

    def setContasBancarias (self, conta):
        self.contasBancarias.append(conta)

    def viewContas (self):
        for conta in self.contasBancarias:
            print(f'''
                    Número: {conta.getNum_Conta()}
                    Nome: {conta.getNome_Titular()}
                    Saldo: {conta.getSaldo()}
                  ''')