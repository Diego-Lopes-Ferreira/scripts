diego = 2
voce = 5

g = 11
n = 1000

diego_public = (g**diego) % n
voce_public = (g**voce) % n

print('|----------------------------')
print('|Eu Publica   : ', diego_public)
print('|Voce Publica : ', voce_public)
print('|----------------------------')

diego_final = (voce_public**diego) % n
voce_final = (diego_public**voce) % n

print('|Eu final     : ', diego_final)
print('|Voce final   : ', voce_final)
print('|----------------------------')
