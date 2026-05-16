#include <stdio.h>
#include <string.h>

// main function to combine the run all the function.

int main(){
    char arr[9] = {'0','0','0','0','0','0','0','0','0'};
    for(int e = 0;e<70;e++){
        printf("-");
    }
    printf("!!! XO !!! ");
    for(int e = 0;e<60;e++){
        printf("-");
    }

    printf("\nPlayer 1 : X , Player 2 : O\n");
    int y;
    y=xo(arr);
    if(y==0){
        printf("\nRan successfully");
    }
}

int xo(char arr[]){
    int n;
    char x;
    for(int j=0;j<9;j++){
        printf("\n%d\n",j);

        // To check the player who won the game

    if((arr[0]==arr[1] && arr[1]==arr[2]) || (arr[0]==arr[3] && arr[3]==arr[6]) || (arr[1]==arr[4] && arr[4]==arr[7]) || (arr[3]==arr[4] && arr[4]==arr[5]) || (arr[2]==arr[5] && arr[5]==arr[8]) || (arr[6]==arr[7] && arr[7]==arr[8]) || (arr[0]==arr[4] && arr[4]==arr[8]) || (arr[2]==arr[4] && arr[4]==arr[6]) ){
       if(arr[4] == 'X'){
        printf("\nX WON!!!"); 
        return 0;               
       }
       else if(arr[4] == 'O'){
         printf("\nO WON!!!"); 
         return 0;
       }
       
    }
    
    
    // To check whether all the slots are filled

    int sum = 0;

    for(int i=0;i<9;i++){
        if(arr[i]!='0' && 9>j>0){
            sum++;
        }
    }
    if(sum==9){
        printf("SUM");
        return 0;
    }
    
    // To alternatively change the players turns to play

    if(j%2==0){
        x='X';
    }
    else{
        x='O';
    }


    // Display the XO table after each turns of each player .

    printf("\nPlayer %c \nEnter the slot number: ",x);
    scanf("%d",&n);
    arr[n]=x;
    for(int k=1;k<10;k++){
    printf("%c ",arr[k-1]);
    if(k%3==0){
        printf("\n");
    }
        }
    }
}