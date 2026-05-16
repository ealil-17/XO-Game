#include <stdio.h>
#include <string.h>

// main function to combine the run all the function.

int main(){

    // Initializing of the variables and the XO tables as an array

    char arr[9] = {'0','0','0','0','0','0','0','0','0'};
    for(int e = 0; e<70 ;e++){
        printf("-");
    }
    printf("!!! XO !!! ");
    for(int e = 0;e<60;e++){
        printf("-");
    }

    printf("\nPlayer 1 : X , Player 2 : O\n");
    
    // Calling the XO game function in the main

    xo(arr);
    
}

int xo(char arr[]){
    int n;
    char x;
    for(int j=0;j<9;j++){        

        // To check the player who won the game

    if( (arr[0]==arr[1] && arr[1]==arr[2] && arr[2]=='X') || 
        (arr[0]==arr[3] && arr[3]==arr[6] && arr[6]=='X') || 
        (arr[1]==arr[4] && arr[4]==arr[7] && arr[7]=='X') || 
        (arr[3]==arr[4] && arr[4]==arr[5] && arr[5]=='X') || 
        (arr[2]==arr[5] && arr[5]==arr[8] && arr[8]=='X') || 
        (arr[6]==arr[7] && arr[7]==arr[8] && arr[8]=='X') || 
        (arr[0]==arr[4] && arr[4]==arr[8] && arr[8]=='X') || 
        (arr[2]==arr[4] && arr[4]==arr[6] && arr[6]=='X') ){

        printf("\nPlayer 1 WON!!!"); 
        return 0;               
       }
    if( (arr[0]==arr[1] && arr[1]==arr[2] && arr[2]=='O') || 
        (arr[0]==arr[3] && arr[3]==arr[6] && arr[6]=='O') || 
        (arr[1]==arr[4] && arr[4]==arr[7] && arr[7]=='O') || 
        (arr[3]==arr[4] && arr[4]==arr[5] && arr[5]=='O') || 
        (arr[2]==arr[5] && arr[5]==arr[8] && arr[8]=='O') || 
        (arr[6]==arr[7] && arr[7]==arr[8] && arr[8]=='O') || 
        (arr[0]==arr[4] && arr[4]==arr[8] && arr[8]=='O') || 
        (arr[2]==arr[4] && arr[4]==arr[6] && arr[6]=='O') ){

         printf("\nPlayer 2 WON!!!"); 
         return 0;
       }
       
    
    // To check whether all the slots are filled

    int sum = 0;

    for(int i=0;i<9;i++){
        if(arr[i]!='0' && 9>j>0){
            sum++;
        }
    }

    // print the msg as slots are filled

    if(sum==9){
        printf("NO slots to play\n");
        printf("It is a Tie");
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

    // TO check and prevent the overwriting of the filled slots.

    if(arr[n]!='0'){
        printf("FOAL : This slot is already filled.\n");
        printf("Round played by next player.\n");
        
    }
    else  {
        arr[n]=x;
    }
    
    // Print the table

    for(int k=1;k<10;k++){
    printf("%c ",arr[k-1]);
    if(k%3==0){
        printf("\n");
    }
        }
    }
}