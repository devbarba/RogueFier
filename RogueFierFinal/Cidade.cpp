#include "Cidade.h"

void SementeCidade() {
    return srand(time(NULL));
}

void VerificaCidade() {
    if (GuardaLugar == CIDADE) {
        CidadeNPC();
    }
}

cidade pcvida = 0, pcestafa = 0, pmaca = 0, pgarrafa = 0, parmadura = 0;

void VenderCidade(){

    cidade Item;

    system("CLS");
    printf("-=(Invent�rio de %s)=-\n", Explorador);

    printf("Espa�o 0 - %i %s\n", pcvida, Espaco1);
    printf("Espa�o 1 - %i %s\n", pcestafa, Espaco2);
    printf("Espa�o 2 - %i %s\n", pmaca, Espaco3);
    printf("Espa�o 3 - %i %s\n", pgarrafa, Espaco4);
    printf("Espa�o 4 - %i %s\n", parmadura, Espaco5);
    printf("Espa�o 5 - %i %s\n", plobo, Espaco6);
    printf("Espa�o 6 - %i %s\n", pcorvo, Espaco7);
    printf("Espa�o 7 - %i %s\n", phumana, Espaco8);
    printf("Espa�o 8 - %i %s\n", pchifres, Espaco9);
    printf("Espa�o 9 - %i %s\n", pcebo, Espaco10);

    printf("\nDeseja Vender Qual Item(Itens de 0 a 9)?: ");
    Item = getch();

    switch (Item) {
    case '0': if (strcmp(Espaco1, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu o Item 0 - %s\n", Espaco1); pcvida = 0; Inv -= 1; Ouro += 300; strcpy(Espaco1, "Vazio\0"); sleep(3); system("cls"); break;
    case '1': if (strcmp(Espaco2, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu o Item 1 - %s\n", Espaco2); pcestafa = 0; Inv -= 1; Ouro += 250; strcpy(Espaco2, "Vazio\0"); sleep(3); system("cls"); break;
    case '2': if (strcmp(Espaco3, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu o Item 2 - %s\n", Espaco3); pmaca = 0; Inv -= 1; Ouro += 400; strcpy(Espaco3, "Vazio\0"); sleep(3); system("cls"); break;
    case '3': if (strcmp(Espaco4, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu o Item 3 - %s\n", Espaco4); pgarrafa = 0; Inv -= 1; Ouro += 400; strcpy(Espaco4, "Vazio\0"); sleep(3); system("cls"); break;
    case '4': if (strcmp(Espaco5, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu o Item 4 - %s\n", Espaco5); parmadura = 0; Inv -= 1; Ouro += 10000; strcpy(Espaco5, "Vazio\0"); sleep(3); system("cls"); break;
    case '5': if (strcmp(Espaco6, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu %i Unidades do Item 5 - %s\n", plobo, Espaco6); Espc6 = 0; Inv -= 1; plobo = 0; Ouro += 20 * plobo; strcpy(Espaco6, "Vazio\0"); sleep(3); system("cls"); break;
    case '6': if (strcmp(Espaco7, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu %i Unidades do Item 6 - %s\n", pcorvo, Espaco7); Espc7 = 0; Inv -= 1; pcorvo = 0; Ouro += 30 * pcorvo; strcpy(Espaco7, "Vazio\0"); sleep(3); system("cls"); break;
    case '7': if (strcmp(Espaco8, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu %i Unidades do Item 7 - %s\n", phumana, Espaco8); Espc8 = 0; Inv -= 1; phumana = 0; Ouro += 40 * phumana; strcpy(Espaco8, "Vazio\0"); sleep(3); system("cls"); break;
    case '8': if (strcmp(Espaco9, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu %i Unidades do Item 8 - %s\n", pchifres, Espaco9); Espc9 = 0; Inv -= 1; pchifres = 0; Ouro += 50 * pchifres; strcpy(Espaco9, "Vazio\0"); sleep(3); system("cls"); break;
    case '9': if (strcmp(Espaco10, "Vazio") == 0) { printf("\n\nN�o h� Item a Ser Vendido"); sleep(3); system("cls"); return; } printf("\nVoce Vendeu %i Unidades do Item 9 - %s\n", pcebo, Espaco10); Espc10 = 0; Inv -= 1; pcebo = 0; Ouro += 10 * pcebo; strcpy(Espaco10, "Vazio\0"); sleep(3); system("cls"); break;
    default: system("CLS"); VenderCidade(); break;

    }
    
    return;
}

void RecarregarCidade() {

    system("CLS");

    if(strcmp(Espaco1, "Vazio") == 0){
        printf("Cicatrizando Feridas...\n\n");
        Vida = 100;
        sleep(2);
    }
    else {
        printf("Use Sua Po��o de Vida Aproveitador Haha!\n\n");
        sleep(2);
    }

    if (strcmp(Espaco2, "Vazio") == 0) {
        printf("Relaxando Com Massagens de Belas Mo�as...\n\n");
        Estafa = 100;
        sleep(2);
    }
    else {
        printf("Use Sua Po��o de Estafa Aproveitador Haha!\n\n");
        sleep(2);
    }

    if (strcmp(Espaco3, "Vazio") == 0) {
        printf("Desfrutando de um Banquete Junto a 'Fier'mer...\n\n");
        Comida = 20;
        sleep(2);
    }
    else {
        printf("Coma Suas Ma��s Aproveitador Haha!\n\n");
        sleep(2);
    }

    if (strcmp(Espaco4, "Vazio") == 0) {
        printf("Bebendo a Pura �gua de Fier...\n\n");
        Agua = 20;
        sleep(2);
    }
    else {
        printf("Tome Sua Garrafa D'agua Aproveitador Haha!\n\n");
        sleep(2);
    }

    return;

}


void CidadeNPC(){

    npc Input;

    system("CLS");
    printf("Voc� Est� em Sua Cidade Natal a Grandiosa Fier, Prestes a Come�ar Suas Aventuras... \n\n1- Vender Itens | 2- Recarregar Pontos Vitais | 3- Sair da Cidade\n\nO Que Deseja Fazer?\n");
    
    do {
        Input = getch();
        switch (Input) {
        case '1': printf("\n"); VenderCidade(); return;
        case '2': printf("\n"); RecarregarCidade(); return;
        case '3': system("CLS"); return;
        default: break;
        }
    } while (Input != 3);
 
      system("CLS");  
      return;
}