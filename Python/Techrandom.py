import requests #Biblioteca para realizar requisições
import random

url = 'https://raw.githubusercontent.com/guilhermeonrails/api-imersao-ia/main/words.json' #Armazena a url API
resp = requests.get(url) #Faz a requisição API
dat = resp.json() #Transforma a resposta em JSON

val_secreta = random.choice(dat)
palavra_secreta = val_secreta['palavra'] #Ve somente a palavra desejada da API
dica = val_secreta['dica'] # Ve somente a dica desejada da API

print('-------------------------------------------------------------')
print('|                  Bem-Vindo a Techrandom                   |')
print('-------------------------------------------------------------')

print(f'A palavra possui {len(palavra_secreta)} letras')
print(f'DICA => {dica}')

resp_secre = input('Qual é a resposta: ')

if resp_secre == palavra_secreta:
  print('Parabens!!! Voce é um monstro')
else:
  print(':( não foi dessa vez')
  print(f'A resposta era {palavra_secreta}')