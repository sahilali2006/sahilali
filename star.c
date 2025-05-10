//Today's practice we did in class 


// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 

// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 
// 1 2 3 4 5 6 7 8 9 
// 1 2 3 4 5 6 7 8 9 10 

#include<stdio.h>
void main(){

    for ( int i = 5; i >= 1 ; i-- ){

        for( int j = i ; j >= 1 ; j-- ){
            printf("%d ", j);
        }
        printf("\n");
        
    }
}

    // for( int j = 2; j <= 10 ; j++ ){
        

    //     for ( int i = 1; i <= 10 ; i++ ){
    //         printf("%3d ", i * j);
    //     }
    //     printf("\n");
    // }


    // int i,j;

    // j = 2;
    // while ( j <= 10 ){

    //     i = 1;

    //     while( i <= 10 ){
    //         printf("%5d", i*j);
    //         i++;
    //     }

    //     printf("\n");
    //     j++;
    // }
