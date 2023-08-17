// extraced string from specified position and specfic characters of string

void main(){
    char substring[100],string[50] = "Working with strings is fun";
    int position,length,c=0;
    printf("Enter number to extract string: ");
    scanf("%d",&pos);
    printf("Enter character numbers for extract: "); 
    scanf("%d",&length);

    while(c < length){
        substring[c] = string[pos+c-1];
        c++; 
    }
    substring[c] = '\0';
    
    printf("The substring retrieve from the string is :  %s \n", substring);
}