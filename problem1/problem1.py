def decToBin(decimal:int) -> list[int]:
    binary = []

    while (decimal != 0):
        remain = decimal % 2
        binary.append(remain)
        decimal = decimal // 2
    
    return binary


if __name__ == "__main__":
    decimal:int = int(input("Enter your decimal number: "))
    binary = decToBin(decimal)
    while len(binary) != 0:
        print(binary.pop(), end=" ")



