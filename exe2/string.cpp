#include <iostream>
using namespace std;
void invertir(char a[128]){
  int j = 0;
  while(a[j] != '\0'){//aqui saco por asi decirlo el size de mi char
    j++;
  }
  for(int i = 0; i < j/2; i++){//aqui invierto mi array de chars en un O(n/2)
    char temp = a[i];
    a[i] = a[j-i-1];
    a[j-i-1] = temp;
  }
}
int main(){
  char str[128];
  int letras[26];//declaro de tamanio 26 ya que el codigo ASCII que es el alfabeto ingles solo tiene 26 letras
  char aux[128];
  cin >> str;
  int i = 0,j=0;
  for(int k = 0; k < 26; k++){
    letras[k] = 0;//inicializo todo mi array de chars en 0
  }
  while(str[i] != '\0'){
    if(str[i] >= 'a' && str[i] <= 'z'){
      letras[str[i] - 'a']++;//aqui aumento la posicion de mi array segun la letra que encuentre ejem a = 97, a-a = letras[0]++
      aux[j] = str[i] - 32;//le resto menos 32 ya que la diferencia entre 'a' = 97 y 'A' = 65 es 32 por lo tanto todo el resto de letras, su diferencia tambien sera 32, esto lo hago para agregar solo mayusculas
      j++;
    }
    else if(str[i] >= 'A' && str[i] <= 'Z'){
      letras[str[i] - 'A']++;
      aux[j] = str[i];
      j++;
    }
    i++;
  }
  cout << "Array auxiliar antes:\n";
  i = 0;
  while(aux[i] != '\0'){
    cout << aux[i];
    i++;
  }
  cout << endl;
  invertir(aux);
  cout << "Array auxiliar despues:\n";
  i = 0;
  while(aux[i] != '\0'){
    cout << aux[i];
    i++;
  }
  cout << endl;
  cout << "Numero de vocales encontradas\n";
  for(i = 0; i < 26; i++)
    cout << char('a'+i) << " ";//transformo a char
  cout << endl;
  for(i = 0; i < 26; i++)
    cout << letras[i] << " ";//imprimo mi array de letras
  cout << endl;
  return 0;
}
