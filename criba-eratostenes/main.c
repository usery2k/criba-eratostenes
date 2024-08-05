#include <stdio.h>
#include <stdbool.h>
int n;
//este numero sera el limitante para que el programa sepa hasta que numero debe de buscar los numeros primos

int main(){
    printf("limite n = 999999\nhola, indicame hasta que numero quieres saber los numeros primos:");
    scanf("%d", &n);
    
    if(n < 2){
        printf("no hay numeros primos menores a 2\n");
    }
    
    bool primos[n+1];
    for(int i = 0; i <= n; i++){
        primos[i] = true; //definimos a todos los numeros de nuestra lista n como numeros primos
    }
    primos[0] = primos[1] = false; //nos aseguramos de que 0 y 1 queden como numeros no primos (false)

    /*definimos a dos bucles for, uno que nos cuente las iteraciones de nuestros numeros primos 
    definido como x partiendo de 2 y la otra para que nos elimine a los multiplos de dicho numero*/
    
    for(int x = 2; x*x <= n; x++ ){
        if(primos[x]){
            for(int i=x*x; i<=n; i+=x){
                primos[i]=false;
            }
        }
    }

    printf("hola tu numeros primos hasta %d son:\n", n);
    for(int i = 2; i<=n; i++){
        if(primos[i]){
            printf("%d\n", i);
        }
    }

    printf("tu numero es: %d\n", n);
}