#include<stdio.h>
#include<stdlib.h> 
//declaracion en cabecera de prototipos de las funciones
void suma_Vect(int g);
void resta_Vect(int g);
void mult_Esalar(int g);
void metodo_Burbuja(int g);
void buscar_Elemento(int g);
void suma_Matrices(int g);
void resta_Matrices(int g);
void matriz_Escalar(int g);
void mult_Matrices(int g);
void metodo_Cramer(int g);
//funcion del menu de opciones
void menu()
{
	printf("**MENU DE OPCIONES**\n");
	printf("\n Que operacion deseas hacer?\n\n");
	printf("\n 1.Suma de vectores:");
	printf("\n 2.Resta de vectores:");
	printf("\n 3.Multiplicacion por un escalar:");
	printf("\n 4.Ordenamiento por el metodo burbuja:");
	printf("\n 5.Busqueda de un elemento en un arreglo:");
	printf("\n 6.Suma de matrices:");
	printf("\n 7.Resta de matrices:");
	printf("\n 8.Matriz por un escalar:");
	printf("\n 9.Multiplicacion de matrices:");
	printf("\n 10.Sistema de ecuaciones por el metodo de cramer:");
	printf("\n 11.Salir:");
	printf("\n");
}
//funcion de suma de dos vectores
void suma_Vect(int g)
{
	int n,i,v1[20],v2[20],vsuma[20];
	
	printf("ingresa el tamanio del vector:\n");
	scanf("%d",&n);
	printf("ingresa los elementos del vector 1:\n");
	for(i=0;i<n;i++)
	{
		printf("vector 1 [%d]=",i);
		scanf("%d",&v1[i]);
	}
	printf("ingresa los elementos del vector 2:\n");
	for(i=0;i<n;i++)
	{
		printf("vector 2 [%d]=",i);
		scanf("%d",&v2[i]);
	}
	printf("la suma de los vectores es:\n");
	for(i=0;i<n;i++)
	{
		vsuma[i]=v1[i]+v2[i];
		printf("%d\t",vsuma[i]);
	}
}
//funcion de resta de vectores
void resta_Vect(int g)
{
	int n,i,v1[20],v2[20],vresta[20];
	
	printf("ingresa el tamanio del vector:\n");
	scanf("%d",&n);
	printf("ingresa los elementos del vector 1:\n");
	for(i=0;i<n;i++)
	{
		printf("vector 1 [%d]=",i);
		scanf("%d",&v1[i]);
	}
	printf("ingresa los elementos del vector 2:\n");
	for(i=0;i<n;i++)
	{
		printf("vector 2 [%d]=",i);
		scanf("%d",&v2[i]);
	}
	printf("la resta de los vectores es:\n");
	for(i=0;i<n;i++)
	{
		vresta[i]=v1[i]-v2[i];
		printf("%d\t",vresta[i]);
	}
}
//funcion de multiplicacion por un escalar
void mult_Esalar(int g)
{
	int e,i,n,mult[20];
	float v[20];
	printf("ingresa el escalar:\n");
	scanf("%d",&e);
	printf("ingresa el tamanio del vector:\n");
	scanf("%d",&n);
	printf("ingresa los elementos del vector 1:\n");
	for(i=0;i<n;i++)
	{
		printf("vector 1 [%d]=",i);
		scanf("%f",&v[i]);
	}
	printf("la multiplicacion por el escalar es:\n");
	for(i=0;i<n;i++)
    {
    	mult[i]=e*v[i];
    	printf("%d\t",mult[i]);
    }
}
//funcion de ordenamiento por el metodo burbuja
void metodo_Burbuja(int g)
{
	int i,j,n,aux;
	printf("cuantos valores vas a ordenar:\n");
	scanf("%d",&n);
	int *a = (int *)malloc(n * sizeof(int));
	if (a == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
	printf("ingresa los valores a ordenar:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				aux=a[j];
				a[j]=a[j+1];
				a[j+1]=aux;
			}
		}
	}
	printf("ordenados en forma ascendente:\n\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	free(a);
}
//funcion buscar un elmento en un arreglo
void buscar_Elemento(int g)
{
	int k,i,j,n;
	char band='F';
	printf("cuantos numeros deseas ingresar:\n");
	scanf("%d",&n);
	int *a = (int *)malloc(n * sizeof(int));

    if (a == NULL) {
        printf("Error al asignar memoria.\n");
        exit(1);
    }
	printf("ingresa los numeros:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("digita el numero a buscar en el arreglo :\n");
	scanf("%d",&j);
	k=0;
	while((band=='F') && (k<n))
	{
		if(a[k]==j)
		{
			band='V';
		}
		k++;
	}
	if(band=='F')
	{
		printf("el numero %d que pidio buscar no existe en el arreglo:\n",j);
	}
	else if(band =='V')
	{
		printf("el numero %d existe y esta en la posicion %d ",j,k-1);
	}
	free(a);
}
//funcion suma de matrices
void suma_Matrices(int g)
{
	int i,j,f1,f2,c1,c2;
	int m1[10][10],m2[10][10],m3[10][10];
	printf("ingresa las filas de la matriz 1:\n");
	scanf("%d",&f1);
	printf("ingresa las columnas de la matriz 1:\n");
	scanf("%d",&c1);
	printf("ingresa las filas de la matriz 2:\n");
	scanf("%d",&f2);
	printf("ingresa las columnas de la matriz 2:\n");
	scanf("%d",&c2);
	if(f1==f2 && c1==c2)
	{
		//matriz 1
		printf("matriz 1\n");
		for(i=0;i<f1;i++)//filas
		{
			for(j=0;j<c1;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		//matriz 2
		printf("matriz 2\n");
		for(i=0;i<f2;i++)//filas
		{
			for(j=0;j<c2;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		//proceso de la suma de las 2 matrices
		for(i=0;i<f1;i++)
	    {
	    	for(j=0;j<c2;j++)
		    {
			    m3[i][j]=m1[i][j]+m2[i][j];
		    }
     	}
     	//resultado de la suma 
     	printf("\n");
     	printf("la suma de las matrices es:\n");
     	for(i=0;i<f1;i++)
     	{
     		printf("\n");
     		for(j=0;j<c2;j++)
     		{
     			printf("%d  ",m3[i][j]);
     		}
     	}
	}
	else
	{
		printf("la operacion no se puede realizar:\n");
	}
	//muestra matriz 1
	printf("\n");
	printf("**Matriz 1\n");
	for(i=0;i<f1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	//muestra matriz 2
	printf("\n");
	printf("**Matriz 2\n");
	for(i=0;i<f2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
//funcion resta de matrices
void resta_Matrices(int g)
{
	int i,j,f1,f2,c1,c2;
	int m1[10][10],m2[10][10],m3[10][10];
	printf("ingresa las filas de la matriz 1:\n");
	scanf("%d",&f1);
	printf("ingresa las columnas de la matriz 1:\n");
	scanf("%d",&c1);
	printf("ingresa las filas de la matriz 2:\n");
	scanf("%d",&f2);
	printf("ingresa las columnas de la matriz 2:\n");
	scanf("%d",&c2);
	if(f1==f2 && c1==c2)
	{
		//matriz 1
		printf("matriz 1\n");
		for(i=0;i<f1;i++)//filas
		{
			for(j=0;j<c1;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		//matriz 2
		printf("matriz 2\n");
		for(i=0;i<f2;i++)//filas
		{
			for(j=0;j<c2;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		//proceso de la resta de las 2 matrices
		for(i=0;i<f1;i++)
	    {
	    	for(j=0;j<c2;j++)
		    {
			    m3[i][j]=m1[i][j]-m2[i][j];
		    }
     	}
     	//resultado de la resta 
     	printf("\n");
     	printf("la resta de las matrices es:\n");
     	for(i=0;i<f1;i++)
     	{
     		printf("\n");
     		for(j=0;j<c2;j++)
     		{
     			printf("%d  ",m3[i][j]);
     		}
     	}
	}
	else
	{
		printf("la operacion no se puede realizar:\n");
	}
	//muestra matriz 1
	printf("\n");
	printf("**Matriz 1\n");
	for(i=0;i<f1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	//muestra matriz 2
	printf("\n");
	printf("**Matriz 2\n");
	for(i=0;i<f2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
//funcion matriz por un escalar
void matriz_Escalar(int g)
{
	int i,j,f1,c1,e;
	int m1[10][10],m2[10][10];
	printf("ingresa las filas de la matriz :\n");
	scanf("%d",&f1);
	printf("ingresa las columnas de la matriz :\n");
	scanf("%d",&c1);
	printf("ingresa el escalar :\n");
	scanf("%d",&e);
	    
	    //matriz 1
		printf("matriz \n");
		for(i=0;i<f1;i++)//filas
		{
			for(j=0;j<c1;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		//proceso de multiplicacionde matriz por escalar 
		for(i=0;i<f1;i++)
	    {
	    	for(j=0;j<c1;j++)
		    {
			    m2[i][j]=m1[i][j]*e;
		    }
     	}
     	//resultado de la matriz por el escalar
		printf("\n");
     	printf("la multiplicacion por el escalar es:\n");
     	for(i=0;i<f1;i++)
     	{
     		printf("\n");
     		for(j=0;j<c1;j++)
     		{
     			printf("%d  ",m2[i][j]);
     		}
     	}
     	//muestra matriz 1
	printf("\n");
	printf("**Matriz \n");
	for(i=0;i<f1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	//muestra escalar
	printf("escalar \n");
	printf("%d ",e);
}
//funcion multiplicacion de matrices
void mult_Matrices(int g)
{
	int i,j,f1,f2,c1,c2,acu,cont;
	int m1[10][10],m2[10][10],m3[10][10];
	printf("ingresa las filas de la matriz 1:\n");
	scanf("%d",&f1);
	printf("ingresa las columnas de la matriz 1:\n");
	scanf("%d",&c1);
	printf("ingresa las filas de la matriz 2:\n");
	scanf("%d",&f2);
	printf("ingresa las columnas de la matriz 2:\n");
	scanf("%d",&c2);
	if( (f1!=c2) || (f1==f2 && c1==c2) )
	{
		//matriz 1
		printf("matriz 1\n");
		for(i=0;i<f1;i++)//filas
		{
			for(j=0;j<c1;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m1[i][j]);
			}
		}
		//matriz 2
		printf("matriz 2\n");
		for(i=0;i<f2;i++)//filas
		{
			for(j=0;j<c2;j++)//columnas
			{
				printf("ingresa la posicion [%d][%d]:",i,j);
				scanf("%d",&m2[i][j]);
			}
		}
		//proceso de la multiplicacion de las 2 matrices
		for(i=0;i<f1;i++)
		{
			for(j=0;j<c1;j++)
			{
				for(acu=0,cont=0;cont<c1;cont++)
				{
					acu=acu+m1[i][cont]*m2[cont][j];
				}
				m3[i][j]=acu;
			}
		}
     	//resultado de la multiplicacion 
     	printf("\n");
     	printf("la multiplicacion de las matrices es:\n");
     	for(i=0;i<f1;i++)
     	{
     		printf("\n");
     		for(j=0;j<c2;j++)
     		{
     			printf("%d  ",m3[i][j]);
     		}
     	}
	}
	else
	{
		printf("la operacion no se puede realizar:\n");
	}
	//muestra matriz 1
	printf("\n");
	printf("**Matriz 1\n");
	for(i=0;i<f1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d ",m1[i][j]);
		}
		printf("\n");
	}
	//muestra matriz 2
	printf("\n");
	printf("**Matriz 2\n");
	for(i=0;i<f2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d ",m2[i][j]);
		}
		printf("\n");
	}
}
//funcion de sistema de ecuaciones por el metodo de cramer 
void metodo_Cramer(int g)
{
	int op;
	char resp;
	do{
	printf("**Menu**\n");
	printf("1.Sistema de 2 x 2 \n");
	printf("2.Sistemas de 3 x 3 \n");
	printf("Que opcion deseas realizar:\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			{
				float x1,x2,y1,y2,r1,r2,deter,vx,vy;
				printf("datos de la primera ecuacion:\n");
				printf("ingresa los valores de x,y,r1:\n ");
				scanf("%f%f%f",&x1,&y1,&r1);
				printf("datos de la segunda ecuacion ecuacion:\n");
				printf("ingresa los valores de x2,y2,r2:\n ");
				scanf("%f%f%f",&x2,&y2,&r2);
				deter=(x1*y2-y1-x2);
				vx=(r1*y2-y1*r2)/deter;
				vy=(x1*r2-r1*x2)/deter;
				printf("Sistema de ecuacion:\n");
				printf("%.0fx %.0fy = %.0f  \n",x1,y1,r1);
				printf("%.0fx %.0fy = %.0f  \n",x2,y2,r2);
				printf("resultado:\n");
				printf("valor de x=%.0f \n",vx);
				printf("valor de y=%.0f \n",vy);
				printf("valor de la determinante %.0f \n",deter);
				break;
			}
		case 2:
			{
				float x,y,z,r,x2,y2,z2,r2,x3,y3,z3,r3,deter,vx,vy,vz;
	            printf("Datos de la primera ecuacion:\n");
	            printf(" ingresa los valores de x,y,z,r:\n");
	            scanf("%f%f%f%f",&x,&y,&z,&r);
	            printf("Datos de la segunda ecuacion:\n");
	            printf(" ingresa los valores de x2,y2,z2,r2:\n");
	            scanf("%f%f%f%f",&x2,&y2,&z2,&r2);
	            printf("Datos de la tercera ecuacion:\n");
	            printf(" ingresa los valores de x3,y3,z3,r3:\n");
	            scanf("%f%f%f%f",&x3,&y3,&z3,&r3);
	            deter=(x*(y2*z3-z2*y3)-y*(x2*z3-z2*x3)+z*(x2*y3-y2*x3));
	            vx=(r*(y2*z3-z2*y3)-y*(r2*z3-z2*r3)+z*(r2*y3-y2*r3))/deter;
	            vy=(x*(r2*z3-z2*r3)-r*(x2*z3-z2*x3)+z*(x*r3-r2*x3))/deter;
	            vz=(x*(y2*r3-r2*y3)-y*(x2*r3-r2*x3)+r*(x2*y3-y2*x3))/deter;
	            printf("sistema de ecuacion:\n");
 	            printf("x%.0f y%.0f z%0.f = %.0f \n",x,y,z,r);
	            printf("x%.0f y%.0f z%0.f = %.0f \n",x2,y2,z2,r2);
	            printf("x%.0f y%.0f z%0.f = %.0f \n",x3,y3,z3,r3);
	            printf("\n");
	            printf("resultados:\n");
	            printf("x=%.0f \n",vx);
	            printf("y=%.0f \n",vy);
	            printf("z=%.0f \n",vz);
	            printf("deter %.0f \n",deter);
	            break;
			}
			default:
			printf("opcion incorrecta:\n"); 
	}
	printf("\ndesea realizar otra operacion del menu 10 (s/n):\n\n");
	fflush(stdin);
	scanf("%s",&resp);
	}while(resp=='S' || resp=='s');
	
}
//inicio funcion princupal
int main()
{
	int op,g;
	char resp;
	do{//inicio ciclo repetitivo
		
	menu();//invocacion a funcion menu
	printf("\nElige la oprecion que deseas realizar: ");
	scanf("%d",&op);
	switch(op)
	{//inicio case
		case 1:
			suma_Vect(g);
			break;
		case 2:
			resta_Vect(g);
			break;
		case 3:
			mult_Esalar(g);
			break;
		case 4:
			metodo_Burbuja(g);
			break;
		case 5:
			buscar_Elemento(g);
			break;
		case 6:
			suma_Matrices(g);
			break;
		case 7:
			resta_Matrices(g);
			break;
		case 8:
			matriz_Escalar(g);
			break;
		case 9:
			mult_Matrices(g);
			break;
		case 10:
			metodo_Cramer(g);
			break;
		case 11:
			break;
		default:
			printf("\n**Opcion incorrecta");
	}//fin case
	printf("\ndesea realizar otra operacion del menu principal?? (s/n):\n\n");
	fflush(stdin);
	scanf("%s",&resp);
	}while(resp=='S' || resp=='s');//fin ciclo repetitivo
	return 0;
}//fin funcion principal
