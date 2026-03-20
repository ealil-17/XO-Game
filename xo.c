#include <stdio.h>
#include <string.h>
int main(){
    char arr[9] = {'0','0','0','0','0','0','0','0','0'};
    printf("XO\n");
    printf("Player 1 : X , Player 2 : O\n");
    printf("Player 1 starts\n");
    int y=xo(arr);
    if(y==0){
        printf("\nRun successfully");
    }
}

int xo(char arr[]){
    int n;
    char x;
    for(int j=0;j<9;j++){

    if(arr[0]==arr[1]==arr[2]=='X' || arr[0]==arr[3]==arr[6]=='X' || arr[1]==arr[4]==arr[7]=='X' || arr[3]==arr[4]==arr[5]=='X'|| arr[2]==arr[5]==arr[8]=='X' || arr[6]==arr[7]==arr[8]=='X' ||arr[0]==arr[4]==arr[8]=='X'||arr[2]==arr[4]==arr[6]=='X'){
        printf("\nX WON!!!");
        
        return 0;
    }
    if(arr[0]==arr[1]==arr[2]=='O' || arr[0]==arr[3]==arr[6]=='O' || arr[1]==arr[4]==arr[7]=='O' || arr[3]==arr[4]==arr[5]=='O'|| arr[2]==arr[5]==arr[8]=='O' || arr[6]==arr[7]==arr[8]=='O' ||arr[0]==arr[4]==arr[8]=='O'||arr[2]==arr[4]==arr[6]=='O'){
        printf("\nO won!!!");
        return 0;
    }
    int sum = 0;
    for(int i=0;i<9;i++){
        if(arr[i]!='0' && j>0){
            sum++;
        }
    }
    if(sum==9){
        printf("SUM");
        return 0;
    }
    
    if(j/2==0){
        x='X';
    }
    else{
        x='O';
    }

    printf("\nEnter the no of the placec:");
    scanf("%d",&n);
    arr[n]=x;
    printf("%s",arr);
    }
}