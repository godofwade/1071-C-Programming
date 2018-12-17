#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

struct Date{
   int year;
   int month;
   int day;
};

struct Lotto{
   Date date;
   int num[6];
};


int duplicate(int num[], int p){
  for(int i=0;i<p;i++){
    if(num[i]==num[p]) return 1;
  }
  return 0;
}

int main(){
   Lotto lottos[MAX];

   int n;
   int temp;
   
   srand(time(NULL));
   
   printf("Enter N: ");
   scanf("%d", &n);
   printf("\n");

   for(int i=0;i<n;i++){
     lottos[i].date.year = rand()%11+2010;
     lottos[i].date.month = rand()%12+1;
     lottos[i].date.day = rand()%31+1;
     printf("%d/%02d/%02d   ", lottos[i].date.year, lottos[i].date.month, lottos[i].date.day );
     for(int j=0;j<6;j++){
        do{
           temp = rand()%49+1;
        }while(duplicate(lottos[i].num,j));

        lottos[i].num[j] = temp;
        printf("%02d ", lottos[i].num[j]);
     }
     printf("\n");
   }
}
