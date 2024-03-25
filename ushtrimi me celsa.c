#include <stdio.h>
#include <stdbool.h>

int main(){
    int hedhje, porta;
    int i, j = 0, piket = 0;
    bool x = true, y = true, z = true;

    printf("Vendosni numrin e hedhjeve te topit: ");
    scanf("%d", &hedhje);

    for(i=0;i< hedhje;i++){
        printf("Zgjidhni porten %d: 1.A   2.B:  ", i + 1);
        scanf("%d", &porta);
       while((porta != 1) && (porta != 2)) {
            printf("VLERE E PALEJUAR! Ju lutem shtypni numrin 1 ose 2: ");
            scanf("%d", &porta);
        } ;

        if(porta == 0){
            // Porta 1
            if(x){
                x = false;
            } else if(!x && y){
                x = true;
                j++;
                if(j % 2 == 0){
                    y = !y;
                }
            } else if(!x && !y){
                x = true;
                j++;
                piket++;
                if(j % 2 == 0){
                    y = !y;
                }
            }
        } else {
            // Porta 2
            if(!z){
                z = true;
                piket++;
            } else if(z && y){
                z = false;
                j++;
                if(j % 2 == 0){
                    y = !y;
                }
            } else if(z && !y){
                z = false;
                j++;
                piket++;
                if(j % 2 == 0){
                    y = !y;
                }
            }
        }
    }
    printf("Numri i pikeve: %d\n", piket);
    system("pause");
    return 0;
}
