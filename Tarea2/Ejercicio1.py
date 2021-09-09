print ('1. Serie de Fibonacci\n')
def printRev( n ):
  if n > 1:
     return printRev( n - 1 ) +  printRev( n - 2 )
  return n
for i in range(15):
   print (printRev(i))
        
