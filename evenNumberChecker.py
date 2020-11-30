def even():
    num = int(input("Scrie un număr: "))
    if (num % 2) == 0:
        print("{num} este par.".format(num=num))

    else:
        print("{num} este impar.".format(num=num))

even()
