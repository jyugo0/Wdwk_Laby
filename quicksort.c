#include <stdio.h>
#include <stdlib.h>
extern int tab[1000] = { 9,72,77,81,86,99,111,112,114,124,138,156,162,190,206,207,210,217,257,261,271,281,296,304,304,310,312,314,331,334,347,352,383,391,392,395,399,410,421,424,424,427,435,439,453,457,460,490,491,492,494,505,509,512,517,518,518,527,577,580,584,596,612,634,642,654,656,658,662,682,684,713,726,741,747,753,756,783,807,817,821,821,823,839,867,886,890,893,903,927,930,934,934,955,955,964,974,989,992,993 };
extern void quicksort(int* array, int left, int right) {
	int p;
	if (left < right) {
		int pivot = array[right];
		int i = left - 1;
		for (int j = left; j <= right - 1;j++) {
			if (array[j] < pivot) {
				i++;
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		int temp2 = array[i+1];
		array[i+1] = array[right];
		array[right] = temp2;
		p = i + 1;
		quicksort(array, left, p - 1);
		quicksort(array, p + 1, right);
	}
	
 }
extern void ttR(int i, int j) {
	printf("wynik %d",i);
	printf("\n");
	printf("wynik %d", j);
}


