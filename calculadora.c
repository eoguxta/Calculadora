void main()
{    
    float numero1, numero2, resultado;
    char operacao;

    
    printf("Qual o número1 da sua operação? ");
    scanf("%f", &numero1);
    printf("Qual o número2 da sua operação? ");
    scanf("%f", &numero2);
    printf("Qual operação você deseja fazer? ");
    scanf(" %c", &operacao);
     
    switch(operacao){
    case '+':
    resultado=numero1+numero2;
    printf("O resultado eh %.2f", resultado);
    break;
    
    case '-':
    resultado=numero1-numero2;
    printf("O resultado eh %.2f", resultado);
   break;
   case '*':
    resultado=numero1*numero2;
    printf("O resultado eh %.2f", resultado);
   break;
   case '/':
    resultado=numero1/numero2;
    printf("O resultado eh %.2f", resultado);
   break;
   
   default:
   printf("Operacao invalida");
   
}
}
