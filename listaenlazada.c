#include <stdio.h>

    
    struct{
        int TareaID;
        char* Descripcion;
        int Duracion;

    }typedef TTarea;
    
    struct TNodo{
        TTarea Tarea;
        struct TNodo *Siguiente;
    }typedef TNodo;

    typedef TNodo * TLista;


void TareaNueva(void); //defino la funcion, solamente 
void InicializarLista(TLista * Lista);
int main(){

    TLista Lista = NULL;
    // CrearTareaNueva(&lista);
    return 0;

}


// void CrearTareaNueva(){ //acá me explayo programandola, sí total el compilador la va a encontrar por el identificador (nombre de la func)

//     printf("Ingrese la descripción de la tarea: \n");
//     scanf("%s",Lista.Nodo.);
//     printf("Ingrese la duración de la tarea\n");
//     scanf("%n",Lista.Nodo.);
//     printf("\n");

// }

//Deprecated ideas


    // struct TLista{
    //     int cantidadNodos;
    //     TNodo * Cabecera;
    //     TNodo * UltimoNodo;
    // }typedef TLista;