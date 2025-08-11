
    #include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21]; // 20 caracteres + 1 para o terminador '\0'

    printf("Digite a primeira string (até 20 caracteres): ");
    fgets(str1, sizeof(str1), stdin);
    // Remove o '\n' do final, se houver
    str1[strcspn(str1, "\n")] = 0;

    printf("Digite a segunda string (até 20 caracteres): ");
    fgets(str2, sizeof(str2), stdin);
    // Remove o '\n' do final, se houver
    str2[strcspn(str2, "\n")] = 0;

    // Compara as strings
    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}
 
     