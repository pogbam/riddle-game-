
/*Ci-dessous, ce sont des fichiers que l'on appelle bibliothèques ,
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes
pour afficher par exemple un message à l'écran.*/

# auteur : Kerroua Arezki
#include <stdio.h>
#include <math.h>

int main ()  /* cette fonction c'est la fonction principale du programme,
  c'est par cette fonction que tout les programme commencent. */
{


int N,i,a,b,c,d,e,f,g,h,j,Nombre_Secret,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,continuerPartie,choix_menu; /* cette fonction montre que les variables qu'on a utiliser se sont des entier */

/* la boucle de programme se repete tan que  l'utilisateur  n'a pas choisis :  de fermer */

do{ /* on demande le choix */

    printf("\n\n\t\ =====Menu====== \n\n"); /*   \n : retour à la ligne
                                                 \t:Tabulation   */
    printf("\t\tchoisir\n\n\t1=lancer la partie \n\t2=fermer \n");
    printf("\n entrez votre choix :\n    "); /* on demande a l'utilisateur d'entrer son choix */
    scanf("%d", &choix_menu);

 switch(choix_menu){

  case 1:{
         printf("Deviner un nombre entre 1 et 100 : \n\n\n ");/* cette instruction permet d'aficher a l'ecran*/


    printf("\n Carte 01 :\t 1. 4. 6. 9. 12.\n\t\t 14. 17. 19. 22.\n\t\t 25. 27. 30. 33.\n\t\t 35. 38. 40. 43.\n\t\t 46. 48. 51. 53.\n\t\t 56. 59. 61. 64.\n\t\t 67. 69. 72. 74.\n\t\t 77. 80. 82. 85.\n\t\t 88. 90. 93. 95.\n\t\t 98. 101. \n");

       printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");/* cette instruction demande dtentrer 1 ou 0 */
       scanf("%d", &i);
    if(i==1)/* on utilise if pour faire une condition  */
    {
        s1=1; /* instructions à executér si la condition est vraie */
    }
    else if(i==0) /* on utilise le else if pour faire une autre condition si la premiere condition est fausse alors on execute la 2eme condition */
    {
          s1=0; /* instruction a execute si la 2éme condition est vraie */
    }
      printf("\n carte 02:\t 2. 7. 10. 15. 20.\n\t\t 23. 28. 31. 36.\n\t\t 41. 44. 49. 54.\n\t\t 57. 62. 65. 70.\n\t\t 75. 78. 83. 86.\n\t\t 91. 96. 99. \n");

       printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
        scanf("%d", &a);
    if(a==1)/*cette instruction veut dire si a =1 alors s2=2*/
    {
         s2=2;
    }
    else if(a==0)      /* sinon si a=0 alors s2=0 */
    {
          s2=0;
    }
      printf("\n carte 03:\t 3. 4. 11. 12.\n\t\t 16. 17. 24. 25.\n\t\t 32. 33. 37. 38.\n\t\t 45. 45. 46. 50.\n\t\t 51. 58. 59. 66.\n\t\t 67. 71. 72. 79.\n\t\t 80. 87. 88. 92.\n\t\t 93. 100. 101\n ");

      printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
      scanf("%d", &b);
    if(b==1)
     {

         s3=3;
     }
    else if(b==0)
    {
         s3=0;
    }
      printf("\n carte 04 :\t 5. 6. 7. 18. 19.\n\t\t 20. 26. 27. 28.\n\t\t 39. 40. 41. 52.\n\t\t 53. 54. 60. 61.\n\t\t 62. 73. 74. 75.\n\t\t 81. 82. 83. 94.\n\t\t 95. 96.\n ");
       printf("\n est-ce-que cette carte contient ce nombre : \n oui<1> / non<0> ");
       scanf("%d", &c);
    if(c==1)
    {
         s4=5;
    }
    else if(c==0)
    {
       s4=0;
    }
       printf("\n carte 05 :\t 8. 9. 10 11. 12.\n\t\t 29. 30. 31. 32.\n\t\t 33. 42. 43. 44.\n\t\t 45. 46. 63. 64.\n\t\t 65.66. 67. 84.\n\t\t 85. 86. 87. 88.\n\t\t 97. 98. 99. 100.\n\t\t 101\n ");
       printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
       scanf("%d", &d);
    if(d==1)
    {
          s5=8;
    }
    else if(d==0)
    {
           s5=0;
    }
       printf("\n carte 06 :\t 13. 14. 15. 16.\n\t\t 17. 18. 19. 20.\n\t\t 47. 48. 49. 50.\n\t\t 51. 52. 53. 54.\n\t\t 68. 69. 70. 71.\n\t\t 72. 73. 74.75 .\n ");
       printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
       scanf("%d", &e);
    if(e==1)
    {
           s6=13;
    }
    else if(e==0)
    {
          s6=0;
    }
      printf("\n carte 07 :\t 21. 22. 23. 24.\n\t\t 25. 26. 27. 28.\n\t\t 29. 30. 31. 32.\n\t\t 33. 76. 77. 78.\n\t\t 79. 80. 81. 82.\n\t\t 83. 84. 85. 86.\n\t\t 87. 88.\n ");
      printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
      scanf("%d", &f);
    if(f==1)
    {
            s7=21;
    }
    else if(f==0)
    {
           s7=0;
    }
       printf("\n carte 08 :\t 34. 35. 36. 37.\n\t\t 38. 39. 40. 41.\n\t\t 42. 43. 44. 45.\n\t\t 46. 47. 48. 49.\n\t\t 50. 51. 52. 53.\n\t\t 54.\n ");
    printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
        scanf("%d", &g);
    if(g==1)
    {
            s8=34;
    }
    else if(g==0)
    {
           s8=0;
    }
        printf("\n carte 09 :\t 55. 56. 57. 58.\n\t\t 59. 60. 61. 62.\n\t\t 63. 64. 65. 66.\n\t\t 67. 68. 69. 70.\n\t\t 71. 72. 73. 74.\n\t\t 75. 76. 77. 78.\n\t\t 79. 80. 81. 82.\n\t\t 83. 84. 85. 86.\n\t\t 87. 88.\n");
       printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
        scanf("%d", &h);
    if(h==1)
    {
            s9=55;
    }
    else if(h==0)
    {
             s9=0;
    }
         printf("\n carte 10 :\t 89. 90. 91. 92.\n\t\t 93. 94. 95. 96.\n\t\t 97. 98. 99. 100.\n\t\t 101\n ");
      printf("\n est-ce-que cette carte contient ce nombre : \n  oui<1> / non<0> ");
          scanf("%d", &j);
    if(j==1)
    {
           s10=89;
    }
    else if(j==0)
    {
        s10=0;
    }
         Nombre_Secret=s1+s2+s3+s4+s5+s6+s7+s8+s9+s10;
     printf(" \n\n\n Nombre secret = %d \n\n\n", Nombre_Secret);/* cette instruction affiche a l'ecran le nombre secret */


       printf("\n Voulez vous faire une autre partie ? Oui (1) / Non (0)\n\n ");/* cette instruction vous demande si vous vouler rejouer */
     scanf("%d", &continuerPartie);
    }
  break;




   case 2:system("cls");printf("\n\n\n\t\t\t===========bye===========\n\n\n\t\t\       by *****Kerroua Arezki****");break;

    default :printf("erreur  de choix ");

    }

    system("pause>null");
     system("cls");


  } while (choix_menu!=2&&continuerPartie==1);

 system("PAUSE>null");

  return 0;
}
