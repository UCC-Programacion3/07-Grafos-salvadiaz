#ifndef GRAFOENLAZADO_H
#define GRAFOENLAZADO_H


template<class T>
class GrafoEnlazado {

private:


public:
    GrafoEnlazado();

    // Metodos de Nodos

    void nodo_agregar(int n, T val);

    void nodo_remover(int n);

    void nodo_set_val(int n, T val);

    int nodo_get_val(int n2);


    // Metodos de Arcos

    void arco_agregar(int n1, int n2, int val);

    void arco_remover(int n1, int n2);

    void arco_set_val(int n1, int n2, int val);

    int arco_get_val(int n1, int n2);


    int adyacentes(int n1, int n2);

    int *vecinos(int n);

    bool esVacio();
};

template<class T>
GrafoEnlazado<T>::GrafoEnlazado() {

}

template<class T>
void GrafoEnlazado<T>::nodo_agregar(int n, T val) {

}

template<class T>
void GrafoEnlazado<T>::nodo_remover(int n) {

}

template<class T>
void GrafoEnlazado<T>::nodo_set_val(int n, T val) {

}

template<class T>
int GrafoEnlazado<T>::nodo_get_val(int n2) {
    return 0;
}

template<class T>
void GrafoEnlazado<T>::arco_agregar(int n1, int n2, int val) {

}

template<class T>
void GrafoEnlazado<T>::arco_remover(int n1, int n2) {

}

template<class T>
void GrafoEnlazado<T>::arco_set_val(int n1, int n2, int val) {

}

template<class T>
int GrafoEnlazado<T>::arco_get_val(int n1, int n2) {
    return 0;
}

template<class T>
int GrafoEnlazado<T>::adyacentes(int n1, int n2) {
    return 0;
}

template<class T>
int *GrafoEnlazado<T>::vecinos(int n) {
    return nullptr;
}

template<class T>
bool GrafoEnlazado<T>::esVacio() {
    return false;
}


#endif //GRAFOENLAZADO_H
