
#include <stdio.h> 
#include <stdlib.h> 
 
void ConcatenaString(char * str1, char * str2, char * strOut); 
 
int main(){ 
 char nome[1000]; 
 char sobrenome[1000]; 
 char nomeCompleto[2000]; 
   
 while ( scanf("%s", &sobrenome) == 1 && scanf("%s", &nome) == 1){ 
  ConcatenaString(nome, sobrenome, nomeCompleto); 
 
  printf("%s\n", nomeCompleto); 
 } 
  
    return 0;     
}

void ConcatenaString(char * str1, char * str2, char * strOut){
    int i = 0, pos = 0;
    //posicao do strOut e das str1/2
    
    //enquanto não chegar ao fim da string (\0 significa fim)
    while (str1[pos] != 0){
        strOut[i] = str1[pos]; //copia os caracters para a outra struct
        i++; //avanca saida
        pos++; //avanca leitura
    }

    //reseta para o proximo
    pos = 0;

    while (str2[pos] != 0) {
        strOut[i] = str2[pos];
        i++;
        pos++;
    }

    strOut[i] = '\0'; //marca o fim da string
}