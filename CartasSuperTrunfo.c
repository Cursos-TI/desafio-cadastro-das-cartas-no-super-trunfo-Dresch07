#include <stdio.h>

int main(){

char estado = 'a';
char codigo[20] = "a01";
char nome [20]="Sao Paulo";
int populacao = 12325000;
float area = 1521.11;
float pib = 699.28;
int turisticos = 50;
float densidade = 0;
float pibpc = 0;
float super = 0;


densidade = populacao/area;
pibpc = 699280000000/populacao;
super = populacao+area+pib+turisticos+pibpc-densidade;

printf("estado:%c\n", estado);
printf("codigo:%s\n", codigo);
printf("nome:%s\n",nome);
printf("populacao:%d\n", populacao);
printf("area:%.2fkm²\n", area);
printf("pib:%.2f bilhoes\n", pib);
printf("turisticos:%d\n",turisticos);
printf("densidade:%.2fhab/km²\n",densidade);
printf("PIB per capita:%.2f\n",pibpc);
printf("Super:%.2f\n\n",super);

//adicionar "a" ao final das variáveis para diferencia-Las//

char estadoa = 'b';
char codigoa[20] = "b01";
char nomea [20]="Rio de janeiro";
int populacaoa = 6748000;
float areaa = 1200.25;
float piba = 300.50;
int turisticosa = 30;
float densidadea = 0;
float pibpca = 0;
float supera = 0;

densidadea = populacaoa/areaa;
pibpca = 300500000000/populacaoa;
supera = populacaoa+areaa+piba+turisticosa+pibpca-densidadea;

printf("estado:%c\n", estadoa);
printf("codigo:%s\n", codigoa);
printf("nome:%s\n",nomea);
printf("populacao:%d\n", populacaoa);
printf("area:%.2fkm²\n", areaa);
printf("pib:%.2f bilhoes\n", piba);
printf("turisticos:%d\n",turisticosa);
printf("densidade:%.2fhab/km²\n",densidadea);
printf("PIB per capita:%.2f\n",pibpca);
printf("Super:%.2f\n\n",supera);


printf("Comparações dos dados das cartas\n\n");

int resultadopop = 0;
//pop de população//
resultadopop = populacao>populacaoa;
printf("resultado das populações é:%d\n", resultadopop);
if (resultadopop==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}


int resultadoarea = 0;
resultadoarea = area>areaa;
printf("resultado da area é:%d\n", resultadoarea);
if (resultadopop==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}


int resultadopib = 0;
resultadopib = pib>piba;
printf("resultado do pib é:%d\n", resultadopib);
if (resultadopib==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}

int resultadopt= 0;
//pt de pontos turísticos//
resultadopt = turisticos>turisticosa;
printf("resultado dos pontos turísticos é:%d\n", resultadopt);
if (resultadopt==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}


int resultadodensi = 0;
//densi de densidade//
resultadodensi = densidade<densidadea;
printf("resultado da densidade é:%d\n", resultadodensi);
if (resultadodensi==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}

int resultadopibpc = 0;
//pibpc de PIB per capita//
resultadopibpc = pibpc>pibpca;
printf("resultado do PIB per capita é:%d\n", resultadopibpc);
if (resultadopibpc==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}

int resultadosuper = 0;
resultadosuper = super>supera;
printf("resultado do super é:%d\n", resultadosuper);
if (resultadosuper==1){
printf("carta A01 ganhou\n\n");
}else{
printf("carta B01 ganhou\n\n");
}




return 0 ;



}