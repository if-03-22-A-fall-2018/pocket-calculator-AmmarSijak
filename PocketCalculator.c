#include <stdio.h>

int main(int argc, char const *argv[]) {
  int numberOne;
  int numberTwo;
  int result = 0;

  GetNumbers(&numberOne, &numberTwo);

}
void Menu(int numberOne, int numberTwo)
{
  int choose;
  printf("Choose one operation :\n" );
  printf("1.Add \n 2.Subtract \n 3.Multiply \n 4.Divide \n You can stop the program with -1 " );
  scanf("%d",choose );

  switch (choose) {
    case 1:result = add(numberOne,numberTwo);
    break;

    case 2:
    break;

    case 3:
    break;

    case 4:
    break;

    case -1:
  }
}

void GetNumbers(int* x, int* y){
  printf("Gebe die erste Zahl ein! \n" );
  scanf("%d",x );

  printf("Gebe die zweite Zahl ein! \n" );
  scanf("%d",y );
}

int Add(int x, int y)
{
  int result;
  result = x + y;
  return result;
}
