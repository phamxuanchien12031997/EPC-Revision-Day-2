#include <stdio.h>
// In ra màn hình 10 số tự nhiên đầu tiên.
void output()
{
    int i, n = 10;
    printf("%d so tu nhien dau tien la: ", n);
    while (i <= n)
    {
        printf("%d\t", i);
        i++;
    }
}

// Nhập vào đoạn [a.b]. In ra màn hình tổng các số từ a đến b
void outputSumAB()
{
    int a, b, sum;
    printf("Nhap 2 so a va b: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    printf("Tong gia tri tu %d den %d la %d", a, b, sum);
}

// Nhập vào đoạn [a.b]. In ra màn hình tổng các số chẵn từ a đến b.
void outputSumEvenNumber()
{
    int a, b, sumEven;
    printf("Nhap 2 so a va b: ");
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i % 2 == 0)
            sumEven += i;
    }
    printf("Tong gia tri tu %d den %d la %d", a, b, sumEven);
}

//  Liệt kê tất cả các ước số lẻ của số nguyên dương n
void outputOdd()
{
    int i, n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    printf("Cac uocso le cua so nguyen %d la: ", n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
            if (n % i == 0)
                printf("%d\t", i);
    }
}
// Viết chương trình tính N giai thừa
void outputFactorial()
{
    int n, result;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);
    printf("Giai thua cua %d la: ", n);
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("%d\n", result);
}
// Nhập vào số N. in ra số đảo ngược của N. VD: 12345  -> 54321
void outputReverse()
{
    int n, reverse = 0;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("So dao nguoc cua %d la: ", n);
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    printf("%d", reverse);
}

// Hai số gọi là đảo ngược của nhau nếu viết theo chiều thuận hay chiều ngược cũng có cùng giá trị. VD: 121 = 121, 11111,...
// Hãy viết chương trình xác định số trên
void outputNiceNumber()
{
    int n, island = 0, temp, x;
    printf("Nhap so can kiem tra: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        island = island * 10 + temp % 10;
        temp = temp / 10;
    }
    if (n == island)
        printf("%d la so thuan nghich !", n);
    else
        printf("%d khong phai so thuan nghich !", n);
}

int main(int argc, char const *argv[])
{
    output();
    printf("\n");
    outputSumAB();
    printf("\n");
    outputSumEvenNumber();
    printf("\n");
    outputOdd();
    printf("\n");
    outputFactorial();
    outputReverse();
    printf("\n");
    outputNiceNumber();
    return 0;
}
