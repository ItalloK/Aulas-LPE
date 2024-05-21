#include <stdio.h>

typedef struct{
    int num1;
    float num2;
}Numeros;

int main()
{
    Numeros nums[10];
    int i, nums_int = 0, intmenor;
    float nums_float = 0, floatmaior;
    
    for(i = 0; i < 10; i++){
        printf("Digite um numero inteiro:\n");
        scanf("%d", &nums[i].num1);
        printf("Digite um numero real:\n");
        scanf("%f", &nums[i].num2);
        nums_int += nums[i].num1;
        nums_float += nums[i].num2;
        if (i == 0) {
            intmenor = nums[i].num1;
            floatmaior = nums[i].num2;
        } else {
            if (nums[i].num1 < intmenor) {
                intmenor = nums[i].num1;
            }
            if (nums[i].num2 > floatmaior) {
                floatmaior = nums[i].num2;
            }
        }
    }
    printf("Soma dos inteiros: %d, e o menor inteiro e: %d\n", nums_int, intmenor);
    printf("Soma dos reais: %f, e o maior real e: %f\n", nums_float, floatmaior);
    return 0;
}
