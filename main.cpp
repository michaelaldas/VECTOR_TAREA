#include <iostream>
#include <time.h>
#include<stdlib.h>
#include <windows.h>

using namespace std;
//vectores y funciones
//lectura del vector
void leer_vector(int num[], int tamanio)
{
    for(int i=0; i<tamanio; i++)
    {
        cout<<"Ingrese el elemnto #" <<(i+1)<<" : ";
        cin>>num[i];
    }
}
void imprime_vectore(int vector[], int tamanio)
{
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for(int i=0; i<tamanio; i++)
    {
        cout<<endl<<"Elemento # " << (i+1) <<" : " <<vector[i];
    }
}
//Realizar la sumatoria del elemento del vector
double sumatoria_vector(int vector[], int tamanio)
{
    double suma=0;
    for(int i=0; i<tamanio; i++)
        suma+=vector[i];

    return suma;
}
//Realizar el promedio de los elemtos del vector
int promedio_vector (int vector[], int tamanio)
{
    double promedio=0;
    promedio = sumatoria_vector(vector, tamanio)/tamanio;
    return promedio;
}

//EJERCICIO 1.1) Funcion que devuelve el elemento minimo del vector
int minimo (int vector[], int tamanio)
{
    int min=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]<min)
            min=vector[i];
    }
    return min;
}
//EJERCICIO 2.1)Función que devuelve el elemento maximo del vector
int maximo (int vector[], int tamanio)
{
    int max=vector[0];
    for(int i=0; i<tamanio; i++)
    {
        if(vector[i]>max)
            max=vector[i];
    }
    return max;
}
//EJERCICIO 3.1)Función que devuelve por referencia el elemento mínimo y máximo del vector
void mayor_menor (int vector[], int tamanio, int &mayor, int &menor)
{
    mayor = maximo(vector, tamanio);
    menor = minimo(vector, tamanio);
}
//EJERCICIO 4.1)Función que llene el vector con valores aleatorios
void vector_aleatorio(int num[], int tamanio) {
    //Los vectores siempre pasan por referencia
    srand(time(NULL));
    for (int i = 0; i < tamanio; i++) {
        num[i] = 1 + rand() % 1000;
    }
}

//EJERCICIO 1.2) Diseñe la funcion que busque un numero entero en el vector.
// la funcion debe volverse verdadero si el elemento existe en el vector,
//o falso en caso contrario
//Busqueda secuencial
bool buscar(int array [], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return true;
    }
    return false;
}

//EJERCICIO 2.2) Diseñe la funcion que busque un numero entero en el vector.
//la funcion debe devolver la posicion donde el elemento fue encontrado.
//Devuelve -1 si no existe.
//Busqueda secuencial
int buscar_pos(int array [], int tamanio, int elemento)
{
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            return i;
    }
    return -1;
}
//EJERCICIO 3.2) Diseñe la funcion que devuelva la cantidad de veces que existe un entero
//en el vector
//vector[10,45,6,10,8,10]. El elemento 10 existe 3 veces
//El elemento 1 existe 0 veces
int contar_elemento(int array[], int tamanio, int elemento)
{
    int cont=0;
    for(int i=0;i<tamanio;i++)
    {
        if(array[i]==elemento)
            cont++;
    }
    return cont;
}
//EJERCICIO 4.2) Diseñe la funcion que ordene el vector de manera descendete

void ordenacion_des(int vector[],int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (vector[i] < vector[j])
            {
                int aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
}
void imprimir(int num[], int tamanio)
{
    cout<<endl<<endl<<" ELEMENTOS DEL VECTOR ";
    for (int i = 0; i < tamanio; ++i)
    {
        cout<<endl<<" elemento # "<< i <<" : "<<num[i];
    }
}
void leer_vector1(int num[], int tamanio)
{
// Los vectores siempre se pasan por referencia
    srand (time(NULL));
    for (int i = 0; i < tamanio; ++i)
    {
        num[i] = rand () % 25+1;

    }

}
double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
    LARGE_INTEGER freq;
    QueryPerformanceFrequency(&freq);
    return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}
