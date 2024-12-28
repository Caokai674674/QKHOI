#include <bits/stdc++.h>
using namespace std;
int m[20]={
    1,2,3,4,5,
    6,7,8,9,10,
    10,10,10,10,10,
    10,10,10,10,10,
};
int temp,temp1,sum,k,ttemp;
long long lsum;
inline bool r(){
    return (rand()%2==0)?1:0;
}
inline bool rr(){
    return rand()%80<=10?0:1;
}
inline int r5(){
    if(r()) return rand()%5;
    return -rand()%4;
}

int main(){
    srand(time(0));
    for(int i=0;i<20;i++){
        string a="average"+to_string(i+1)+".in";
        freopen(a.c_str(),"w",stdout);
        printf("%d\n",m[i]);
        for(int j=0;j<m[i];j++){
            temp=rand();
            temp1=rand();
            if(j<=4){
                printf("%d %d\n",temp%1000+1,rand()%1000+1);
                int all[temp%1000+1];sum=0;
                for(int j=0;j<temp%1000+1;j++){
                    all[j]=(rand()*10+rand())%200000+1;
                    sum+=all[j];
                }
                if(sum>=1000000000){
                    i--;
                    continue;
                }
                for(int j=0;j<temp%1000+1;j++){
                    printf("%d ",all[j]);
                }
                putchar(10);
            }
            else if(r()){
                printf("%d %d\n",(temp*10+temp1)%200000+1,rand()%1000+1);
                for(int j=0;j<(temp*10+temp1)%200000+1;j++){
                    printf("%d ",(rand()*10000+rand()*10+rand())%1000000000+1);//30000 00000
                }
                putchar(10);
            }
            else if(rr()){
                temp=((rand()*10+rand())%100000+rand()+30000)/2;
                temp*=2;
                k=(rand()%1000+1)/2;
                k*=2;
                lsum=temp*k;
                printf("%d %d\n",temp,k);
                for(int i=0;i<temp-2;i++){
                    ttemp=temp+r5()*k;
                    lsum-=ttemp;
                    printf("%d ",ttemp);
                }
                printf("%d %d ",lsum/2,lsum/2);
                putchar(10);
            }
            else{
                temp1=rand()%1000+1;
                k=rand()%1000+1;
                temp=(rand()*10+rand())%100000+rand()+30000;
                printf("%d %d\n",temp1,k);
                for(int i=0;i<temp1;i++) printf("%d ",temp);
                putchar(10);
            }
        }
        putchar(10);
    }
    return 0;
}
