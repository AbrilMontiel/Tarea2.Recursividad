print ('2. Suma de una lista\n')
lista = [ 2, 4, 6, 8]
print (f'Lista = {lista}\n')

def suma( lista ):
  if lista == []:
       return 0
  else:
       return lista [ 0 ] + suma( lista[1:] )
print (f'La suma es: {suma(lista)}')
