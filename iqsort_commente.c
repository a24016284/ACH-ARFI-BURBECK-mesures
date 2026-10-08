void swap(int i, int j, int *a);

void iqsort0(int *a, int n)
{
    int i, j;
    // Un sous-tableau de taille zéro ou un est déjà trié.
    if (n <= 1)
        return;
    // Répartir les éléments plus petits que le pivot en tête du tableau.
    for (i = 1, j = 0; i < n; i++)
        if (a[i] < a[0])
            swap(++j, i, a);
    // Placer le pivot puis trier récursivement les deux partitions.
    swap(0, j, a);
    iqsort0(a, j);
    iqsort0(a+j+1, n-j-1);
}
