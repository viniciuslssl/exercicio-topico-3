#include<stdio.h>
#include<math.h>
main(){
    float base, alt;
    float mult;
    
    printf("Digite o valor de medida (base e altura)");
    scanf("%f %f", &base, &alt);
    mult = base * alt;
    printf("Resultado: %.2f",mult);
    
}
