int main(){
    
    struct{
        int TareaID;
        char* Descripcion;
        int Duracion;

    }typedef Tarea;
    
        typedef struct Nodo{
        Tarea Tarea;
        struct Nodo *Siguiente;
    };



    return 0;
}