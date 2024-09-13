import class_Aula05_Conta as ca
import class_Aula05_Bank as ba

qnt_Conta = int(input("Digite quantas contas deseja criar: "))

for i in range(0, qnt_Conta - 1):
    

    print("---------------------------------------")
    print("|           Seja Bem Vindo            |")
    print("---------------------------------------")

    nome_Conta = str(input(f"Digite o nome da Conta {i}:"))
    nome_Bank = str(input(f"Digite o nome do Banck {i}:"))

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
    print("|       (3) Visualizar Contas         |")
    print("---------------------------------------")

    op = int(input("Digite a sua opção: "))

    match op:
        case 1:
            valor_Deposito = float(input("Digite quanto deseja depositar: "))
            bank.getContasBancarias()[i].Deposito(valor_Deposito)            
        case 2:
            valor_Saque = float(input("Digite quanto deseja depositar: "))
            bank.getContasBancarias()[i].Saque(valor_Saque)
        case 3:
            bank.viewContas()
        case _:
            print(f"Você {bank.getContasBancarias()[i].getNome_Titular()} selecionou uma opção que não existe")