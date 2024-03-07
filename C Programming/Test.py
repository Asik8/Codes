import math

while True:
    try:
        n = int(input())
        lim = int(math.sqrt(n))
        not_prime = False
        for i in range(2, lim + 1):
            if n % i == 0:
                not_prime = True
                break
        
        if not_prime:
            print('Nada')
        else:
            super_prime = True
            temp = n
            while temp != 0:
                rem = temp % 10
                temp //= 10
                lim = int(math.sqrt(rem))
                for i in range(2, lim + 1):
                    if rem % i == 0:
                        super_prime = False
                        break
                if not super_prime:
                    break
            if super_prime:
                print('Super')
            else:
                print('Primo')
            
    except EOFError:
        break
