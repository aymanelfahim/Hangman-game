#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char cartoon[10][70] = {
    "\n\n\n\n\n\n_______\n",
    "\n   |\n   |\n   |\n   |\n   |\n___|___\n",
    "\n   /-----\n   |\n   |\n   |\n   |\n___|___\n",
    "\n   /-----\n   |    |\n   |\n   |\n   |\n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |\n   |\n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |    |\n   |   \n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |   /|\n   |\n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |\n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /\n___|___\n",
    "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /|\n___|___\n"
};
void cacher(char mot_a_trouver[], char mot_avec_etoiles[])
{int i;
    for (i=0;i<strlen(mot_a_trouver);i++)
    {
        mot_avec_etoiles[i]='*';
    }
    mot_avec_etoiles[i]='\0';
}

int existe(const char *a, char c) {
    while (*a != '\0') {
        if (*a == c) {
            return 1;
        }
        a++;
    }
    return 0;
}

int main() {
    char mot_a_trouver[] ="AYMANELF";
    char mot_decouvert[13]; 
    cacher(mot_a_trouver,mot_decouvert);

    char lettre;
    int n = 0;

    while (n < 11) {
        int lettre_trouvee = 0;
        printf("Mot à deviner : %s\n", mot_decouvert);
        printf("Entrez une lettre : ");
        scanf(" %c", &lettre);
        if (existe(mot_a_trouver, lettre)) {
            for (int i = 0; i < strlen(mot_a_trouver); i++) {
                if (mot_a_trouver[i] == lettre) {
                    mot_decouvert[i] = lettre;
                    lettre_trouvee = 1;
                }
            }
            if (strcmp(mot_decouvert, mot_a_trouver) == 0) {
                printf("Félicitations, vous avez gagné ! Le mot était : %s\n", mot_a_trouver);
                break;
            }
        } else {
            printf("%s", cartoon[n]);
            n++;
        }
    }

    if (n == 11) {
        printf("Désolé, vous avez perdu. Le mot était : %s\n", mot_a_trouver);
    }

    return 0;
}