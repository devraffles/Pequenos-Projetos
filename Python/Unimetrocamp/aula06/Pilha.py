class Pilha:
    def __init__(self):
        self.pilha = []
    
    def push(self, obj):
        self.pilha.append(obj)
    
    def pop(self):
        tamanho = len(self.pilha) - 1
        elemento = self.pilha.index(tamanho)
        self.pilha.remove(elemento)
    
    def peek(self):
        tamanho = len(self.pilha) - 1
        elemento = self.pilha.index(tamanho)
        return elemento
    
    def isEmpty(self):
        elemento = len(self.pilha)
        if(elemento == 0):
            return True
        
        return False
    
    def size(self):
        elemento = len(self.pilha)
        return elemento
         
