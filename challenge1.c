#include <stdio.h>

int main() {
    char nom[15],prenom[15],adresse[15];
    char sexe;
    int age;
    printf("donner le nom :");
    scanf("%s",nom);
    printf("donner le prenom :");
    scanf("%s",prenom);
    printf("donner l'age :");
    scanf("%d",&age);
    printf("donner le adresse :");
    scanf("%s",adresse);
    printf("donner le sexe :");
    scanf(" %c",&sexe);
    
    
    
    printf("le nom : %s \n",nom);
    printf("le prenom : %s \n",prenom);
    printf("le age : %d \n",age);
    printf("le sexe : %c \n",sexe);
    printf("l'adresse : %s ",adresse);

    return 0;
}