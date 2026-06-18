#include <stdio.h> 
#include <stdlib.h> 
 
int ComparaString(char * str1, char * str2); 
 
int main(){ 
 char str1[1000]; 
 char str2[1000]; 
   
 while ( scanf("%s", &str1) == 1 && scanf("%s", &str2) == 1){ 
  if ( ComparaString(str1, str2) )  
   printf("IGUAL\n"); 
  else 
   printf("DIFERENTE\n"); 
 } 
  
    return 0;     
}

int ComparaString(char * str1, char * str2){
    int i = 0, ehIgual = 1, qtd1 = 0, qtd2 = 0;

    //conta a quantidade de caracteres
    while (str1[i] != 0){
        qtd1++;
        i++;
    }
    i = 0;

    while (str2[i] != 0){
        qtd2++;
        i++;
    }

    //ve se a quantidade é a mesma
    if(qtd1 != qtd2){
        ehIgual = 0;
    }

    i = 0;

    //verifica se a string é igual
    while (str1[i] != 0 && str2[i] != 0) {
        if (str1[i] != str2[i]) {
            ehIgual = 0;
            break;      
        }
        i++;
    }
    
    if(ehIgual){
        return 1;
    } else {
        return 0;
    }
}