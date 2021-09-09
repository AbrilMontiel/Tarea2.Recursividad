def printRev( n ):
  if n > -1:
    print (  n  )
    printRev( n - 1 )
    if n == 0:
      print ( 'BOOOMMMM!!' )

print ('3. Cuenta regresiva\n ')
printRev( 3 )
