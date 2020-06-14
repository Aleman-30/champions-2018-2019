#include <stdio.h>

int main()
{
    int x=0;
	int y=0;
    do
    {
        printf("                                              UEFA Champions 2018-2019 \n\n\n");
        printf("Solo elige una opcion: \n\n");
        printf("1.- Todos los equipos \n");
        printf("2.- Octavos de final \n");
        printf("3.- Cuartos de final \n");
        printf("4.- Semifinal \n");
        printf("5.- Final \n");
        printf("6.- Campeon \n");
        printf("7.- Salir \n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
                do
    {
        printf("                                               Equipos por grupos \n\n\n");
        printf("Elige el grupo de tu preferencia: \n\n");
        printf("1.- Grupo A \n");
        printf("2.- Grupo B \n");
        printf("3.- Grupo c \n");
        printf("4.- Grupo D \n");
        printf("5.- Grupo E \n");
        printf("6.- Grupo F \n");
        printf("7.- Grupo G \n");
        printf("8.- Grupo H \n");
        printf("9.- Salir \n");
        scanf("%d",&y);
        switch(y)
        {
            case 1:
                printf("\n\n");
                printf("                                                 Grupo A \n\n");
                printf("-Atletico de Madrid \n");
                printf("-Borussia Dortmund \n");
                printf("-AS Monaco \n");
                printf("-Brujas \n");
                printf("\n\n");
                break;
            case 2:
                printf("\n\n");
                printf("                                                 Grupo B \n\n");
                printf("-Barcelona \n");
                printf("-Tottenham \n");
                printf("-PSV \n");
                printf("-Inter \n");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("                                                 Grupo C \n\n");
                printf("-Paris Saint Germain \n");
                printf("-SSC Napoli \n");
                printf("-Liverpool \n");
                printf("-Estrella Roja \n");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("                                                 Grupo D \n\n");
                printf("-Lokomotiv Moscu \n");
                printf("-Porto \n");
                printf("-Schalke 04 \n");
                printf("-Galatasaray \n");
                printf("\n\n");
                break;
            case 5:
                printf("\n\n");
                printf("                                                 Grupo E \n\n");
                printf("-Bayern Munich \n");  
                printf("-Benfica \n");
                printf("-Ajax \n");
                printf("-Atenas \n");
                printf("\n\n");
                break;
            case 6:
                printf("\n\n");
                printf("                                                 Grupo F \n\n");
                printf("-Manchester City \n");
                printf("-Shakhtar Donetsk \n");
                printf("-Olympique de Lyon \n");
                printf("-Hoffenheim \n");
                printf("\n\n");
                break;
            case 7:
                printf("\n\n");
                printf("                                                 Grupo G \n\n");
                printf("-Real Madrid \n");
                printf("-Roma \n");
                printf("-CSKA Moscu \n");
                printf("-Viktoria Plzen \n");
                printf("\n\n");
                break;
            case 8:
                printf("\n\n");
                printf("                                                 Grupo H \n\n");
                printf("-Juventus \n");
                printf("-Manchester United \n");
                printf("-Valencia CF \n");
                printf("-Young Boys \n");
                printf("\n\n");
                break;
            case 9:
            printf("Salir \n");
                break;   
            default:
                printf("                                                   Error \n");
                printf("\n\n");
        }
        
    }while(y<=0&&y>0);
                break;
            case 2:
                printf("\n\n");
                printf("                                           Octavos de final \n\n\n");
                printf(" Tottenham Hotspur  V/S  Borussia Dortmund \n");
                printf("        Schalke 04  V/S  Manchester City \n");
                printf("              Ajax  V/S  Real Madrid \n");
                printf("Atletico de Madrid  V/S  Juventus \n");
                printf(" Manchester United  V/S  Paris Saint-Germain \n");
                printf(" Olympique de Lyon  V/S  Barcelona \n");
                printf("         Liverpool  V/S  Bayern Munich \n");
                printf("              Roma  V/S  Porto ");
                printf("\n\n");
                break;
            case 3:
                printf("\n\n");
                printf("                                            Cuartos de final \n\n\n");
                printf(" Tottenham Hotspur  V/S  Manchester City \n");
                printf("              Ajax  V/S  Juventus \n");
                printf(" Manchester United  V/S  Barcelona \n");
                printf("         Liverpool  V/S  Porto ");
                printf("\n\n");
                break;
            case 4:
                printf("\n\n");
                printf("                                                Semifinal \n\n\n");
                printf(" Tottenham Hotspur  V/S  Ajax \n");
                printf("         Barcelona  V/S  Liverpool ");
                printf("\n\n");
                break;
            case 5:
                printf("\n\n");
                printf("                                                  Final \n\n\n");
                printf(" Tottenham Hotspur  V/S  Liverpool \n");
                printf("\n\n");
                break;
            case 6:
                printf("\n\n");
                printf("                                                  CAMPEON \n\n\n");
                printf(" Liverpool \n");
                printf("\n\n");
                break;
            case 7:
                printf("Salir \n");
                break;   
            default:
                printf("                                                     ERROR ");
                printf("\n\n");
        }
        
    }while(x<=0&&x>0);
    return 0;
}
