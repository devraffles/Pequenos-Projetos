# #TIPOS DE DADOS

# #a = [(2, "tchau", False), (1, "oi", True), 5]

# i = {
#     'name': 'Rafael',
#     'idade': 34,
#     'notas': {
#         '1Sem': [5, 6, 7],
#         '2Sem': [2, 8, 10],
#     }
# }

# y = {
#     'name': 'Rafael',
#     'idade': 34,
# }

# print(i) {'name': 'Rafael', 'idade': 34, 'notas': {'1Sem': [5, 6, 7], '2Sem': [2, 8, 10]}}
# print(type(i)) <class 'dict'>

# print(y) {'name': 'Rafael', 'idade': 34}
# print(type(y))<class 'dict'>

# # ATIVIDADE:
# # Criar um dict minhaSala, onde tem uma lista de Alunos onde cada elemento da lista é um dict e cada dict possui um nome e idade

minhaSala = {
    'alunos': [
        {
            'nome': 'Vini', 
            'idade': 26
        }, 
        {
            'nome': 'Ramon', 
            'idade': 19
        }, 
        {
            'nome': 'Rafael', 
            'idade': 18
        } 
    ]
}

# print(minhaSala['alunos'][2]['nome'])

##ATIVIDADE 2

# def olhaAlunos(db, idadeMinima):
#     alunosFiltrados = []
#     listAlunos = db['alunos']

#     for aluno in listAlunos:
#         if aluno['idade'] >= idadeMinima:
#             alunosFiltrados.append(aluno['nome'])
#     return alunosFiltrados
    

# resultado = olhaAlunos(minhaSala, 18)

# print(resultado)

##ATIVIDADE 3
# 

# def dividiNumero(n1, n2):
#     if n2 == 0:
#         print("Não é possivel dividir um número por 0")
#         return None
#     return n1 / n2

# num1 = int(input("Digite o primeiro número: "))
# num2 = int(input("Digite o segundo número: "))

# divisao = dividiNumero(num1, num2)

# print(divisao)
