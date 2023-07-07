#Because why not....

from json import load as load
from json import dump as dump
config = {}
with open('config.json', 'r') as file:
  pass
  #config = load(file)

greeting = ''#('Super Program v ' + config['aplication']['version'] + ' welcome:')

def call(command):
  '''Recives a command formated: >nameOfCommandWithoutSpaces\n
  Will check and run diferent commands'''
  command = command.replace('>', '')
  if command == 'login':
    login()
  elif command == 'run':
    run()
  elif command == 'test':
    print('tested with succes')
  elif command == 'tchau':
    print('Vai embora nao....')
  elif command == 'doNothing':
    pass

def test(msg, line):
  '''On config.json, keys are | msg: command/message |.\n
  Line is used for error message only.\n
  Returns true or false'''
  keys = config['keys']
  listOfKeys = list(keys.keys())
  for key in listOfKeys:
    if msg == key:
      if keys[msg][1][0] == '>':
        call(keys[msg][1])
        return keys[msg][0]
      else:
        print(str(keys[msg][1]))
        return keys[msg][0]
  print('Error:')
  print('message "' + msg + '" is not defined in line ' + str(line))
  return True


def main():
  '''Keeps asking the user for a call'''
  message = str(input('>>>')).lower()
  line = 1
  while test(message, line):
    message = str(input('>>>')).lower()
    line += 1

def login():
  login = str(input('Login:\n>>> ')).lower()
  password = str(input('Senha:\n>>> ')).lower()
  trueLoginList = config['login']['login']
  truePasswordList = config['login']['password']
  for trueLogin in trueLoginList:
    if login == trueLogin:
      for truePassword in truePasswordList:
        if password == truePassword:
          print('Login Efetuado Com Sucesso')
          return 1
  print('Login Nao Efetuado')
  return 0

config = {
  'aplication':
  {
    'version': '0.0.?'
  },
  'login':
  {
    'login': ['a', 'b'],
    'password': ['123', 'bingo']
  },
  'keys':
  {
    '': [True, '>doNothing'],
    'run': [True, '>run'],
    'test': [True, '>test'],
    'login': [True, '>login'],
    'tchau': [True, '>tchau'],
    'exit': [False, 'Bye Bye...']
  }
}

def createLogin():
  global config
  login = str(input('Login:\n>>> ')).lower()
  password = str(input('Senha:\n>>> ')).lower()
  trueLoginList = config['login']['login']
  truePasswordList = config['login']['password']
  trueLoginList.append(login)
  truePasswordList.append(password)
  with open('config.json', 'w') as file:
    bla = dump(config, file)
    print(bla)
  #  print(config['login']['login'])
  # print(config['login']['password'])


def run():
  pass
'''
print(greeting)
main()
'''

createLogin()
'''
{'aplication': {'version': '0.0.?'}, 'login': {'login': ['diego', 'felipe'], 'password': ['123', 'felipe']}, 'keys': {'': [True, '
>doNothing'], 'run': [True, '>run'], 'test': [True, '>test'], 'login': [True, '>login'], 'tchau': [True, '>tchau'], 'exit': [False
, 'Bye Bye...']}}'''
