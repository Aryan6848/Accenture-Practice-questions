else{
        for(int i=5;i<=n;i+=6){
          if(n%i == 0){
            return n-i;
          }
          else if(n%(i+2)== 0){
            return n-(i+2);
          }
        }
    }
}