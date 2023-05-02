#include "bits/stdc++.h"
using namespace std;

int strlen(char * s){
    int len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}

char* reverse(char* a){
    char* s = new char;
    strcpy(s, a);
    int len = strlen(s);

    for(int i = 0; i < len/2; i++){
        swap(s[i], s[len-i-1]);
    }
    return s;
}

char* pad_right(char* s, int n){
    int len = strlen(s);
    char* a = new char;
    strcpy(a, s);
    if(len >= n) 
    	return a;
    for(int i = 0; i < n - len; i++){
       a[len + i] = ' ';
    }
    a[n] = '\0';
    return a;
}

char* pad_left(char* s, int n){
    int len = strlen(s);
    char* tmp = new char;
    strcpy(tmp, s);
    if(len >= n) return tmp;

    for(int i = 0; i < n - len; i++){
        tmp[i] = ' ';
    }

    for(int i = 0; i < len; i ++){
        tmp[n - len + i] = s[i];
    }
    tmp[n] = '\0';
    return tmp;
}

char* truncate(char*s, int n){
    int len = strlen(s);
    char* res = new char;
    strcpy(res, s);
    if(len <= n) return res;
    res[n] = '\0';
    return res;
}

bool ispalindrome(char* s){
    int len = strlen(s);
    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len - i - 1]) return false;
    }
    return true;
}

char* trim_left(char* s){
    int len = strlen(s);
    char* a = new char;
    strcpy(a, s);
    int cnt = 0;
    while(cnt < len && s[cnt] != ' '){
        cnt++;
    }

    for(int i = 0; i < len - cnt; i++){
        a[i] = a[i + cnt];
    }

    a[len - cnt] = '\0';
    return a;

}

int main(){
    return 0;
}