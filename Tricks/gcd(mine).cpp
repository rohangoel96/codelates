int gcd(int a,int b){
    int lar,sma;
    if(a>b){
        lar=a;
        sma=b;
    }
    else{
        lar=b;
        sma=a;
    }
    if(lar%sma==0){
        return sma;
    }
    else{
        return gcd(sma,lar-sma);
    }
}