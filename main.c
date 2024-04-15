#include <stdio.h>

void upperToLower(char*);
void lowerToupper(char*);
int main()
{
    char message[100];
    int choice;
    puts("Bir seçim  edin");
    puts("1-Boyuk herflerden ibaret cumle daxil edin");
    puts("2-Kicik herflerden ibaret cumle daxil edin");
    scanf("%d", &choice);
    getchar();

    switch(choice)
    {
    case 1:puts("Boyuk herflerden ibaret cumle daxil edin");
           gets(message);
           upperToLower(message);
        break;
    case 2:puts("Kicik herflerden ibaret cumle daxil edin");
           gets(message);
           lowerToupper(message);
        break;
        default: puts("Yanlis secim daxil etdiniz");
    }
    printf("\n\n");
    return 0;
}

void upperToLower(char* ptr)
{
    for(; *ptr!='\0'; *ptr++){
        if(*ptr>='A' && *ptr<='Z'){
            putchar(*ptr+32);
        }else {
          putchar(*ptr);
        }
    }
}

void lowerToupper(char* ptr)
{
    for(; *ptr!='\0'; *ptr++){
        if(*ptr>='a' && *ptr<='z'){
            putchar(*ptr-32);
        }else {
          putchar(*ptr);
        }
    }
}