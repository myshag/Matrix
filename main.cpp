/*Задание 1. Написать перегруженные функции (int, double,
char) для выполнения следующих задач:
■ Инициализация квадратной матрицы;
■ Вывод матрицы на экран;
■ Определение максимального и минимального элемента
на главной диагонали матрицы;
■ Сортировка элементов по возрастанию отдельно для
каждой строки матрицы.
*/

#include <iostream>
#include <ctime>
#include <algorithm>

using namespace std;

const int M = 6;

template<typename T>
void randomFillArray(T array[M][M],int a,int b)
{
  srand(time(0));
  for (int i=0;i<M;i++)
    for (int j=0;j<M;j++)
    {
      array[i][j] = rand()%b+a;
    }
}

template<typename T>
void printArray_t(T array[M][M])
{
  srand(time(0));
  for (int i=0;i<M;i++)
  {
     std::cout << "| ";

    for (int j=0;j<M;j++)
    {
      cout.width(4);
      std::cout << array[i][j] << " ";
    }

    std::cout << "|\n";
}
}

void createArray(int array[M][M])
{
  randomFillArray(array,0,100);
}

void createArray(double array[M][M])
{
  randomFillArray(array,0,2000);
}

void createArray(char array[M][M])
{
  randomFillArray(array,61,23);
}

void printArray(int array[M][M])
{
  printArray_t(array);
}

void printArray(double array[M][M])
{
  printArray_t(array);
}

void printArray(char array[M][M])
{
  printArray_t(array);
}

int max(int array[M][M])
{
  int max =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (max< array[i][i])
    {
      max = array[i][i];
    }
 
  }
     return max;
}

double max(double array[M][M])
{
  double max =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (max< array[i][i])
    {
      max = array[i][i];
    }
 
  }
     return max;
}

char max(char array[M][M])
{
  char max =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (max< array[i][i])
    {
      max = array[i][i];
    }
 
  }
     return max;
}

int min(int array[M][M])
{
  int min =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (min> array[i][i])
    {
      min = array[i][i];
    }
 
  }
     return min;
}

double min(double array[M][M])
{
  double min =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (min> array[i][i])
    {
      min = array[i][i];
    }
 
  }
     return min;
}

char min(char array [M][M])
{
  char min =  array[0][0];
  for (int i=1; i<M;i++)
  {
    if (min> array[i][i])
    {
      min = array[i][i];
    }
 
  }
     return min;
}

template< class T >
void sort_line(T array[M])
{
 
  for (int i=0; i<M;i++)
  for (int j=0; j<M-1-i;j++)
  {
    if (array[j]>array[j+1])
    {
      //std::cout <<"do: "<< array[j] <<array[j+1];
      std::swap(array[j],array[j+1]);
     // std::cout <<"Posle:"<< array[j] <<array[j+1];
    }
  }
    
}

void sortArray(int array [M][M])
{
   for (int i=0; i<M;i++)
   {
     sort_line(array[i]);
   }

}

void sortArray(double array [M][M])
{
   for (int i=0; i<M;i++)
   {
     sort_line(array[i]);
   }

}

void sortArray(char array [M][M])
{
   for (int i=0; i<M;i++)
   {
     sort_line(array[i]);
   }

}



int main() {
  int arrInt[M][M];
  double arrDoulbe[M][M];
  char arrChar[M][M];

  
  createArray(arrInt);
  createArray(arrDoulbe);
  createArray(arrChar);

  std::cout << "\nArray of int:\n";
  printArray(arrInt);
  std::cout << "\nArray of doulbe:\n";
  printArray(arrDoulbe);
  std::cout << "\nArray of char:\n";
  printArray(arrChar);

  sortArray(arrInt);
  sortArray(arrDoulbe);
  sortArray(arrChar);

  std::cout << "\nSorted array of int:\n";
  printArray(arrInt);
  std::cout << "\nSorted array of doulbe:\n";
  printArray(arrDoulbe);
  std::cout << "\nSorted array char:\n";
  printArray(arrChar);

  std::cout << "\nmin element in diag of int:\n";
  std::cout << min(arrInt)<<endl;

  std::cout << "\nmax element in diag of int:\n";
  std::cout << max(arrInt)<<endl;


   std::cout << "\nmax element in diag of Doulbe:\n";
   std::cout <<min(arrDoulbe)<<endl;

   std::cout << "\nmax element in diag of Doulbe:\n";
   std::cout << max(arrDoulbe)<<endl;

   std::cout << "\nmax element in diag of Char:\n";
   std::cout <<min(arrChar)<<endl;

   std::cout << "\nmax element in diag of Char:\n";
   std::cout << max(arrChar)<<endl;

  //Определение максимального и минимального 
  //элемента на главной диагонали матрицы;



}