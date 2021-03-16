import tqdm
from time import sleep

# for i in tqdm.tqdm(range(100)):
#     sleep(.2)

def loading(lenth):
  print('\033[35m')
  divider = lenth / 20
  for i in range(lenth):
    print(' |', end='')
    
    n = int(i / divider)
    if i == lenth - 1:
      n = int(i / divider) + 1
    print('#' * n, end='')
    print(' ' * int(20 - n), end='')
    print('| ', end='')

    print(' %02d %%       ' % ((i*100/lenth) + 1), end='')
    print('\r', end='')
    sleep(.1)

if __name__ == '__main__':
  loading(100)
