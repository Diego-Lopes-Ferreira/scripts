from tabulate import tabulate

def fizzbuzz(n):
  msg = ''
  if n % 3 == 0:
    msg += 'Fizz'
  if n % 5 == 0:
    msg += 'Buzz'
  if msg == '':
    msg = str(n)
  return msg

def showFizzBuzz(columns):
  '''columns int, show fizzbuzz in a table with 'columns' columns'''
  lista = []
  for i in range(1, 101):
    n = (i-1)//columns
    if ((i % columns) == 0 or i == 1):
      lista.append(list())
    lista[n].append(fizzbuzz(i))
  print(tabulate(lista))


print('FIZZBUZZ')
user = input('Nº of columns on the FizzBuzz table\n>>> ')
while (not user.isnumeric() or int(user) > 12):
  print('ERROR: Nº of columns must be an integer, less or equal to 12')
  user = input('Nº of columns on the FizzBuzz table\n>>> ')

showFizzBuzz(int(user))
