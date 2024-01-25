for(;i<n;i++){
       for(j=i+1;j<n;j++){
           if((a[i]+k)>a[j] && a[j]>=(a[i]-k)){
               h[i]=1;
               h[j]=1;
           }
       }
   }
