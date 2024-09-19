import class_Aula05_Conta as ca
import class_Aula05_Bank as ba

qnt_Conta = int(input("Digite quantas contas deseja criar: "))

if(qnt_Conta < 0):
    print("Não é possivel não fazer nenhuma conta")
if(qnt_Conta <= 1):
    qnt_Conta_Tratada = 1
if(qnt_Conta > 1):
    qnt_Conta_Tratada = qnt_Conta - 1


for cont in range(0, qnt_Conta_Tratada):
    

    print("---------------------------------------")
    print("|           Seja Bem Vindo            |")
    print("---------------------------------------")

    nome_Conta = str(input(f"Digite o nome da Conta {cont}:"))
    nome_Bank = str(input(f"Digite o nome do Bank (Itaú, Nubank, BB, C6) {cont}:"))

    bank = ba.Bank(nome_Bank)

    conta = ca.ContaBancaria(nome_Conta)

    bank.setContasBancarias(conta)

    print("---------------------------------------")
    print("|    Qual Operação deseja realizar    |")
    print("---------------------------------------")
    print("|       (1) Deposito                  |")
    print("---------------------------------------")
    print("|       (2) Saque                     |")
    print("---------------------------------------")
    print("|       (3) Emprestimo                |")
    print("---------------------------------------")
    print("|       (4) Visualizar Contas         |")
    print("---------------------------------------")

    op = int(input("Digite a sua opção: "))

    match op:
        case 1:
            valor_Deposito = float(input("Digite quanto deseja Depositar: "))
            bank_conta = bank.getContasBancarias()[cont]
            nome_conta = bank.getContasBancarias()[cont].getNome_Titular()
            bank_conta.Deposito(bank_conta, valor_Deposito, nome_conta)            
        case 2:
            valor_Saque = float(input("Digite quanto deseja Saque: "))
            bank.getContasBancarias()[cont].Saque(valor_Saque)
        case 3:
            valor_Emprestimo = float(input("Digite quanto deseja de Emprestimo: "))
            qtd_Parcelas = float(input("Digite quantas parcelas deseja: "))
            bank.pegar_Emprestimo(valor_Emprestimo, qtd_Parcelas, cont)
        case 4:
            bank.viewContas()
        case _:
            print(f"Você {bank.getContasBancarias()[cont].getNome_Titular()} selecionou uma opção que não existe")