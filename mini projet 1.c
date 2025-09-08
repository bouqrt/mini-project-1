#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, n5, total, MOY, MAX, MIN;
    char mention[20];

    printf("saisissez la 1er note: ");
    scanf("%f", &n1);

    printf("saisissez la 2eme note: ");
    scanf("%f", &n2);

    printf("saisissez la 3eme note: ");
    scanf("%f", &n3);

    printf("saisissez la 4eme note: ");
    scanf("%f", &n4);

    printf("saisissez la 5eme note: ");
    scanf("%f", &n5);

    total=n1+n2+n3+n4+n5;

    MOY = total / 5;

    MAX = MIN = n1;

    if( n2>MAX )
        MAX= n2;
    if( n3>MAX )
        MAX=n3;
    if( n1>MAX)
        MAX=4;
    if( n5>MAX )
        MAX=n5;


    if( n2<MIN )
        MIN= n2;
    if( n3<MIN )
        MIN=n3;
    if( n4<MIN )
        MIN=n4;
    if( n5<MIN )
        MIN=n5;





    if( MOY>=90 ){
        printf("mention Excellent");
    }
    else if ( MOY<90 && MOY>=80 ){
        printf("mention Tres bien");
    }
    else if ( MOY<80 && MOY>=70 ){
         printf("mention Bien");
    }

    else if ( MOY<70 && MOY>=60 ){
         printf("mention Passable");
    }

    else {
            printf("mention Echec");
    }


    printf(" RAPPORT FINAl ");
    printf("\nTotal des notes : %.2f\n", total);
    printf("Moyenne : %.2f\n", MOY);
    printf("Note la plus haute : %.2f\n", MAX);
    printf("Note la plus basse : %.2f\n", MIN);
    printf("Mention : %s\n", mention);

    if (MOY >= 50)
        printf("Resultat final : Reussi\n");
    else
        printf("Resultat final :Echoue\n");


    return 0;
}
