#include <stdio.h>
#include <stdlib.h>
main(int argc, char *argv[]) {
  int n,x,y;
  
  n=atoi(argv[1]);
  
  printf("    ");
  for(y=0;y<n+1;y++){
    for(x=0;x<n+1;x++){
      if(y==0){
        if(x!=n) printf("%3d ",x+1);
      }else{
        if(x==0) printf("%3d ",y);
        else{
          printf("%3d ",x*y);
        }
      }
    }
    printf("\n");
  }
}
