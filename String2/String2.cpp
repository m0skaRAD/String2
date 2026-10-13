#include <iostream>
using namespace std;

int mystrlen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length += 1;
    }
    return length;
}
char* mystrcpy(char* str1, const char* str2) {
    int i = 0;
    while (str2[i] != '\0') {
        str1[i] = str2[i];
        i += 1;
    }
    str1[i] = '\0';
    return str1;
}

char* mystrcat(char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    int j = 0;
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i += 1;
        j += 1;
        }
    str1[i] = '\0';
    return str1;
}

char* mystrchr(char* str, char s) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == s) {
            return &str[i];
        }
        i += 1;
    }
    return 0;
}

char* mystrstr(char* str1, char* str2) {
    int i = 0;
    int j = 0;
    int index = 0;
    bool flag = false;
    while (str1[i] != '\0') {
        if (str1[i] == str2[j]) {
            index = i;
            while (str2[j] != '\0' && str1[i] != '\0') {
                if (str2[j] == str1[i]) {
                    flag = true;
                    i += 1;
                    j += 1;
                }
                else {
                    i = index+1;
                    j = 0;
                    flag = false;
                    break;
                }
            }
            j = 0;
        }
        else {
            i += 1;
        }        
    }
    if (flag == true) {
        return &str1[index];
    }
    else {
        return 0;
    }
}


int main()
{
    std::cout << "Hello World!\n";
}