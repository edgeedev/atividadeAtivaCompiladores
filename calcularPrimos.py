def verificarNumeroPrimo(valor: int):
    numeroDeDivisores: int = 0

    for i in range(1, valor+1):
        if (valor % i == 0):
            numeroDeDivisores = numeroDeDivisores + 1
    if numeroDeDivisores == 2:
      return True
    else:
      return False   

numerosPrimos = []
count: int = 1

while (len(numerosPrimos) < 100):
    if verificarNumeroPrimo(count):
        numerosPrimos.append(count)
    count = count + 1

print(numerosPrimos)





