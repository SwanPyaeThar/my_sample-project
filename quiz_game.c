//
// Created by swan on 5/23/24.
//Quiz game project tutorial from "The tech machine"
#include "stdio.h"

int main(){
        int i;
        int ans1,ans2,ans3,ans4,ans5;
        int point1,point2,point3,point4,point5,point6,point7,point8,point9,point10;
        int total1,total2,total3;
    printf("  Welcome to the game\n\n");
    printf(">Press 7 to start the game\n>Press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==7){
        printf("The game has started\n\n");
    }else if(i==0){
        printf("The game has ended\n\n");
    }else{
        printf("Invalid!\n\n");
    }
    if(i==7){
        printf("1)Which one is the first search engine in internet?\n\n");
        printf("1)Google\n2)Archie\n3)Wais\n4)Altavista\n");
        printf("Enter your answer>> ");
        scanf("%d",&ans1);
        if(ans1==2){
            printf("Correct Answer\n");
            point1=5;
            printf("You have scored %d point \n",point1);
        } else{
            printf("Wrong Answer\n");
            point1=0;
            printf("You have scored %d point \n",point1);
        }
        printf("2)Which one is the first web browser invented in 1990?\n\n");
        printf("1)Interntet explore\n2)Mosaic\n3)Mozilla\n4)Nexus\n");
        printf("Enter your answer>> ");
        scanf("%d",&ans2);
        if(ans2==4){
            printf("Correct Answer\n");
            point2=5;
            printf("You have scored %d point\n",point2);
        } else{
            printf("Wrong Answer\n");
            point2=0;
            printf("You have scored %d point\n",point2);
        }
        printf("3)First computer virus is known as?\n\n");
        printf("1)Rabbit\n2)Creeper Virus\n3)Elx Cloner\n4)SCA Virus\n");
        printf("Enter your answer>> ");
        scanf("%d",&ans3);
        if(ans3==2) {
            printf("Correct Answer\n");
            point3 = 5;
            printf("You have scored %d point\n", point3);
        } else{
            printf("Wrong Answer\n");
            point3=0;
            printf("You have scored %d point\n",point3);
        }
        printf("4)Firewall in computer used for?\n\n");
        printf("1)Security\n2)Data Transmission\n3)Monitoring\n4)Authentication\n");
        printf("Enter your answer>> ");
        scanf("%d",&ans4);
        if(ans4==1){
            printf("Correct Answer\n");
            point4 = 5;
            printf("You have scored %d point\n\n", point4);
        } else{
            printf("Wrong Answer\n");
            point4=0;
            printf("You have scored %d point\n\n",point4);
        }
        printf("5)Which of the following is not a database management software?\n\n");
        printf("1)Mysql\n2)Oracle\n3)Cobal\n4)Sybase\n");
        printf("Enter your answer>> ");
        scanf("%d",&ans5);
        if(ans5==3){
            printf("Correct Answer\n");
            point5 = 5;
            printf("You have scored %d point\n", point5);
        } else{
            printf("Wrong Answer\n");
            point5=0;
            printf("You have scored %d point\n",point5);
        }
        total1=point1+point2+point3+point4+point5;
        printf("Total score is %d point!\n",total1);
    }

    return 0;
}
