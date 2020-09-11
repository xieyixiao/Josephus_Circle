//
// Created by jackxie on 2020/9/11.
//
//递归算法

/*#include<stdio.h>
int josephus(int n,int m);
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int ret=josephus(n,m);
    printf("%d",ret+1);
    return 0;
}
int josephus(int n,int m){
    if(n==1)
        return 0;
    else
        return (josephus(n-1,m)+m)%n;
}
*/
//数学非递归
#include<stdio.h>
int main(){
    int n,m=3;
    scanf("%d",&n);
    int ans=0,i=0;
    for(i=1;i<=n;i++){
        ans=(ans+m)%i;
    }
    printf("%d",ans);
    return 0;
}
