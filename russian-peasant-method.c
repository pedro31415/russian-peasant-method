#include <stdio.h>

int russianPeasantMethod(int num, int num2) {
    int result = 0;
    while(num > 0){
        if(!(num % 2 == 0)){
            result += num2;
        }
        num >>= 1;
        num2 <<= 1;
    }
    return result;
}

int main(){
    // Exemplo de deslocamento
    int a = 354;
    int b = 279;
    // for(int i = 0; i < 5; i++){
    //     a <<= 1;
    //     b >>= 1;
    //     printf("The value is a: %d and b: %d\n", a, b);
    // }
    int value = russianPeasantMethod(a,b);

    printf("The result: %d", value);
    return 0;
}