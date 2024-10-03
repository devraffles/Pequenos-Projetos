class Filme:
    def __init__(self):
        self.fila = []

    def ADD(self, obj):
        self.fila.append(obj)

    def REMOVE(self, obj):
        self.fila.remove(obj)
    
    def SEARCH(self, obj):
        for i in self.fila:
            if(obj == self.fila[i]):
                return self.fila[i]
            
        return False
    
    def isEmpty(self):
        elemento = len(self.fila)
        if(elemento == 0):
            return True
        
        return False
    
    def size(self):
        elemento = len(self.fila)
        return elemento
    
    def index(self, i):
        elemento = self.fila.index(i)
        return elemento
    
    def pop(self, i):
        elemento = self.pilha.index(tamanho)
        self.pilha.remove(elemento)
    
    def popI(self, i):
        elemento = self.pilha.index(i)
        self.fila.remove(elemento)
    
    

