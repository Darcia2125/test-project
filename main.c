#include <stdio.h>
#include <stdlib.h>
int calculAge(int *anneeAct);
int main()
{
    FILE* fichier = NULL;
    char nom[25];
    int anneeActuelle = 2020, anneeNais = 0;
    char rep='0';
    fichier=fopen("eleve.txt","r");
    fichier=fopen("eleve.txt","w");
    if(fichier==NULL){
        printf("le fichier est introuvable!!!\n");
    }
    else{
    while (rep='O'){
        printf("votre nom\n");scanf("%s", nom);
        calculAge(anneeAct);
        printf("bonjour %s, vous etes %d ans\n", nom, (anneeActuelle-anneeNais));
        printf("vous voulez continuer? (O/N)\n");scanf("%c",&rep);
        fprintf(fichier, "bonjour %s, vous etes %d ans\n", nom, anneeActuelle-anneeNais);
    }
    fclose(fichier);
    }
    return 0;
}
int calculAge(int *anneeAct)
{
    int anneeActuelle = 2020;
    int anneeNais = 0;
    int age;
    age=anneeActuelle-anneeNais;
    printf("entrez votre annee de naissance\n ");
    scanf("%d",&anneeNais);
    printf("votre age est %d", age);

    return calculAge;
}
