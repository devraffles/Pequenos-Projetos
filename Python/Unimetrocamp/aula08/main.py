class Veiculo:
    def __init__(self, marca, modelo, cor):
        self.marca = marca
        self.modelo = modelo
        self.cor = cor
        self.veiculos = []
    
    def getMarca(self):
        return self.marca

    def setMarca(self, marca):
        self.marca = marca
    
    def getModelo(self):
        return self.modelo

    def setModelo(self, modelo):
        self.modelo = modelo
    
    def getCor(self):
        return self.cor
    
    def setCor(self, cor):
        self.cor = cor
    
    def setVeiculos(self, veiculo):
        self.veiculos.append(veiculo)


class Car(Veiculo):
    def __init__(self, marca, modelo, cor, retrovisor, tipoCambio, modeloDirecao):
        super().__init__(marca, modelo, cor)
        self.retrovisor = retrovisor
        self.tipoCambio = tipoCambio
        self.modeloDirecao = modeloDirecao
    
    def getRetrovisor(self):
        return self.retrovisor
    
    def setRetrovisor(self, retrovisor):
        self.retrovisor = retrovisor
    
    def getTipoCambio(self):
        return self.tipoCambio
    
    def setTipoCambio(self, tipoCambio):
        self.tipoCambio = tipoCambio
    
    def getModeloDirecao(self):
        return self.modeloDirecao
    
    def setModeloDirecao(self, modeloDirecao):
        self.modeloDirecao = modeloDirecao
                
    def viewCarro (self):
        for i in self.veiculos:
            print(f'''
    Marca: {i.getMarca()}
    Modelo: {i.getModelo()}
    Cor: {i.getCor()}
    Retrovisor: {i.getRetrovisor()}
    Tipo de Cambio: {i.getTipoCambio()}
    Modelo Direção: {i.getModeloDirecao()}
                  ''')

    

class Aviao(Veiculo):
    def __init__(self, marca, modelo, cor, qtdBanheiro, tipoTurbina, qntComisario):
        super().__init__(marca, modelo, cor)
        self.qtdBanheiro = qtdBanheiro
        self.tipoTurbina = tipoTurbina
        self.qntComisario = qntComisario
    
    def getQtdBanheiro(self):
        return self.qtdBanheiro
    
    def setQtdBanheiro(self, qtdBanheiro):
        self.qtdBanheiro = qtdBanheiro
    
    def getTipoTurbina(self):
        return self.tipoCambio
    
    def setTipoTurbina(self, tipoCambio):
        self.tipoCambio = tipoCambio
    
    def getQntComisario(self):
        return self.qntComisario
    
    def setQntComisario(self, qntComisario):
        self.qntComisario = qntComisario

    def viewAviao (self):
        for i in self.veiculos:
            print(f'''
    Marca: {i.getMarca()}
    Modelo: {i.getModelo()}
    Cor: {i.getCor()}
    Quantidade de Banheiro: {i.getQtdBanheiro()}
    Tipo de Turbina: {i.getTipoTurbina()}
    quantidade de Comisario: {i.getQntComisario()}
                  ''')

c1 = Car("Porche", "911", "cinza", 2, "Manual", "Hidraulico")
c2 = Car("Porche", "911 GTR", "branca", 2, "Manual", "Hidraulico")
a1 = Aviao("Airline Emirates", "Boeing 777", "verde", 1, "7fs-dh", 2)

c1.setVeiculos(c1)
c2.setVeiculos(c2)
a1.setVeiculos(a1)

c1.viewCarro(c1)