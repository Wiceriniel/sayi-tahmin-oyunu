#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h> 
#include <windows.h>

void check();
void yukari();
void asagi();
int sonTahmin;
int rastgele; 
int denemeSayisi = 0;

int main() {

    setlocale(LC_ALL, "Turkish"); 
    SetConsoleTitle( TEXT("SAYI TAHMiN OYUNU") );
    system("@cls||clear");
    srand(time(NULL)); 
    rastgele=rand()%1000;

    printf("\nSayı gir [0-1000] : ");


    scanf("%d", &sonTahmin);
    check();

    return 0;
}

void check() {

    if (sonTahmin == rastgele) {
        system("@cls||clear");
        denemeSayisi++;
        printf("\nTebrikler! %d sayısını %d. denemede buldun.\n\nÇıkmak için herhangi bir tuşa bas.\n", rastgele, denemeSayisi);
        getch();
    } else 
    
    if (sonTahmin > rastgele) {
        system("@cls||clear");
        denemeSayisi++;
        asagi();
        printf("\n\nSayı gir [0-1000] : ");
        scanf("%d", &sonTahmin);
        check();
    } else

    if (sonTahmin < rastgele) {
        system("@cls||clear");
        denemeSayisi++;
        yukari();
        printf("\n\nSayı gir [0-1000] : ");
        scanf("%d", &sonTahmin);
        check();
    }
    
}

void yukari() {

    printf("\n           /\\");
    printf("\n          /  \\");
    printf("\n         /    \\          Son tahminin: %d", sonTahmin);
    printf("\n        /      \\");
    printf("\n       /        \\");
    printf("\n      '---.  .---'");
    printf("\n          |  |");
    printf("\n          |  |");
    printf("\n          |  |");
    printf("\n          |  |");
    printf("\n          '--'");

}

void asagi() {

    printf("\n          .--.");
    printf("\n          |  |");
    printf("\n          |  |           Son tahminin: %d", sonTahmin);
    printf("\n          |  |");
    printf("\n          |  |");
    printf("\n      .---'  '---.");
    printf("\n       \\        /");
    printf("\n        \\      /");
    printf("\n         \\    /");
    printf("\n          \\  /");
    printf("\n           \\/");
}
