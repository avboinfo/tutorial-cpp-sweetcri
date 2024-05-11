/********************************************************************************
Dolce Davide
3CIN
04/05/2024
*******************************************************************************/
#include <stdio.h>
#include <assert.h>

using namespace std;

int compra(int N, int M, int A, int B) {
  if (N<0){
      return 0;
  }
  
  if (M<0){
     return N * A; 
  } 
  
  if (A<0 || B<0){
    if (A<B){
        return A*N;
    } else {
        return B*M;
    }
}
  
  if (A*N<B){
      return A*N;
      
  } 

  int tmp = N/M;

  int carnet = tmp*B;

  if (N%M * A<B) return carnet + A*(N%M);

  return carnet + B;

}

int main() {
    FILE *fr,*fw;
    int N, M, A, B;


    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    
    assert(4 == fscanf(fr, "%d%d%d%d", &N, &M, &A, &B));

    fprintf(fw, "%d\n", compra(N, M, A, B));
    fclose(fr);
    fclose(fw);

    return 0;

}