#include<iostream>
using namespace std;

int getLen(char arr[]) {
    int count = 0;
    while(arr[count] != '\0') {
        count++;
    }
    return count;
}

void reverse(char arr[], int start, int end) {
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void reverseWords(char arr[]) {

    int len = getLen(arr);

    // Step 1: Reverse the whole string
    reverse(arr, 0, len - 1);

    // Step 2: Reverse each word
    int start = 0;

    for(int i = 0; i <= len; i++) {

        if(arr[i] == ' ' || arr[i] == '\0') {
            reverse(arr, start, i - 1);
            start = i + 1;
        }
    }
}