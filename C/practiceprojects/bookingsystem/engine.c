#include<stdio.h>
int mainmenu(){
    int userinput;
    printf("MENU:\nPress1:View Theater Map\nPress2:Book a Seat\nPress3:Exit Application\n");
    if(scanf("%d",&userinput)!=1||userinput<=0 || userinput >3){
        while (getchar() != '\n');
        mainmenu();
    }
    return userinput;
}

void viewtheatermap(){
    int seats[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            seats[i][j]=0;
        }
    }
    int isbooked=1;
    //some added bookings
    seats[2][2]=isbooked;
    seats[1][2]=isbooked;
    seats[2][3]=isbooked;
    seats[0][3]=isbooked;
    printf("\n");
    printf("SHOWING THEATER MAP\n");
    for(int k=0;k<3;k++){
        for(int l=0;l<4;l++){
            (seats[k][l]==0)?printf("[o] "):printf("[x] ");
        }printf("\n");
    }
    printf("\n\n");
}



int main (void){
    printf("WELLCOME TO TICKET BOOKING SYSTEM\n");

    while(1){
    int userinputresult=mainmenu();
    
    switch(userinputresult){
        case 1: viewtheatermap();break;
        // case 2: bookticket();break;
        case 3: printf("\n\nExiting the Application!\n");return 0;break;
    }
    }

    return 0;
}