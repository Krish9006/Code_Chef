#include <stdio.h>
#include <string.h>

int main() {
    char guest_name[101], host_name[101], letter_pile[101];
    int letter_count[26] = {0}; 

    scanf("%s %s %s", guest_name, host_name, letter_pile);

    strcat(guest_name, host_name);

    for (int i = 0; guest_name[i] != '\0'; i++) {
        letter_count[guest_name[i] - 'A']++;
    }

    for (int i = 0; letter_pile[i] != '\0'; i++) {
        if (letter_count[letter_pile[i] - 'A'] == 0) {
            printf("NO\n");
            return 0;
        }
        letter_count[letter_pile[i] - 'A']--;
    }

   
    for (int i = 0; i < 26; i++) {
        if (letter_count[i] > 0) {
            printf("NO\n");
            return 0;
        }
    }

    
    printf("YES\n");
    return 0;
}