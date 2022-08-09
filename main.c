#include <stdio.h>
#include <stdlib.h>


void afficher(int R[],int n){
    int i;
   for(i = 0; i < n; i++)
  {
    printf("%4d\n",R[i]);
  }

}
int Max (int R[],int n){

  int i ,max;
  max = R[0];
  for   (i=1;i<n;i++){
    if  (R[i] > max){
        max = R[i] ;
    }

  }
  return max;

}

int Min (int R[],int n){

  int i ,min;
  min = R[0];
  for   (i=1;i<n;i++){
    if  (R[i]  < min){
        min = R[i] ;
    }

  }
  return min;

}


int Mention(int R[],int n){
 int i,nbr=0;
 for (i=0;i<n;i++){
    if  (R[i]>=10){
        nbr++;
    }
 }
 return nbr;

}

void tri (int c[],int m){
   int i,j,temp;
   for(j=0;j<m;j++){
   for(i=0;i<m-j;i++){
    if(c[i]>c[i+1]){
      temp=c[i];
      c[i]=c[i+1];
      c[i+1]=temp;
}
}
}

}
int main()
{
  int tail=2,tab[tail],t=3,tab1[t],m;
  int c[tail+t];
  int i=0,j=0,k=0;


    printf(" Premier tableau:\n ");

    for (i=0;i<tail;i++){

     printf(" L'eleve N°  %d :",i);
       scanf("%d", &tab[i]);
   }
     printf(" Deuxieme tableau:\n ");
         for (j=0;j<t;j++){

     printf(" L'eleve N° %d : ",i);
    scanf("%d", &tab1[j]);
   }



      printf(" La plus grande moyenne du classe 1 est :%d\n ",Max (tab,tail));
      printf(" La plus petite moyenne du classe 1 est : %d\n ",  Min(tab,tail));

   printf(" Le nombre des eleves ayant une moyenne sup à 10 est : %d\n ",    Mention(tab,tail));
      printf(" La plus grande moyenne du classe 2 est : %d\n ", Max (tab1,t));
         printf(" La plus petite moyenne du classe 2 est : %d\n ",  Min(tab1,t));

   printf(" La plus petite moyenne du classe 2 est : %d\n ",  Mention(tab1,t));
    for (i=0;i<=tail-1;i++){

        c[i]=tab[i];

    }

    for(i=0;i<=t-1;i++){

        c[tail+i]=tab1[i];

    }
    afficher(c,tail+t);
      tri (c,tail+t);
      printf("le tableau trie \n ");
      afficher(c,tail+t);
  return 0;
}
