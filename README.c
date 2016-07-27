#include <stdio.h>
#include<string.h>

int main()
{
    char a[20];
int mark[256];
memset(mark,0,sizeof(mark));
    scanf("%s",a);
    int i,n=strlen(a);
    for(i=0;i<n;i++){
        if(mark[a[i]]==0){
            mark[a[i]]=1;
        if(a[i]=='a'){
            a[i]='z';
        }
        else if(a[i]=='A')
           a[i]='Z';
        else
          a[i]=a[i]-1;
          
          mark[a[i]]=1;
         
        }
        
    }
    printf("%s",a);
    return 0;
}
