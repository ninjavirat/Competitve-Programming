#include<bits/stdc++.h>
#define MAX 256
using namespace std;
char text[100];
char pattern[100];
bool isanagram(char arr1[],char arr2[]){
    for(int i=0;i<MAX;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}
void check_anagram(char *text,char *pattern){
    int N=strlen(text), M=strlen(pattern);
    char text1[MAX]={0},patt1[MAX]={0};
    for(int i=0;i<M;i++){
        (text1[text[i]])++;
        (patt1[pattern[i]])++;
    }
    for(int i=M;i<N;i++){
        if(isanagram(text1,patt1)){
            cout<<(i-M)<<endl;
        }
        (text1[text[i-M]])--;
        (text1[text[i]])++;
        
    }
    if(isanagram(text1,patt1)){
        cout<<(N-M)<<endl;
    }
    
    
}
int main(){
    cin>>text;
    cin>>pattern;
    check_anagram(text,pattern);
    return 0;
}
