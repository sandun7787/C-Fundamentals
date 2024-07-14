#include <stdio.h>

int main(){
int i;
for(i=0;i<100;i+=10){
    if(i==99){
        break;
}
printf("%d\n"i);
}

return 0;
}
