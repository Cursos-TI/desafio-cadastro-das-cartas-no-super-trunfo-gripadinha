int main() {
    // Definindo os dados das cartas
    char estado1 = 'A', estado2 = 'B';
    char codigo1[] = "A01", codigo2[] = "B02";
    char nomeCidade1[] = "Salvador", nomeCidade2[] = "Niterói";
    int populacao1 = 1279300, populacao2 = 902666;
    float area1 = 1521011.0, area2 = 12025.0;
    float pib1 = 699.28, pib2 = 350.50;
    int pontosTuristicos1 = 50, pontosTuristicos2 = 30;

    // Exibindo os dados da carta de Salvador
    printf("Dados da carta de Salvador:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    // Exibindo os dados da carta de Niterói
    printf("Dados da carta de Niterói:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}