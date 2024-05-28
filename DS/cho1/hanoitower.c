#include<stdio.h>
    // HanoiTower(n,'A','B','C');  // A = 출발지, B = 경유지, C = 도착지
    void HanoiTower(int n, char a, char b, char c){     //a = 출발지 변수 b = 경유지 변수 c= 도착지 변수
    if(n == 1) printf("원판%d , %c ->%c\n",n,a,c);      //n = 원판 개수 %d = n %c = a %c = c
    else{       //원판 개수가 2개 이상
            HanoiTower(n - 1,a,c,b); 
            printf("원판 :%d,%c -> %c\n ,",n,a,c);
            HanoiTower(n-1,b,a,c);
        }
    }
    