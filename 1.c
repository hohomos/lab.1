int main() {
    int d = 654;
    int x, a, b, c;
    
    c = d % 10; // отримуємо останню цифру числа d
    d /= 10;    // видаляємо останню цифру числа d
    b = d % 10; // отримуємо наступну цифру числа d
    d /= 10;    // видаляємо наступну цифру числа d
    a = d % 10; // отримуємо першу цифру числа d
    
    x = c * 100 + b * 10 + a; // формуємо число х за заданим алгоритмом
    
    printf("x = %d", x); // виводимо результат
    
    return 0;
}
