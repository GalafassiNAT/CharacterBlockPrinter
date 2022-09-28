#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    char c;
    int l, a, j = 1;
    printf("Informe um Caractere: ");
    scanf(" %c", &c);
    printf("Informe a altura e a largura: ");
    scanf(" %d %d", &a, &l);
    for(int i = 1; i <= l; i++){
        printf("%c", c);
        if(i == l ){
            if(j == a){
                break;
            }
            printf("\n");
            i = 0;
            j++;
        }
    }
    printf("\n");


    return 0;
}