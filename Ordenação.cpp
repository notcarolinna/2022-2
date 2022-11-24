
                                          ALGORITMOS DE ORDENAÇÃO

BUBBLE SORT:
- Mais simples e menos eficiente
- Ineficiente para listas muito grandes
- Elemento da posição i será comparado com o elemento da pos i + 1

    // Implementação por recursão c++
    void bubblesort(int arr[], int n)
{
    if (n == 1) // Caso inicial
        return;
    bool swap_flag = false;
    for (int i = 0; i < n - 1; i++) // Após essa passada, o elemento maior é movido para o local desejado.
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swap_flag = true;
        }
    }
    // Se não houver a troca de dois elementos no laço, retorna, pois o array está ordenado
    if (swap_flag == false)
        return;
    bubblesort(arr, n - 1); // Recursão para o restante do array
}

INSERTION SORT : 
- Simples e eficiente quando aplicado a pequenas listas 
- Estável : mantém a ordem relativa dos valores iguais

QUICK SORT : 
-Mais eficiente 
- Escolhe um número, procura se tem um número menor na lista e troca de lugar com ele. Depois, procura - se um número maior
e troca de lugar e assim ocorre até ordenar o vetor inteiro.

#include <stdio.h>
              void
              swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: n");
    printArray(arr, n);
    return 0;
}

MERGE SORT : -É visto como uma árvore binária - Divisão e conquista, divide o array em duas metades

    void
    merge(int array[], int left, int mid, int right)
{
    int i, j, k;

    // tamanho do sub-array esquerdo
    int size_left = mid - left + 1;

    // tamanho do sub-array direito
    int size_right = right - mid;

    /* Criar arrays temporários */
    int Left[size_left], Right[size_right];

    /* Copiar dados para os arrays temporários L[] e R[] */
    for (i = 0; i < size_left; i++)
    {
        Left[i] = array[left + i];
    }

    for (j = 0; j < size_right; j++)
    {
        Right[j] = array[mid + 1 + j];
    }

    // Mesclar os arrays temporários de volta no arr[left..right]
    i = 0;    // índice inicial do sub-array esquerdo
    j = 0;    // índice inicial do sub-array direito
    k = left; // índice inicial do array mesclado

    while (i < size_left && j < size_right)
    {
        if (Left[i] <= Right[j])
        {
            array[k] = Left[i];
            i++;
        }
        else
        {
            array[k] = Right[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de Left[]
    while (i < size_left)
    {
        array[k] = Left[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de R[]
    while (j < size_right)
    {
        array[k] = Right[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        // Ordenar a primeira e a segunda metade
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Finalmente, mesclá-las
        merge(array, left, mid, right);
    }
}
