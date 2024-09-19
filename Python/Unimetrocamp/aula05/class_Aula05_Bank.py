import class_Aula05_Conta as ca

class Bank:
    def __init__(self, nome):
        self.nome = nome
        self.Taxa(nome)
        self.contasBancarias = []
        self.taxaBank = 0

    def getNome (self):
        return self.nome

    def setNome (self, nome):
        self.nome = nome

    def getContasBancarias (self):
        return self.contasBancarias

    def setContasBancarias (self, conta):
        self.contasBancarias.append(conta)

    def Taxa (self, nome):
        if (nome == 'Itaú'):
            self.taxaBank = 4
            return 0
        if (nome == 'Nubank'):
            self.taxaBank = 3
            return 0
        if (nome == 'BB'):
            self.taxaBank = 7
            return 0
        if (nome == 'C6'):
            self.taxaBank = 2
            return 0
        
        print("Não existe este banco")
        exit()

    def pegar_Emprestimo (self, emprestimo, qtd_parcelas, cont):
        conta = self.getContasBancarias()[cont]
        
        conta.Deposito(conta, emprestimo, self.nome)

        # transfomando em porcentagem a taxa
        porcentagem_taxa = (emprestimo * self.taxaBank) / 100
        
        #Aplica os juros
        emprestimo_total_juros = emprestimo * (1 + porcentagem_taxa)
        
        # Divide o valor total pelas parcelas
        parcelas_mes = emprestimo_total_juros / qtd_parcelas
        
        print(f"{conta.getNome_Titular()} o seu empréstimo de R${emprestimo:,.2f} concedido com sucesso. Total a pagar: R$ {emprestimo_total_juros:,.2f} em {qtd_parcelas} parcelas de R$ {parcelas_mes:,.2f}.")
            
    def viewContas (self):
        for conta in self.contasBancarias:
            print(f'''
                    Número: {conta.getNum_Conta()}
                    Nome: {conta.getNome_Titular()}
                    Saldo: {conta.getSaldo()}
                  ''')