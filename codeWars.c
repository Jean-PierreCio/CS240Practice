#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t duplicate_count(const char *text) {

    //  <----  hajime!
  int result = 0;
  char mult[26];
  int place = 0;
  int check = 0;
  
  for(int i = 0; text[i]; i++) {
    for(int j = i+1; text[j]; j++) {
        if(i != j && tolower(text[i]) == tolower(text[j])) {
            for(int k = 0; mult[k]; k++) {
                if(mult[k] == tolower(text[j])) {
                    check++;
                }
            } //3
            if(check == 0) {
                result++;
                mult[place] = tolower(text[j]);
                place++;
            }
            check = 0;
        }
    } //2
  } //1
  printf("result: %d", result);
  return result;

}

int main() {
    duplicate_count("aabbcde");
}

