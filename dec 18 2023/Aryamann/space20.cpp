// #include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;

/*
Replace spaces with %20 in a given string.
*/
void replace_space(char* s){
    int sp=0;
    for(int i=0;s[i]!='\0';i++){
        if (s[i]==' '){
            sp++;
        }
    }
    int idx=strlen(s)+2*sp;
    s[idx]='\0';
    idx--;
    for(int i=strlen(s)-1;i>=0;i--){
        if(s[i]==' '){
            s[idx]='0';
            s[idx-1]='2';
            s[idx-2]='%';
            idx-=3;
        }else{
            s[idx]=s[i];
            idx--;
        }
    }
}

int main(){
    char s[20]="asd x";
    replace_space(s);
    for(int i=0;s[i]!='\0';i++){
        cout<<s[i];
    }
    return 0;
}