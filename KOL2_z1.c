#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    char nazwa_pliku[100];
   int wybor; 
   char imie[100];
   char nazwisko[100];
   char choroba[100]; 
   int wiek;
   char plec[10];  
   while (1 == 1)
   {
    printf("== MENU == \n");
    printf("==1.  Wprowadz dane pacjenta i zapisz == \n");
    printf("==2.  Pokaz dane pacjenta == \n");
    scanf("%d", &wybor);
      if(wybor == 1)
      {
      printf("Podaj imie pacjenta \n");
      scanf("%s", imie);
      printf("Podaj nazwisko pacjenta \n");
      scanf("%s", nazwisko);
      printf("Podaj wiek pacjenta \n");
      scanf("%d", &wiek);
      printf("Podaj plec pacjenta \n");
      scanf("%s", plec);
      printf("Podaj chorobe pacjenta \n");
      scanf("%s", choroba);
      printf("\n");
      printf("Zapisuje dane: \n");
      printf("Imie: %s \n", imie);
      printf("Naziwsko: %s \n", nazwisko);
      printf("Wiek: %d \n", wiek);
      printf("Plec: %s \n", plec);
      printf("Choroba: %s \n", choroba);
      FILE *plik;
      snprintf(nazwa_pliku, sizeof(nazwa_pliku), "%s.txt", nazwisko);
      plik = fopen(nazwa_pliku, "w");
      fprintf(plik,"Nazwisko: %s \n",nazwisko); 
      fprintf(plik,"Imie: %s \n",imie);
      fprintf(plik,"Weik: %d \n",wiek);
      fprintf(plik,"Plec: %s \n",plec);
      fprintf(plik,"Choroba: %s ",choroba);
      fclose(plik);
      }
      else if(wybor == 2)
      {
      char line[500];
      char nazwa_wczytywanego[100];
      char nazwa_koncowa[100];
      printf("Podaj nazwe pliku \n");
      scanf("%s", nazwa_wczytywanego);
      FILE * plik;
      snprintf(nazwa_koncowa, sizeof(nazwa_koncowa), "%s.txt", nazwa_wczytywanego);
      plik = fopen(nazwa_koncowa, "r");
      if(NULL == plik )
      {
      printf("ERROR - brak pliku do odczytu \n");
      }
      else
      {
         printf("\n");
         while (fgets(line, sizeof(line), plik))
         {
         printf("%s", line); 
         }
         printf("\n");
         printf("\n");
         printf("\n");
      }
      fclose(plik); 
      }
   }
   
}
