#include <iostream>

using namespace std;

int main() {
    int number[3] = {[0]=1, [1]=2, [2]=3};

    int matrix[2][2] = {[0]={[0]=5,[1]=6},[1]={[0]=4, [1]=3}};

   int matrixa[2][2] = {[0]={[0]=2,[1]=3}, [1]={[0]=3, [1]=4}};
   int matrixb[2][2] = {[0]={[0]=5,[1]=6}, [1]={[0]=7, [1]=8}};
   int matrixhasil[2][2];

    matrixhasil[0][0] = matrixa[0][0] + matrixb[0][0];
    matrixhasil[0][1] = matrixa[0][1] + matrixb[0][1];
    matrixhasil[1][0] = matrixa[1][0] + matrixb[1][0];
    matrixhasil[1][1] = matrixa[1][1] + matrixb[1][1];

   for (int i=0; i<2;i++){
    for (int j = 0; j<2; j++) {
        cout << matrix[1][j] << " ";
    }

    cout << '\n';
   }
}