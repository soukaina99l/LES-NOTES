#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,j,a,b,k;
float max,min,tt,tc1[13],tc2[15],T[28],TT;
//saisi des note du classe 1
printf("veuiller saisir les note du classe1:\n");
for(i=0;i<13;i++){
    printf("note %d :\n",i+1);
    scanf("%f",&tc1[i]);
    }
for(i=0;i<13;i++){
        printf("les note du classe 1 :\n");
        printf("note %d : %f\n",i+1,tc1[i]);
}
//saisi des note du classe 2
printf("veuiller saisir les note du classe 2\n");

for(i=0;i<15;i++){
    printf("note %d :\n",i+1);
    scanf("%f",&tc2[i]);
    }
for(i=0;i<15;i++){
        printf("les note du classe 2 :\n");
        printf("note %d : %.2f\n",i+1,tc2[i]);
}
//plus grande moyenne class 1
max=0;
max=tc1[0];
for(i=0;i<13;i++){
if(max<tc1[i])
    max=tc1[i];
}
printf("la plus PETITE moyenne du classe 1 est %.2f :\n",max);

//plus grande moyenne class 2
max=0;
max=tc2[0];
for(i=0;i<15;i++){

if(max<tc2[i])
    max=tc2[i];


}
printf("la plus grande moyenne du classe 1 est %.2f :\n",max);
//la plus petite moyenne du classe 1
min=0;
 min=tc1[0];
for(i=0;i<13;i++){
if(min>tc1[i])
    min=tc1[i];
} 
printf("la plus petite moyenne du classe 2 est %f :\n",min);

//la plus petite moyenne du classe 2
min=0;
  min=tc1[0];
for(i=0;i<15;i++){
if(min>tc2[i])
    min=tc2[i];
}
printf("la plus petite moyenne du classe 2 est %.2f :\n",min);

a=0;
for(i=0;i<13;i++){
  if(tc1[i]>=28)
  a++;
}
printf("le nombre d eleve de la classe 1 ayant une moyenne superieur a 10 est: %d\n",a);

b=0;
for(i=0;i<15;i++){
  if(tc2[i]>=28)
  b++;
}
printf("le nombre d eleve de la classe 2 ayant une moyenne superieur a 10 est: %d\n",b);

 //les 2 tab
 for(i=0;i<5;i++){
    T[i]=tc1[i];

 }
 for(i=0,j=15;j<28 && i<15;i++,j++){
    T[j]=tc2[i];
 }
 printf("tableau contenant les note des 2 classes\n");
 for(i=0;i<28;i++){
    printf("note %d :\n %f\n",i+1,T[i]);

 }
 // tri du tableau
 for(i=0;i<28;i++){
         for(k=i+1;k<28;k++){
             if(T[i]>T[k]){
             TT=T[i];
             T[i]=T[k];
             T[k]=TT;
             }
         }
 }
printf("les note par ordre decroissant :\n");
 for(i=0;i<28;i++){
        printf("note %d : %f\n",i+1,T[i]);
 }
    return 0;
}
