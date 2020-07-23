#modulo = 2
modulo = 0.1
raysSum = 100

pi = 3.1415
listOfGears = []

def gearByNTeeth(n1):
    '''Calculates the raius and diameter of a gear based on the module value.
    Calculates a second gear based on the sum of the radius set.
    Calculates the final ratio between the two gears.
    Apeends to a list the values of N OF TEETH, DIAMETER and RADIUS for both gears.'''
    nTeeth_1 = n1
    diameter_1 = modulo * nTeeth_1
    radius_1 = diameter_1 / 2
    if raysSum - radius_1 > 0:
        radius_2 = raysSum - radius_1
        diameter_2 = 2 * radius_2
        nTeeth_2 = diameter_2 / modulo
        listOfGears.append([nTeeth_1, diameter_1, radius_1, nTeeth_2, diameter_2, radius_2])
    #print('Gear1:', nTeeth_1, diameter_1, radius_1)
    #print('Gear2:', nTeeth_2, diameter_2, radius_2)
    #print('Ratio:', (radius_2 / radius_1))


def findRatio(rel):
    '''Finds an specifc ratio a the list'''
    global listOfGears
    for i in range(1, len(listOfGears)):
        relacao = (listOfGears[i][2] / listOfGears[i][5])
        if relacao == rel:
            print('')
            print('Ratio', relacao)
            #print('Gear1: N of teeth:', listOfGears[i][0], 'Diameter:', listOfGears[i][1], 'Radius:', listOfGears[i][2])
            #print('Gear2: N of teeth:', listOfGears[i][3], 'Diameter:', listOfGears[i][4], 'Radius:', listOfGears[i][5])
            #print(listOfGears[i])
            print('up gear')
            gearByDiameter(listOfGears[i][1])
            print('down gear')
            gearByDiameter(listOfGears[i][4])


def gearByDiameter(diam):
    '''Calculates the number of teeth based on the diameter passed and the module set
    Prints all the info about the gear: External diameter (de), Primitive diameter (dp), Interna diameter (di), 
    Heith of teeth (h), Heith of head (a), Heith of feet (b) and pitch (p)'''
    global modulo, pi
    nTeeth = diam / modulo
    radius = diam/2
    a = modulo
    de = diam + (2*a)
    b = 7 / 6 * modulo
    h = a + b
    di = diam - (2 * b)
    p = modulo * pi
    print('Gear: N of Teeth:', nTeeth, 'Radius:', diam/2, 'dp:', diam, 'Module:', modulo)
    #print('de:', de, 'di:', di)
    #print('a:', a, 'b:', b, 'h:', h)
    #print('p:', p, 'p/2:', p/2, 'p/4:', p/4)
    print('External diameter:', de, '|Primitive diameter:', diam, '|Interna diameter:', di, '\nHeith of teeth(h):', h, '|Heith of head(a):', a, '|Heith of feet(b):', b, '|Pitch:',p, '\nAngle:', (360/nTeeth), '|angle/2:', (360/(2*nTeeth)), '|angle/4:', (360/(4*nTeeth)))

def gearByExtDiam(de):
    '''Calculates the number of teeth based on the external diameter passed and the module set
    Prints all the info about the gear: External diameter (de), Primitive diameter (dp), Interna diameter (di), 
    Heith of teeth (h), Heith of head (a), Heith of feet (b) and pitch (p)'''
    global modulo, pi
    a = modulo
    dp = de - (2*a)
    nTeeth = dp / modulo
    radius = dp/2
    b = 7 / 6 * modulo
    h = a + b
    di = dp - (2 * b)
    p = modulo * pi
    print('Gear: N of Teeth:', nTeeth, 'Radius:', radius, 'dp:', dp, 'Module:', modulo)
    #print('de:', de, 'di:', di)
    #print('a:', a, 'b:', b, 'h:', h)
    #print('p:', p, 'p/2:', p/2, 'p/4:', p/4)
    print('External diameter:', de, '|Primitive diameter:', dp, '|Interna diameter:', di, '\nHeith of teeth(h):', h, '|Heith of head(a):', a, '|Heith of feet(b):', b, '|Pitch:',p, '\nAngle:', (360/nTeeth), '|angle/2:', (360/(2*nTeeth)), '|angle/4:', (360/(4*nTeeth)))


def clearList():
    listOfGears = []


#gearByDiameter(50)

for i in range(10, 101):
    gearByNTeeth(i)
'''
findRatio(7.333333333333333)
findRatio(4.882352941176471)
findRatio(3.347826086956522)
findRatio(2.4482758620689653)
findRatio(1.8571428571428572)
findRatio(1.5)
findRatio(1.2727272727272727)
'''

gearByExtDiam(5.2)

