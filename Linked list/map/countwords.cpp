#include<iostream>
using namespace std;

#define OUT 0
#define IN 1

unsigned countWords(char *str){
    int state = OUT;
    unsigned wc = 0;

    //scan all characters one by one
    while(*str){
        if(*str==' ' || *str=='\n' || *str=='\t')
        state = OUT;

        //if next character is not a word seperator and state is out then set the state as in and increment word count

        else if(state == OUT){
            state = IN;
            ++wc;
        }
        //move to next charcter
        ++str;
    }
    return wc;
}
int main(void){
    char str[] = "One two  three\n four\tfive";
    cout<<"No of words: " <<countWords(str);
    return 0;
}