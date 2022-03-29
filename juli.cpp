/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main ()
{
  int a = 0, suma = 0, nota = 0, promedio = 0, aprobado = 0, reprobado = 0;
  int mayor = 0, menor = 0;
  char opcion, nombre;

  do
    {

      printf ("Nombre del alumno \n");
      scanf ("%s", &nombre);

      printf ("Nota del alumno \n");
      scanf ("%d", &nota);
      
      if(nota >=10)
         {
             printf ("aprobado \n");
         }
            else 
            {   printf ("reprobado \n");
            }

      if (nota == 20 || nota == 19)
	{

	  printf ("Sobresaliente \n");
	}
      else
	{
	  if (nota <= 18 && nota >= 16)
	    {

	      printf ("Muy bueno \n");

	    }
	  else
	    {
	      if (nota <= 15 && nota >= 13)
		{

		  printf ("Bueno \n");
		}
	      else
		{
		  if (nota <= 12 && nota >= 10)
		    {
		      printf ("Regular\n");

		    }
		  else
		    {
		      if (nota <= 9 && nota >= 6)
			{
			  printf ("Mejorable \n");
			}
		      else
			{

			  printf ("Deficiente\n");
			}
		    }
		}

	    }
	}



      if (nota >= 10 && nota <= 20)
	{
	  aprobado = aprobado + 1;
	}
      else
	{
	  reprobado = reprobado + 1;

	}
      suma = suma + nota;
      a = a + 1;

      printf ("Desea incluir otro alumno, si o no  \n");
      scanf ("%s", &opcion);

    }
  while (opcion == 's' or opcion == 'S');

  promedio = suma / a;
  printf ("\n El promedio en el salon es %d", promedio);
  printf ("\n Cantidad de alumno en el salon es %d", a);
  printf ("\n La cantidad de aprobados es: %d", aprobado);
  printf ("\n La cantidad de reprobados es: %d", reprobado);
  return 0;
}
