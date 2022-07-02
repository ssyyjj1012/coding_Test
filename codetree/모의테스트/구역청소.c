#include <stdio.h>
int main(){
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    
    if(a==c&&b==d){printf("%d",(b-a));}
    else if(b<c){
        printf("%d",(b-a)+(d-c));
    } 
    else if(b>c){
        if(a>c){
            if(d<a){printf("%d",(b-a)+(d-c));}
            else if(d>a){
                if(b>d){
                    e = d-a;
                    printf("%d",(b-a)+(d-c)-e);}
                else{
                    printf("%d",d-c);
                }
            }
            else{printf("%d",b-c);}
        }
        else if(a<c){
            if(b>d){printf("%d",b-a);}
            else if(b<d){printf("%d",d-a);}
            else{printf("%d",d-a);}
        }
    }
    else{printf("%d",(b-a)+(d-c));}
    return 0;
}