//Diseñe la funsion que realice el intercambio
void intercambio(int &num1, int &num2)
{
    int aux;
    aux=num1;
    num1=num2;
    num2=aux;
}
//ordenar el vector de menor a mayor (ascendente)
void ordenacion_secuencial(int vector[],int tamanio)
{
    for (int i = 0; i < tamanio; i++)
    {
        for (int j = i + 1; j < tamanio; j++)
        {
            if (vector[i] > vector[j])
            {//intercambiar los elementos
                intercambio(vector[i], vector[j]);
                /*
                int aux;
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
                */
            }
        }
    }
}
//EJERCICIOS DE LA TAREA
//EJERCICIO 1) Diseñe la función que imprima el vector de nombres
void nombre_vect (int limite)
{
    string nombres_vect[limite];
    for(int i = 0; i < limite; i++)
    {
        cout << "\n******* Nombres " << i + 1 << " ********:\n";
        cout << endl<<"Primer nombre: ";
        cin >> nombres_vect[i];
    }
}
//2. Diseñe la función que ordene descendentemente (Z-A) el vector de nombres
void ordenar_nombre (int Max){
    int ciclo_A,ciclo_B;
    char nombre[5][10];
    char aux[20];
    //Ciclo que solicita nombres
    for(ciclo_A=0;ciclo_A<Max;ciclo_A++){
        cout<<("INGRESA UN NOMBRE: ");
        cin>>(nombre[ciclo_A]);
    }
    for(ciclo_A=1;ciclo_A<6;ciclo_A++)
        for(ciclo_B=0;ciclo_B<5-ciclo_A;ciclo_B++)
            if(strcmp(nombre[ciclo_B],nombre[ciclo_B+1])<0)
            {
                strcpy(aux,nombre[ciclo_B]);
                strcpy(nombre[ciclo_B],nombre[ciclo_B+1]);
                strcpy(nombre[ciclo_B+1],aux);
            }
    cout<<endl<<("__NOMBRES EN ORDEN__ ");
    for(ciclo_A=0;ciclo_A<Max;ciclo_A++){
        cout<<endl<<(nombre[ciclo_A]);
    }
}

int main()
{
    LARGE_INTEGER t_ini, t_fin;
    double secs;
    const int MAX=20;
    int num[MAX];

    //Llamada a la funcion para leer el vector
    //leer_vector(num, MAX);
    num[11]=155;
    vector_aleatorio(num, MAX); //llenar el vector con numero aleatorios
    cout<<endl<<"Vecetor original ";
    cout<<endl<<"VECTOR ORDENADO ";
    //captura tiempo incial del proceso
    QueryPerformanceCounter(&t_ini);
    ordenacion_secuencial(num,MAX);
    //captura el tiempo despues de concluir el proceso
    QueryPerformanceCounter(&t_fin);
    secs = performancecounter_diff(&t_fin, &t_ini);
    cout<<"\nORDENACION SECUENCIAL: Tiempo EJECUCION en ms: "<<(secs*1000.0);
    //ordenacion_des(num,MAX);
    imprime_vectore(num, MAX);

    int suma=sumatoria_vector(num,MAX);
    cout<<endl<<" LA SUMATORIA DEL VECTOR ES: "<<suma;
    cout<<endl<<" EL PROMEDIO ES: "<<promedio_vector(num, MAX);

    cout<<endl<<" EL ELEMENTO MAYOR ES: "<<maximo(num,MAX);
    cout<<endl<<" EL ELEMENTO MINIMO ES: "<<minimo(num,MAX);

    int may, men;
    mayor_menor(num,MAX,may,men);
    cout<<endl<<endl<<" Mayor encontrado: "<<may;
    cout<<endl<<endl<<" Menor encontrado: "<<men;

    //buscar elemento en el vector
    int x=155;
    if(buscar(num,MAX,x)==true)

        cout<<endl<<" El elemento "<< x <<" Si existe..";
    else
        cout<<endl<<" El elemento "<< x <<" No existe..";

    int pos=buscar_pos(num,MAX,x);
    if(pos==-1)
        cout<<endl<<" NO EXISTE EL ELEMENTO "<< x <<" EN EL VECTOR: "<<endl<<pos;
    else
        cout<<endl<<" EL ELEMENTO "<< x <<" EXISTE EN LA POSICION: "<<endl<<pos;

    cout<<endl<<"\nEJERCICIOS DE LA TAREA ";
    int limite_numero;
    cout << "\nIngrese el numero de datos: ";
    cin>>limite_numero;
    nombre_vect(limite_numero);

    int Max=5;
    ordenar_nombre(Max);



    return 0;
}