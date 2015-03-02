#include <stdio.h>
#include <string.h>
int main(){
 char st1[]="amanha";
 char st2[]="manha";
 char st3[]="manho";
 if(strstr(st1,st2)!= NULL) printf("%s\n",strstr(st1,st2));
 if(strstr(st1,st3)!= NULL) printf("%s\n",strstr(st1,st3));
 return 0;
}
