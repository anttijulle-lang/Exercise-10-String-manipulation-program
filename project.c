#include <stdio.h>

void display_menu(void);

int main() {
    display_menu();
    return 0;
}

void display_menu(void) {
    printf("A) Count the number of vowels in the string\n");
    printf("B) Count the number of consonants in the string\n");
    printf("C) Convert the string to uppercase\n");
    printf("D) Convert the string to lowercase\n");
    printf("E) Display the current string\n");
    printf("F) Enter another string\n");
    printf("G) Read string from file\n");
    printf("H) Write string to file\n\n");
    printf("M) Display this menu\n");
    printf("X) Exit the program\n");
}

#include <stdio.h>

void display_menu(void);
void print_logo(void);

void print_logo(void) {
    printf("       _             ._.     \n");
    printf(" _____| |___________ | |____ ____ \n");
    printf("/  __  \\  __  __  \\|  \\   \\/  __ \\\n");
    printf("\\_____  | |  |  |  |V  |   |  /  / >\n");
    printf("/______ >_|  |_|  |____|  /\\____/ \n");
    printf("      \\/               \\//______/ \n");
}

void display_menu(void) {
    printf("A) Count the number of vowels in the string\n");
    printf("B) Count the number of consonants in the string\n");
    printf("C) Convert the string to uppercase\n");
    printf("D) Convert the string to lowercase\n");
    printf("E) Display the current string\n");
    printf("F) Enter another string\n");
    printf("G) Read string from file\n");
    printf("H) Write string to file\n\n");
    printf("M) Display this menu\n");
    printf("X) Exit the program\n");
}

#include <stdio.h>
#include <ctype.h> 
void display_menu(void);
void print_logo(void);
int count_consonants(char *str);

int count_consonants(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            // Jos se ei ole vokaali, sen on oltava konsonantti
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
                count++;
            }
        }
    }
    return count;
}

int count_vowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            count++;
        }
    }
    return count;
}

void print_string(char *str) {
    printf("%s\n", str);
}

void read_string(char *str) {
    printf("Give string: ");
täyttyy
    fgets(str, 1000, stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }
}

void to_lower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)tolower((unsigned char)str[i]);
    }
}

void to_upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = (char)toupper((unsigned char)str[i]);
    }
}