#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int dim;
    int n;
    int n_da_el, n_da_ins, pos_v;
    int n_vettore_copia;

    cout << "Inserire la dimensione del vettore: " << endl;
    cin >> dim;

    int V[dim] = {};
    int V_copia[dim] = {};
    int VP[10] = {};
    int somm = 0;
    int sommP = 0;
    int VD[10] = {};
    int sommD = 0;
    int max = 0;
    int min = -1;
    int media = 0;
    int contElemNull = 0;

    //Inserimento      a
    for (int i = 0; i < dim; i++) {
        cout << "Inserire il valore numero [" << i << "]" << endl;
        cin >> V[i];
    }

    //Stampa           b
    for (int i = 0; i < dim; i++) {
        cout << "Valore numero [" << i << "]" << setw(2) << right << " | " << "valore: " << V[i] << endl;
    }

    cout << endl;

    //Stampa ordine inverso   c
    for (int i = dim - 1; i >= 0; i--) {
        cout << "Valore numero [" << i << "]" << setw(2) << right << " | " << "valore: " << V[i] << endl;
    }

    //Ricerca   d
    cout << "Inserire il numero che si vuole trovare: " << endl;
    cin >> n;

    cout << endl;

    for (int i = 0; i < dim; i++) {
        if (V[i] == n) {
            cout << "Numero trovato in posizione [" << i << "]" << endl;
        }
    }


    //Sommatoria numeri pari e dispari  e
    for (int i = 0; i < dim; i++) {
        if (V[i] % 2 == 0) {
            VP[i] = V[i];
            sommP += V[i];
        } else {
            VD[i] = V[i];
            sommD += V[i];
        }
    }

    cout << endl;

    for (int i = 0; i < dim; i++) {
        if (VP[i] != 0) {
            cout << "Numero pari N [" << i << "]" << setw(2) << right << " | " << "valore: " << VP[i] << endl;
        }
    }
    cout << "Somma numeri pari N: " << sommP << endl;

    cout << endl;


    for (int i = 0; i < dim; i++) {
        if (VD[i] != 0) {
            cout << "Numero dispari N [" << i << "]" << setw(2) << right << " | " << "valore: " << VD[i] << endl;
        }
    }
    cout << "Somma dispari pari N: " << sommD << endl;

    cout << endl;

    //massimo minimo e media f
    for (int i = 0; i < dim; i++) {
        if (V[i] > max) {
            max = V[i];
        }
    }

    for (int i = 0; i < dim; i++) {
        if (min < V[i]) {
            min = V[i];
        }
    }

    for (int i = 0; i < dim; i++) {
        somm += V[i];
        media = somm / dim;
    }

    cout << "Minimo:  " << min << endl;
    cout << "Massimo:  " << max << endl;
    cout << "Media:  " << media << endl;

    cout << endl;

    //g) Verificare se esistono elementi nulli nel vettore V. In caso positivo contarli e stamparli.

    for (int i = 0; i < dim; i++) {
        if (V[i] == 0) {
            contElemNull++;
        }
    }

    cout << "Numero di elementi nulli:  " << contElemNull << endl;

    cout << endl;


    /* h) Dopo aver fatto la copia del vettore V, richiedere la posizione di un elemento da eliminare
    nel vettore copia e eliminarlo dal vettore copia(V_copia) */

    for (int i = 0; i < dim; i++) {
        V_copia[i] = V[i];
    }

    cout << "Inserire il numero che si vuole eliminare nel vettore copia: " << endl;
    cin >> n_vettore_copia;

    int new_dim_v_copia = dim;
    for (int i = 0; i < new_dim_v_copia; i++) {
        if (V_copia[i] == n_vettore_copia) {
            for (int j = i; j < new_dim_v_copia - 1; j++) {
                V_copia[j] = V_copia[j + 1];
            }
            new_dim_v_copia--;
            i--;
        }
    }

    for (int i = 0; i < new_dim_v_copia; i++) {
        cout << "Numero vettore copia[" << i << "]" << setw(2) << right << " | " << "valore: " << V_copia[i] <<
                endl;
    }


    /*
    i) Richiedere il valore di un elemento da eliminare nel vettore V e eliminarlo da V
     */

    cout << "Inserire il numero che si vuole eliminare nel vettore: " << endl;
    cin >> n_da_el;

    int new_dim_v = dim;
    for (int i = 0; i < new_dim_v; i++) {
        if (V[i] == n_da_el) {
            for (int j = i; j < new_dim_v - 1; j++) {
                V[j] = V[j + 1];
            }
            new_dim_v--;
            i--;
        }
    }

    for (int i = 0; i < new_dim_v; i++) {
        cout << "Numero vettore [" << i << "]" << setw(2) << right << " | " << "valore: " << V[i] << endl;
    }

    /*
    l)Richiedere il valore di un numero intero x e la posizione in cui deve essere inserito, e
successivamente inserire tale valore nel vettore V.
    */

    cout << "Inserire il numero che si vuole inserire nel vettore: " << endl;
    cin >> n_da_ins;
    cout << "Inserire la posizione nella quale si vuole inserire: " << endl;
    cin >> pos_v;


    for (int i = dim; i > pos_v; i--) {
        V[i] = V[i - 1];
    }

    V[pos_v] = n_da_ins;
    dim++;

    cout << "Vettore aggiornato: " << endl;
    for (int i = 0; i < dim; i++) {
        cout << "Numero vettore [" << i << "]" << setw(2) << right << " | " << "valore: " << V[i] << endl;
    }

    return 0;
}
