#include <cstdio>
#include <cstring>

const int maxn = 105;
int total=0,status=1,cnt=1;
char s[maxn];

int main(int argc,char * argv[]) {
    memset(s,0,sizeof(s));
    scanf("%s",s);
    for (int i=0;i<strlen(s);i++) {
        if (s[i]=='X') {
            status=0;
            cnt=1;
        }
        else {
            status = 1;
            total += cnt;
            ++cnt;
        }
    }
    printf("%d\n",total);
    return 0;
}