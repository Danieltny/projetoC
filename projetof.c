// Daniel Tan Yuan Rong R.A:11.120.483-0

//biblioteca
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//função principal
int main(){
//indicar a entrada das variaveis
    int i;
    int opc;
    int dif;
    int num1[10];
    int num2[10];
    int *p_num1[10];
    int *p_num2[10];
    int adi;
    int sub;
    int mult;
    int x[10];
    int y[10];
    int cert;
    int mist;
    int rad;
    int med;
    int menc;
    int meninc;
    int list[10][6];
    double div;
    double resp;
    float r_div; 
    srand(time(NULL));
    // mostragem das opções do usuario
    printf("menu:\n");
    printf("Escolha o nível de dificuldade das operações de 1 a 7:\n");
    scanf("%d",&dif);
    printf("\n\t SOMA: 1 \n");
    printf("\n\t SUBTRAÇÃO:2 \n");
    printf("\n\t MULTIPLICAÇÃO: 3 \n");
    printf("\n\t DIVISÃO: 4 \n");
    printf("\n\t MISTURA:5 \n");
    scanf("%d", &opc);
    printf("\n");
    if(dif>0 && dif<8){
        switch(dif){
        case 1:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 10;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 10;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 2:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 100;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 100;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 3:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 1000;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 1000;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 4:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 10000;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 10000;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 5:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 100000;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            printf("\n");
            for (i=0; i < 10; i++){
                num2[i] = rand() % 100000;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 6:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 1000000;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 1000000;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        case 7:
            for (i=0; i < 10; i++){
                num1[i] = rand() % 10000000;
                p_num1[i] = &num1[i];
                x[i]= *p_num1[i];
                printf("%d ", num1[i]);
            }
            for (i=0; i < 10; i++){
                num2[i] = rand() % 10000000;
                p_num2[i] = &num2[i];
                y[i]= *p_num2[i];
                printf("%d ", num2[i]);
            }
            break;
        }
    }
    else{
        printf("numero invalido");
        }
    printf("\n");
    if(opc>0 && opc<6){
      int p[6];
        switch(opc){
        case 1:
            printf("problemas de adição\n");
            for (i=0; i < 10; i++){
                adi= (*p_num1[i]++) + (*p_num2[i]++);
                printf("Quanto é %d somando por %d?\n", x[i] , y[i]);
                scanf("%lf", &resp);
                if (resp==adi){
                    menc = rand() % 4;
                    switch (menc){
		            case 0:
			            printf("Muito bem!\n");
			            break;
		            case 1:
			            printf("Excelente!\n");
			            break;
		            case 2:
			            printf("Bom trabalho!\n");
			            break;
		            case 3:
			            printf("Mantenha o bom trabalho!\n");
			            break;
                }
                cert=cert+1;

                list[i][0]=x[i];
                list[i][1]=y[i];
                list[i][2]=adi;
                list[i][3]=resp;
                list[i][4]=1;
            }
                else{
                    meninc = rand() % 4;
                    switch (meninc){
		            case 0:
			            printf("Não. Por favor, tente novamente.\n");
			            break;
		            case 1:
			            printf("Errado\n");
			            break;
		            case 2:
			            printf("Não desista!\n");
			            break;
		            case 3:
			            printf("Não. Continue tentando.\n");
			            break;
                }
            }
            printf("a resposta é %d \n",adi);
            }
        break;
        case 2:
             printf("problemas de subtração\n");
            for (i=0; i < 10; i++){
            sub= (*p_num1[i]++) - (*p_num2[i]++);
            printf("Quanto é %d subtraindo por %d?\n", x[i] , y[i]);
            scanf("%lf",&resp);
            if (resp==sub){
                menc = rand() % 4;
                    switch (menc){
		            case 0:
			            printf("Muito bem!\n");
			            break;
		            case 1:
			            printf("Excelente!\n");
			            break;
		            case 2:
			            printf("Bom trabalho!\n");
			            break;
		            case 3:
			            printf("Mantenha o bom trabalho!\n");
			            break;
                }
                cert=cert+1;
            }
            else{
                    meninc = rand() % 4;
                    switch (meninc){
		            case 0:
			            printf("Não. Por favor, tente novamente.\n");
			            break;
		            case 1:
			            printf("Errado\n");
			            break;
		            case 2:
			            printf("Não desista!\n");
			            break;
		            case 3:
			            printf("Não. Continue tentando.\n");
			            break;
                }
            }
            printf("a resposta é %d \n",sub);
            }
        break;
        case 3:
            printf("problemas de multiplicação\n");
            for (i=0; i < 10; i++){
            mult= (*p_num1[i]++) * (*p_num2[i]++);
            printf("Quanto é %d multiplicado por %d?\n", x[i] , y[i]);
            scanf("%lf",&resp);
            if (resp==mult){
               menc = rand() % 4;
                    switch (menc){
		            case 0:
			            printf("Muito bem!\n");
			            break;
		            case 1:
			            printf("Excelente!\n");
			            break;
		            case 2:
			            printf("Bom trabalho!\n");
			            break;
		            case 3:
			            printf("Mantenha o bom trabalho!\n");
			            break;
                }
                cert=cert+1;
            }
            else{
                    meninc = rand() % 4;
                    switch (meninc){
		            case 0:
			            printf("Não. Por favor, tente novamente.\n");
			            break;
		            case 1:
			            printf("Errado\n");
			            break;
		            case 2:
			            printf("Não desista!\n");
			            break;
		            case 3:
			            printf("Não. Continue tentando.\n");
			            break;
                }
            }
            printf("a resposta é %d \n",mult);
            }
        break;
        case 4:
            printf("problemas de divisão\n");
            for (i=0; i < 10; i++){
            if(y[i]==0){
            div= (double)(*p_num1[i]++) / (double)(y[i]+1);
            printf("Quanto é %d Dividido por %d?\n", x[i] , y[i]+1);
            scanf("%lf",&resp);
            }
            else{
            div= (double)(*p_num1[i]++) / (double)(*p_num2[i]++);
            printf("Quanto é %d Dividido por %d?\n", x[i] , y[i]);
            scanf("%lf",&resp);
            }
            resp=floorf(resp * 100) / 100;
            r_div = floorf(div * 100) / 100;
            printf("%.2f\n",r_div);
            if (resp==r_div){
                menc = rand() % 4;
                    switch (menc){
		            case 0:
			            printf("Muito bem!\n");
			            break;
		            case 1:
			            printf("Excelente!\n");
			            break;
		            case 2:
			            printf("Bom trabalho!\n");
			            break;
		            case 3:
			            printf("Mantenha o bom trabalho!\n");
			            break;
                    }
                    cert=cert+1;
                }
            else{
                meninc = rand() % 4;
                switch (meninc){
		        case 0:
			        printf("Não. Por favor, tente novamente.\n");
			        break;
		        case 1:
			        printf("Errado\n");
			        break;
		        case 2:
			        printf("Não desista!\n");
			        break;
		        case 3:
			        printf("Não. Continue tentando.\n");
			        break;
                }
            }
            printf("A resposta é %.2f\n",r_div);
            }
            break;
        case 5:
           printf("problemas de adição\n");
            for (i=0; i < 10; i++){ 
                rad = rand() % 4;
                if(rad==0){
                    mist= (*p_num1[i]++) + (*p_num2[i]++);
                    printf("Quanto é %d somado por %d?\n", x[i] , y[i]);
                    scanf("%lf",&resp);
                }
                else if (rad==1){
                    mist= (*p_num1[i]++) - (*p_num2[i]++);
                    printf("Quanto é %d subtraido por %d?\n", x[i] , y[i]);
                    scanf("%lf",&resp);
                }
                else if (rad==2){
                    mist= (*p_num1[i]++) * (*p_num2[i]++);
                    printf("Quanto é %d multiplicado por %d?\n", x[i] , y[i]);
                    scanf("%lf",&resp);
                }
                else if (rad==3){
                    if(y[i]==0){
                      div= (double)(*p_num1[i]++) / (double)(y[i]+1);
                      printf("Quanto é %d Dividido por %d?\n", x[i] , y[i]+1);
                      scanf("%lf",&resp);
                     }
                    else{
                      div= (double)(*p_num1[i]++) / (double)(*p_num2[i]++);
                      printf("Quanto é %d Dividido por %d?\n", x[i] , y[i]);
                      scanf("%lf",&resp);
                    }
                    resp=floorf(resp * 100) / 100;
                    mist = floorf(div * 100) / 100;
                    }
            if (resp==mist){
                menc = rand() % 4;
                    switch (menc){
		            case 0:
			            printf("Muito bem!\n");
			            break;
		            case 1:
			            printf("Excelente!\n");
			            break;
		            case 2:
			            printf("Bom trabalho!\n");
			            break;
		            case 3:
			            printf("Mantenha o bom trabalho!\n");
			            break;
                }
                cert=cert+1;
            }
            else{
                meninc = rand() % 4;
                    switch (meninc){
		            case 0:
			            printf("Não. Por favor, tente novamente.\n");
			            break;
		            case 1:
			            printf("Errado\n");
			            break;
		            case 2:
			            printf("Não desista!\n");
			            break;
		            case 3:
			            printf("Não. Continue tentando.\n");
			            break;
                }
            }
            printf("a resposta é %d \n",mist);
            }
        break;
        }
    }
    else{
        printf("escolha um valor valido");
    }
    printf("voce acertou %d\n",cert);
    med=cert*10;
    printf("voce acertou %d\n",cert);
    printf("voce acertou %d%%\n",med);
    if (med>70){
		printf("Parabéns, você está pronto para ir para o próximo nível!\n");
		return main();
		}
	  else{
		printf("Peça ajuda extra ao seu professor.\n");
		return main();
	}
}
