void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("%d ",j);    
        }
            printf("\n");
    }
}

/*

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);    
        }
            printf("\n");
    }
}

/*

A
A B
A B C
A B C D
A B C D E

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);    
        }
            printf("\n");
    }
}

/*

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);    
        }
            printf("\n");
    }
}

/*
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);    
        }
            printf("\n");
    }
}

/*

1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);    
        }
            printf("\n");
    }
}

/*
1 
2 2
3 3 3 
4 4 4 4 
5 5 5 5 5
*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");    
        }
            printf("\n");
    }
}

/*

*
**
***
****
*****

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
            printf("\n");
    }
}

/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
            printf("\n");
    }
}

/*

1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*
1 2 3 4 5 
1 2 3 4
1 2 3
1 2 
1

*/

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=i;j<=5;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*
1 2 3 4 5 
2 3 4 5
3 4 5
4 5
5
*/

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}


/*

5 4 3 2 1 
4 3 2 1
3 2 1
2 1 
1
*/

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=i;j<=5;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*
5 
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/

void main(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
void main(){
    int i,j,k;
    for(i=8;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        // printf("\n");
        for(k=i;k>=1;k--){
            printf("%c ",k+64);
        }
        // printf("\n %d",i);
        printf("\n");
    }
}




/*
A B C D E F G H H G F E D C B A 
A B C D E F G G F E D C B A
A B C D E F F E D C B A 
A B C D E E D C B A
A B C D D C B A
A B C C B A 
A B B A
A A
*/