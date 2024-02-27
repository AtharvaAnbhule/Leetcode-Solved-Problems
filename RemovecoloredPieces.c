bool winnerOfGame(char * colors){
    int n;
    int countA=0;
    int countB =0;
    n = strlen(colors);
    for(int i=1;i<n-1;i++){
        if (colors[i]==colors[i-1] && colors[i]==colors[i+1]){
            if (colors[i]=='A')
                countA++;
            if (colors[i]=='B')
                countB++;
        }
    }

    if (countA > countB)
        return true;
    else if (countA == countB) 
        return false;
    else    return false;
   
}
