//se inicia con biblioteca stdio//
//se se declara la variable invertirnum//
//se abre con el int main//
//se declaran nuevas variables como : numeroavoltear,numero volteado//
//se muestra en pantalla para que ingresen el numero que desean invertir//
//se escanea el numero a voltear//
//se dice que el numero volteado es igual a invertir numero por numero a voltear//
//se muestra en pantalla el numero invertido//

#include <stdio.h>

int InvertirNum(int N);

int main()
{
    int numeroaVoltear, numeroVolteado;
   printf("Ingrese el numero que desea invertir \n");
   scanf("%d", &numeroaVoltear);
   numeroVolteado=InvertirNum(numeroaVoltear);
   printf("El numero invertido es %d \n", numeroVolteado);
   return 0;
}
int InvertirNum(int numeroaVoltear)
{
  int Invertido=0, Resto;
      while(numeroaVoltear!=0)
      {
          Resto=numeroaVoltear%10;
          numeroaVoltear/=10;
          Invertido=Invertido*10+Resto;
       }

     return Invertido;
 }
