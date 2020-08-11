/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>
int mymin (int a, int b, int c){
    if(a<b && a<c)
        return a;
    if(b<c)
        return b;
    return c;
}

int main() {
  //  uncomment the following lines if you want to read/write from files
    //freopen("input0.txt", "r", stdin);
    //freopen("output0.txt", "w", stdout);
  int testcase, T;
  int A, C, r, g, b;



        long long ris[3]={0,0,0}; //r, g, b
  assert(1 == scanf("%d", &T));
  for (testcase = 0; testcase < T; testcase++) {
    assert(5 == scanf("%d %d %d %d %d", &A, &C, &r, &g, &b));
    // insert your code here
    if(r==g && r==b)
        printf("RED\n");
    else{
    ris[0]= A*((r+1)*(r+1)+g*g+b*b)+C*mymin((r+1),g,b);
    ris[1]= A*(r*r+(g+1)*(g+1)+b*b)+C*mymin(r,(g+1),b);
    ris[2]= A*(r*r+g*g+(b+1)*(b+1))+C*mymin(r,g,(b+1));
    if(ris[0]>ris[1] && ris[0]>ris[2])
        printf("RED\n");
    else if(ris[1]>ris[2])
        printf("GREEN\n");
    else
        printf("BLUE\n");
    }
    /*if (A == 42) {
      printf("RED\n");  // change this...
    } else {
      printf("GREEN\n");
    }*/
  }
  return 0;
}
