#include <stdio.h>


int birlik(int b){

    return b % 10;
}

int onluk(int x){

    return x / 10;
}

int main(void)
{

    for(int pay=10; pay<100; pay++)
    {
        for(int payda=10; payda<100; payda++)
        {

            float bolme, bolme_yeni;

            bolme = (float) pay / payda;

            if(onluk(pay) == onluk(payda))
            {

                bolme_yeni = (float) birlik(pay) / birlik(payda);

                if(bolme == bolme_yeni && pay != payda)
                {
                    printf("esitligi saglayan kesir: %d / %d = %f\n ", pay, payda, (float) pay / payda);
                    printf("sadelesmis hali: %d / %d \n ", birlik(pay), birlik(payda));
                }
            }

            if(onluk(pay) == birlik(payda))
            {

                bolme_yeni = (float) birlik(pay) / onluk(payda);

                if(bolme == bolme_yeni && pay != payda)
                {
                    printf("esitligi saglayan kesir: %d / %d = %f \n ", pay, payda, (float) pay / payda);
                    printf("sadelesmis hali: %d / %d \n ", birlik(pay), onluk(payda));
                }
            }

            if(birlik(pay) == onluk(payda))
            {

                bolme_yeni = (float) onluk(pay) / birlik(payda);

                if(bolme == bolme_yeni && pay != payda)
                {
                    printf("esitligi saglayan kesir: %d / %d = %f\n ", pay, payda, (float) pay / payda);
                    printf("sadelesmis hali: %d / %d \n ", onluk(pay), birlik(payda));
                }
            }

            if(birlik(pay) == birlik(payda))
            {

                bolme_yeni = (float) onluk(pay) / onluk(payda);

                if(bolme == bolme_yeni && pay != payda)
                {
                    printf("esitligi saglayan kesir: %d / %d = %f\n ", pay,payda, (float) pay / payda);
                    printf("sadelesmis hali: %d / %d \n ", onluk(pay), onluk(payda));
                }
            }
        }
    }
}
