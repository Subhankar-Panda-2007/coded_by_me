#include <stdio.h>
int main(void){
    int suboption,option;
    printf("what system you want to try?\nType 1 for Academic & Scholarship Auditor.\nType 2 for Tax calculator.\nType 3 for Geometric Validation.\nType 4 for Loan Assessment.\n");
    if(scanf("%d",&option)!=1 || option <=0){
        printf("ERROR! INVALID INPUT! TRY AGAIN.\n");
        return 1;
    }
    switch(option){
        case 1: printf("You have selected Academic & Scholarship Auditor.\nTo proceed press 1 and to select again press 2.\n"); 
                if(scanf("%d",&suboption)!=1 || suboption <1 || suboption >2){
                printf("ERROR! INVALID INPUT! TRY AGAIN.\n");
                return 1;
                }
                else if(suboption==1){
                printf("You have decided to proceed.\n");
                }
                else if(suboption==2){
                return 1;
                }
        break;
        case 2: printf("You have selected Tax calculator.\nTo proceed press 1 and to select again press 2.\n"); 
                if(scanf("%d",&suboption)!=1 || suboption <1 || suboption >2){
                printf("ERROR! INVALID INPUT! TRY AGAIN.\n");
                return 1;
                }
                else if(suboption==1){
                printf("You have decided to proceed.\n");
                }
                else if(suboption==2){
                return 1;
                }
        break;
        case 3: printf("You have selected Geometric Validation.\nTo proceed press 1 and to select again press 2.\n"); 
                if(scanf("%d",&suboption)!=1 || suboption <1 || suboption >2){
                printf("ERROR! INVALID INPUT! TRY AGAIN.\n");
                return 1;
                }
                else if(suboption==1){
                printf("You have decided to proceed.\n");
                }
                else if(suboption==2){
                return 1;
                }
        break;
        case 4: printf("You have selected Loan Assessment.\nTo proceed press 1 and to select again press 2.\n"); 
                if(scanf("%d",&suboption)!=1 || suboption <1 || suboption >2){
                printf("ERROR! INVALID INPUT! TRY AGAIN.\n");
                return 1;
                }
                else if(suboption==1){
                printf("You have decided to proceed.\n");
                }
                else if(suboption==2){
                return 1;
                }
        break;
        default: printf("You have entered a wrong input.\n"); 
        return 1;
    }
    switch(option){
        case 1: printf("WELCOME TO Academic & Scholarship Auditor\n");
                int bengali,english,math,income;
                printf("Enter your marks subject wise.\n");
                printf("Bengali:");
                    if(scanf("%d",&bengali)!=1 || bengali <0 || bengali>100){
                        printf("INVALID INPUT! 1 more try ! Enter mark again carefully or system wil RESTART!\nBengali:");
                        char junk;
                        scanf("%c",&junk);
                        if(scanf("%d",&bengali)!=1 || bengali <0 || bengali>100){
                        return 1;
                        }    
                    }
                    if(bengali<33){
                        printf("You are falied.Cut off is 33 marks.You will get 0%% scholarship\n");
                        return 0;
                    }
                printf("Your Bengali mark is saved.\n");

                printf("English:");
                    if(scanf("%d",&english)!=1 || english <0 || english>100){
                        printf("INVALID INPUT! 1 more try ! Enter mark again carefully or system wil RESTART!\nEnglish:");
                        char junk1;
                        scanf("%c",&junk1);
                        if(scanf("%d",&english)!=1 || english <0 || english>100){
                        return 1;
                        }          
                    }
                    if(english<33){
                        printf("You are falied.Cut off is 33 marks.You will get 0%% scholarship\n");
                        return 0;
                    }
                printf("Your English mark is saved.\n");

                printf("Math:");
                    if(scanf("%d",&math)!=1 || math <0 || math>100){
                        printf("INVALID INPUT! 1 more try ! Enter mark again carefully or system wil RESTART!\nMath:");
                        char junk2;
                        scanf("%c",&junk2);
                        if(scanf("%d",&math)!=1 || math <0 || math>100){
                        return 1;
                        }          
                    }
                    if(math<33){
                        printf("You are falied.Cut off is 33 marks.You will get 0%% scholarship\n");
                        return 0;
                    }
                printf("Your Math mark is saved.\n");

                printf("Income:");
                    if(scanf("%d",&income)!=1 || income <=0){
                        printf("INVALID INPUT! 1 more try ! Enter mark again carefully or system wil RESTART!\nIncome:");
                        char junk3;
                        scanf("%c",&junk3);
                        if(scanf("%d",&income)!=1 || income <0 || income>100){
                        return 1;
                        }          
                    }
                scanf("%*[^\n]"); // 1. Deletes everything on the belt up to the Enter key
                scanf("%*c");     // 2. Deletes the remaining Enter key (\n) itself
                // it also deletes everything
                //while(getchar() != '\n');

                printf("Your income is saved.\nPress Enter to see your Academic & Scholarship Auditor results:");
                char proceed1;
                if(scanf("%c",&proceed1)!=1){
                        printf("INVALID INPUT! 1 more try !Faliure may cause system RESTART!\nPress \"enter\":");
                        char junk4;
                        scanf("%c",&junk4);
                        if(scanf("%c",&proceed1)!=1){
                        return 1;
                        }          
                    }
                printf("Your Academic & Scholarship Auditor results:\n");
                int total = bengali+english+math;
                int percentage= total*100/300;
                char grade;
                if(total>=120 && total <150){
                    grade='D';
                }
                else if(total>=150 && total <200){
                    grade='C';
                }
                else if(total>=200 && total <250){
                    grade='B';
                }
                else if(total>=250 && total <275){
                    grade='A';
                }
                else if(total>=275){
                    grade='S';
                }
                else{
                    grade ='F';
                }
                printf("You have scored %d in Bengali %d in English and %d in Math.That's makes total %d.\n",bengali,english,math,total);
                if(total<120){
                    printf("However to pass you had to score over 40%% marks.but your total percentage is %d.\nYOU HAVE FAILED.\n",percentage);
                    printf("You will get 0%% scholarship.\nGRADE:%c\n",grade);
                    return 0;
                }
                printf("You have PASSED.Your total percentage is %d.\nGRADE:%c",percentage,grade);
                if(total<=200){
                    printf("How ever you are not eligible to any scholarship with this GRADE.\n");
                    return 0;
                }
                if(income<=250000){
                    if(total>=200){
                        printf("You will get 90%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=250){
                        printf("You will get 95%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=275){
                        printf("You will get 100%% Scholarhsip!\n");
                        return 0;
                    }               
                }
                if(income>=250000 && income<=500000){
                    if(total>=200){
                        printf("You will get 80%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=250){
                        printf("You will get 85%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=275){
                        printf("You will get 90%% Scholarhsip!\n");
                        return 0;
                    }               
                }
                if(income>=500000 && income <= 800000){
                    if(total>=200){
                        printf("You will get 70%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=250){
                        printf("You will get 75%% Scholarhsip!\n");
                        return 0;
                    }
                    else if(total>=275){
                        printf("You will get 80%% Scholarhsip!\n");
                        return 0;
                    }               
                }
                if(income>=800000){
                        printf("You will get 0%% Scholarhsip due to high income bracket!\n");
                        return 0;
                }               
        break;
    }
    return 0;
}