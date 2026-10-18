#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

  
    double x = 6.251;
    double y = 0.827;
    double z = 25.001;

    
    double term1 = pow(y, pow(fabs(x), 1.0 / 3.0));

    double cos_y = cos(y);
    double term2 = pow(cos_y, 3);                       

    double diff = fabs(x - y);
    double numerator = diff * (1.0 + (pow(sin(z), 2) / sqrt(x + y)));
    double denominator = exp(diff) + (x / 2.0);
    double term3 = numerator / denominator;              

 
    double b = term1 + term2 - term3;

  
    printf("Исходные данные:\n");
    printf("x = %.3f\n", x);
    printf("y = %.3f\n", y);
    printf("z = %.3f\n\n", z);

    
    printf("Результат (b)    = %.4f\n", b);

    return 0;
}
