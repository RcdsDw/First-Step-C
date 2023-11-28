#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int nombreDeVies = 10, nombreDeMorts = 0;
    
    int nombreDeViesActuelles = nombreDeVies - nombreDeMorts;

    printf("Bonjour Monsieur.\n vous avez %d vies et vous n'êtes jamais mort\n", nombreDeViesActuelles);
    printf("**********B*A*D*A*B*O*U*M**********\n");

    nombreDeMorts += 1;
    nombreDeViesActuelles = nombreDeVies - nombreDeMorts;

    printf("My bad le couz... \n Après ce coup tu viens de perdre une vie et il t'en reste %d\n Et du coup tu viens également de passer à %d mort.s\n", nombreDeViesActuelles, nombreDeMorts);
    printf("Tapez un chiffre au hasard, vous aurez surement un petit cadeau... ;)\n");

    int nombreAjoute;
    scanf("%d", &nombreAjoute);
    nombreDeVies += nombreAjoute;
    nombreDeViesActuelles = nombreDeVies - nombreDeMorts;

    printf("Bien joué à toi jeune aventurier !\n Tu as désormais %d vies !\n", nombreDeViesActuelles);
    return 0;
}