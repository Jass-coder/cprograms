void main(){
    char names[][10] = {"jass","raman","gurjeet","dsp","rana"};
    int i,length;
    char t;
    length = sizeof(names[0])/sizeof(names[0][0]);
    // printf("Length of string 2D array: %d",length);
    printf("\n Original Names: %s %s",&names[3][0],&names[2][0]);
    for(i=0;i<=length-1;i++){
        t = names[3][i];
        names[3][i] = names[2][i];
        names[2][i] = t;
    }
    printf("\n Exchanged Names: %s %s",&names[3][0],&names[2][0]);
}