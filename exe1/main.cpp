#include <iostream>
using namespace std;
int invertir(int a[][4],int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n/2; j++){
	  int temp = a[i][j];//invierto la matriz por filas
            a[i][j] = a[i][n-j-1];
            a[i][n-j-1] = temp;
        }
    }
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
	  int temp = a[i][j];//invierto la matriz por columnas
            a[i][j] = a[n-i-1][j];
            a[n-i-1][j] = temp;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
	  cout << a[i][j] << " ";//imprimo la matriz ya invertida
        }
        cout << endl;
    }
}
void cambio(int a[][4], int n){
    for(int i = 0; i < n; i++){
      a[0][i] = 0;//inicializo la primera fila en 0
    }
    for(int i = 0; i < n; i++){
      if(i == n - 1){//pongo en 0 todas las columnas excepto la ultima
            a[i][n-1] = 1;
        }
        else{
            a[i][n-1]=0;
        }
    }
    for(int i = 0; i < n; i++){
      for(int j=0; j < n; j++){
	cout << a[i][j] << " ";//muestro mi matriz cambiada
      }
      cout << endl;
    }
	
}
void mult(int a[][4], int b[][4], int n){
    int aux[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
	  aux[i][j]=0;//inicializo mi matriz aux en 0
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
	      aux[i][j] += a[i][k] * b[k][j];//multiplico las dos matrices
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
	  cout << aux[i][j] << " ";//muestro la multiplicacion resultante
        }
        cout << "\n";
    }
}
int main()
{
    /*ejercicio 1*/
    int a[4][4],b[4][4];//declaro las dos matrices de 4x4
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];//ingreso datos
        }
    }
    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 4; j++){
            cin >> b[i][j];//ingreso datos
        }
    }
    invertir(a,4);
    cambio(b,4);
    mult(a,b,4);


    return 0;
}
